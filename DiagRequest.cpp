#include "DiagRequest.h"

std::map<uint8_t, uint8_t> gsmtapChannels{
	{DCCH, GSMTAP_CHANNEL_SDCCH},
	{BCCH, GSMTAP_CHANNEL_BCCH},
	{L2_RACH, GSMTAP_CHANNEL_RACH},
	{CCCH, GSMTAP_CHANNEL_CCCH},
	{SACCH, GSMTAP_CHANNEL_SDCCH | GSMTAP_CHANNEL_ACCH},
	{SDCCH, GSMTAP_CHANNEL_SDCCH},
	{FACCH_F, GSMTAP_CHANNEL_TCH_F | GSMTAP_CHANNEL_ACCH},
	{FACCH_H, GSMTAP_CHANNEL_TCH_F | GSMTAP_CHANNEL_ACCH},
	{L2_RACH_WITH_NO_DELAY, GSMTAP_CHANNEL_RACH}};

bool DiagReq::ExecuteStep(msgQueue &q)
{
	uint8_t msg = q.front();

	if (iret != infinityReadStart)
	{
		if (msg == msgDataAvail)
		{
			ReadCycle(q);
		}
		if (inited)
		{
			if (StartREO())
				iret = infinityReadStart;
			return iret;
		}
	}
	// HARERABOTAT = true;
	return false;
}
bool DiagReq::Decode(size_t size)
{
	uint8_t *ptr = m_rxBuffer;
	size_t iSize = size;
	uint8_t opcode = *ptr++;
	iSize--;
	switch (opcode)
	{
	case DIAG_LOG_F:
	{
		// decode header
		uint8_t pendingMsgs = *ptr++;
		iSize--;
		uint16_t logOuterLength = 0;
		logOuterLength += *ptr++;
		iSize--;
		logOuterLength += (*ptr++) << 8;
		iSize--;
		// inner log packet
		uint16_t logInnerLength = 0;
		logInnerLength += *ptr++;
		iSize--;
		logInnerLength += (*ptr++) << 8;
		iSize--;
		uint16_t logType = 0;
		logType += *ptr++;
		logType += (*ptr++) << 8;
		iSize--;
		iSize--;
		uint64_t log_time = 0;
		log_time += *ptr++;
		log_time += (*ptr++) << 8;
		log_time += (*ptr++) << 16;
		log_time += (*ptr++) << 24;
		log_time += (*ptr++) << 32;
		log_time += (*ptr++) << 40;
		log_time += (*ptr++) << 48;
		log_time += (*ptr++) << 56;
		iSize -= 8;
		std::cout << std::hex << std::showbase << "Received log. Log type:" << logType
				  << " of length " << std::dec << (int)logOuterLength << ": b'" << "size: " << size << std::endl;
		switch (logType)
		{
		case LOG_GSM_RR_SIGNALING_MESSAGE_C: // 2g
		{
			uint8_t *parser = ptr;
			uint8_t channelType = (*parser++);
			iSize--;
			uint8_t messageType = (*parser++);
			iSize--;
			uint8_t length = (*parser++);
			iSize--;
			// packet = signalling_message[:length]!!!

			// std::cout << std::dec << std::endl << (int)(channelType) << "   " << (bool)(channelType & 0x80) << std::endl;
			bool isUplink = (bool)(channelType & 0x80);

			auto gsmFind = gsmtapChannels.find(channelType & 0x7f);
			if (gsmFind == gsmtapChannels.end())
			{
				std::cout << "Unkwnown channel type.. Error logic:(TO DO)";
			}
			uint8_t gsmChannelType = (*gsmFind).second;
			// std::cout << std::dec << std::endl << (int)(gsmChannelType) << std::endl;
			uint8_t interfaceType = GSMTAP_TYPE_ABIS;
			buildGsmtapIp(interfaceType, gsmChannelType, parser, isUplink);
			/*if (gsmChannelType == GSMTAP_CHANNEL_BCCH || gsmChannelType)
				parser++;*/
		}
		break;
		case WCDMA_SIGNALLING_MESSAGE: // WCDMA
		{
			std::cout << "WCDMA RECEIVED" << std::endl;
			uint8_t *parser = ptr;
			uint8_t channelType = (*parser++);
			iSize--;
			uint8_t radio_bearer = (*parser++);
			iSize--;
			uint16_t length = 0;
			length += *parser++;
			iSize--;
			length += (*parser++) << 8;
			iSize--;
			// parser=signaling message
			if (channelType >= 0x80)
			{
				channelType -= 0x80;
				parser += 4;
			}

			parse3G(parser, (size_t)length);
		}
		case LOG_UMTS_NAS_OTA_MESSAGE_LOG_PACKET_C: // UMTS
		{
			std::cout << "UMTS RECEIVED" << std::endl;
			uint8_t *parser = ptr;
			
			uint8_t isUplink=0;
			isUplink=(*parser++);
			
			uint32_t length = 0;
			
			length += *parser++;
			length += (*parser++) << 8;
			length += (*parser++) << 16;
			length += (*parser++) << 24;
			iSize -= 6;
			// parser=signaling_message
			parse3G(parser, (size_t)length);
		}
		break;
		case LOG_LTE_RRC_OTA_MSG_LOG_C: // 4g
		case LOG_LTE_NAS_ESM_OTA_IN_MSG_LOG_C:
		case LOG_LTE_NAS_ESM_OTA_OUT_MSG_LOG_C:
		case LOG_LTE_NAS_EMM_OTA_IN_MSG_LOG_C:
		case LOG_LTE_NAS_EMM_OTA_OUT_MSG_LOG_C:
		{
			std::cout << "LTE RECEIVED" << std::endl;

			iSize-=3;//hdlc_decapsulate

			uint8_t *parser = ptr;
			uint8_t extHeaderVer = (*parser++);
			uint8_t rrcRel = (*parser++);
			uint16_t rrcVer = (*parser++);
			uint8_t bearerId = (*parser++);

			uint16_t phyCellId = 0;
			phyCellId += *parser++;
			phyCellId += (*parser++) << 8;

			// parser=ext_header
			if (extHeaderVer >= 25)
			{
				parser = ptr;
				extHeaderVer = (*parser++);
				rrcRel = (*parser++);
				rrcVer = (*parser++);
				rrcVer += (*parser++) << 8;
				uint8_t ncRrcRel = (*parser++);
				bearerId = (*parser++);
				phyCellId = (*parser++);
				phyCellId += (*parser++) << 8;
				iSize-=8;
			}
			else{
				iSize-=6;
			}
			// parser=ext_header
			uint16_t length = 0;
			uint8_t freqType = 4; // H

			if (extHeaderVer < 8)
				freqType = 2; // I

			uint8_t headerSpec = freqType + 2 + 1 + 2; // freq_type + 'HBH'

			if (*(parser + headerSpec - 1) != iSize - headerSpec)
				headerSpec = freqType + 2 + 1 + 4 + 2; // freqType + HB4xH
			parser += headerSpec - 2;
			length = *parser++;
			length += (*parser++) << 8;
			parse4G(parser, (size_t)length);
			//  while (ptr != &m_rxBuffer[size - 3])
			//  {
			//  	std::cout << std::hex << std::showbase << (int)(*ptr) << " ";
			//  	out << std::hex << std::showbase << (int)(*ptr++) << " ";
			//  }
			std::cout << std::endl;
		}
		break;
		case LOG_NR_RRC_OTA_MSG_LOG_C: // 5g

			break;
		default: // unknown log type
			//std::cout << "хуйня какая-то" << std::endl;
			break;
		}

		while (ptr != &m_rxBuffer[size - 3])
			std::cout << std::hex << std::showbase << (int)(*ptr++) << " ";
		std::cout<< std::endl;
		break;
	}
	case DIAG_MULTI_RADIO_CMD_F:

		break;
	case DIAG_MSG_F:
	case DIAG_EXT_MSG_F:
	case DIAG_EXT_MSG_TERSE_F:
	case DIAG_QSR_EXT_MSG_TERSE_F:
	case DIAG_QSR4_EXT_MSG_TERSE_F:

		break;
	default:
		std::cout.flush();
		std::cout << std::hex
				  << "Received response: "
				  << (int)opcode << " ";
		while (ptr != &m_rxBuffer[size])
		{
			std::cout << (int)(*ptr++) << " ";
			std::cout.flush();
		}
		break;
	}
	return false;
}

void DiagReq::ReadCycle(msgQueue &q)
{
	size_t size = 0;
	size = m_uart->ReadData(m_rxBuffer);
	if (size <= 3)
	{
		std::cout << "zalupa" << std::endl;
		return;
	}
	std::cout << std::endl
			  << "Read successfuly. Length =" << std::dec << (int)size << std::endl;
	Decode(size);
}

void DiagReq::buildGsmtapIp(uint8_t gsmtapProtocol, uint8_t gsmtap_channel_type, uint8_t *payload, bool is_uplink)
{
	parse2G(payload);
}

bool DiagReq::StartREO()
{
	if (PacketNumber < 2)
	{
		std::cout << "Error in start REO" << std::endl;
		return false;
	}

	switch (PacketNumber)
	{
	case LOG_CONGIF_FOR_RECEIVING_MSG:

		if (!PushPacket(PacketNumber))
		{
			std::cout << "Push2 error. \n Exit..." << std::endl;
			return false;
		}
		PacketNumber++;
		break;
	case GSM_CONFIG:
		if (!PushPacket(PacketNumber))
		{
			std::cout << "Push GSM error. \n Exit..." << std::endl;
			return false;
		}
		PacketNumber++;
		break;
	case TDSCDMA_CONFIG:

		if (!PushPacket(PacketNumber))
		{
			std::cout << "Push W-CDMA error. \n Exit..." << std::endl;
			return false;
		}
		PacketNumber++;
		break;
	case LTE_CONFIG:

		if (!PushPacket(PacketNumber))
		{
			std::cout << "Push APPS/LTE/WIMAX error. \n Exit..." << std::endl;
			return false;
		}
		PacketNumber++;
		break;
	case WCDMA_CONFIG:

		if (!PushPacket(PacketNumber))
		{
			std::cout << "Push UMTS error. \n Exit..." << std::endl;
			return false;
		}
		PacketNumber++;
		break;
	case UMTS_CONFIG:

		if (!PushPacket(PacketNumber))
		{
			std::cout << "Push UMTS error. \n Exit..." << std::endl;
			return false;
		}
		return true;
		break;
	default:
		break;
	}

	return false;
}

bool DiagReq::Init()
{

	m_uart->Flush();

	switch (PacketNumber)
	{
	case DISABLING_LOG_CONFIG:

		if (!PushPacket(PacketNumber))
		{
			std::cout << "Init error. \n Exit..." << std::endl;
			return false;
		}
		PacketNumber++;
		break;
	case SET_LVL_NONE_OF_MSG:
		if (!PushPacket(PacketNumber))
		{
			std::cout << "Init error. \n Exit..." << std::endl;
			return false;
		}
		PacketNumber++;
		inited = true;
		break;
	default:
		break;
	}

	return true;
}

bool DiagReq::PushPacket(uint8_t opNum)
{
	switch (opNum)
	{
	case DISABLING_LOG_CONFIG:
		payload = StructPack::pack(buffer, 1000, "3xI", (uint32_t)LOG_CONFIG_DISABLE_OP);
		break;
	case SET_LVL_NONE_OF_MSG:
		payload = StructPack::pack(buffer, 1000, "BxxI", MSG_EXT_SUBCMD_SET_ALL_RT_MASKS, (uint32_t)MSG_LVL_NONE);
		break;
	case LOG_CONGIF_FOR_RECEIVING_MSG:

		payload = StructPack::pack(buffer, 1000, "3xI", LOG_CONFIG_RETRIEVE_ID_RANGES_OP);
		break;
	case GSM_CONFIG:

		payload = StructPack::pack(buffer, 1000, "3xIIBB39xB30xB63x", LOG_CONFIG_SET_MASK_OP, 0x5, ' ', 0x04, 0x80, '@'); // GSM s if we replace 0x80 on 0x0, gsm loggin will off
		break;
	case TDSCDMA_CONFIG:
		payload = StructPack::pack(buffer, 1000, "3xIIBI63x", LOG_CONFIG_SET_MASK_OP, '\r', 255, 1); // TDSCDMA
		break;
	case LTE_CONFIG:
		payload = StructPack::pack(buffer, 1000, "3xIIBB26xIBB35x", LOG_CONFIG_SET_MASK_OP, 0x0B, 0x01, 0x02, 0x01, 0x0c, '0'); // APPS/LTE/WIMAX
		break;
	case WCDMA_CONFIG:
		payload = StructPack::pack(buffer, 1000, "3xIIBB39xB474x", LOG_CONFIG_SET_MASK_OP, 0x04, 0xff, 0x0f, 0x80); // WCDMA
		break;
	case UMTS_CONFIG:
		payload = StructPack::pack(buffer, 1000, "3xIIBB41xB120x", LOG_CONFIG_SET_MASK_OP, 0x07, 0xff, 0x04, 0x04); // UMTS
		break;
	default:
		break;
	}
	size_t size = Payload::SetPayload(DIAG_LOG_CONFIG_F, buffer, payload, m_txBuffer);
	return SendData(m_txBuffer, size);
}

bool DiagReq::SendData(uint8_t *buffer, size_t size)
{
	return m_uart->SendData(buffer, size);
}
