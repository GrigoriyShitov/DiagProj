#include "DiagRequest.h"

std::map<uint8_t, uint8_t>gsmtapChannels{
				{DCCH, GSMTAP_CHANNEL_SDCCH},
				{BCCH, GSMTAP_CHANNEL_BCCH},
				{L2_RACH, GSMTAP_CHANNEL_RACH},
				{CCCH, GSMTAP_CHANNEL_CCCH},
				{SACCH, GSMTAP_CHANNEL_SDCCH | GSMTAP_CHANNEL_ACCH},
				{SDCCH, GSMTAP_CHANNEL_SDCCH},
				{FACCH_F, GSMTAP_CHANNEL_TCH_F | GSMTAP_CHANNEL_ACCH},
				{FACCH_H, GSMTAP_CHANNEL_TCH_F | GSMTAP_CHANNEL_ACCH},
				{L2_RACH_WITH_NO_DELAY, GSMTAP_CHANNEL_RACH}
};

bool DiagReq::ExecuteStep(msgQueue& q)
{
	uint8_t msg = q.front();

	if (iret != infinityReadStart) {
		if (msg == msgDataAvail) {
			ReadCycle(q);
		}
		if (inited) {
			if (StartREO())
				iret = infinityReadStart;
			return iret;
		}
	}
	//HARERABOTAT = true;
	return false;
}
bool DiagReq::Decode(size_t size)
{
	uint8_t* ptr = m_rxBuffer;
	uint8_t opcode = *ptr++;

	switch (opcode)
	{
	case DIAG_LOG_F:
	{
		//decode header
		uint8_t pendingMsgs = *ptr++;

		uint16_t logOuterLength = 0;
		logOuterLength += *ptr++;
		logOuterLength += (*ptr++) << 8;

		//inner log packet
		uint16_t logInnerLength = 0;
		logInnerLength += *ptr++;
		logInnerLength += (*ptr++) << 8;

		uint16_t logType = 0;
		logType += *ptr++;
		logType += (*ptr++) << 8;

		uint64_t log_time = 0;
		log_time += *ptr++;
		log_time += (*ptr++) << 8;
		log_time += (*ptr++) << 16;
		log_time += (*ptr++) << 24;
		log_time += (*ptr++) << 32;
		log_time += (*ptr++) << 40;
		log_time += (*ptr++) << 48;
		log_time += (*ptr++) << 56;

		std::cout << std::hex << std::showbase << "Received log. Log type:" << logType
			<< " of length " << (int)logOuterLength << ": b'";
		switch (logType)
		{
		case LOG_GSM_RR_SIGNALING_MESSAGE_C://2g
		{
			uint8_t* parser = ptr;
			uint8_t channelType = (*parser++);
			uint8_t messageType = (*parser++);
			uint8_t length = (*parser++);

			//packet = signalling_message[:length]!!!

			std::cout << std::dec << std::endl << (int)(channelType) << "   " << (bool)(channelType & 0x80) << std::endl;
			bool isUplink = (bool)(channelType & 0x80);

			auto gsmFind = gsmtapChannels.find(channelType & 0x7f);
			if (gsmFind == gsmtapChannels.end()) {
				std::cout << "Unkwnown channel type.. Error logic:(TO DO)";
			}
			uint8_t gsmChannelType = (*gsmFind).second;
			std::cout << std::dec << std::endl << (int)(gsmChannelType) << std::endl;
			uint8_t interfaceType = GSMTAP_TYPE_ABIS;

			if (gsmChannelType == GSMTAP_CHANNEL_BCCH || gsmChannelType)
				parser++;

			buildGsmtapIp(interfaceType, gsmChannelType, parser, isUplink);
		}
		break;
		case WCDMA_SIGNALLING_MESSAGE://3g


			break;
		case LOG_LTE_RRC_OTA_MSG_LOG_C://4g


			break;
		case LOG_NR_RRC_OTA_MSG_LOG_C://5g


			break;
		default://unknown log type

			break;
		}


		while (ptr != &m_rxBuffer[size - 3])
			std::cout << (int)(*ptr++) << " ";

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
		std::cout << std::hex << std::showbase << "Received response: " << (int)opcode << " ";
		while (ptr != &m_rxBuffer[size])
			std::cout << (int)(*ptr++) << " ";
		break;
	}
	return false;
}

void DiagReq::ReadCycle(msgQueue& q)
{
	size_t size = 0;
	size = m_uart->ReadData(m_rxBuffer);
	if (size <= 3) { std::cout << "zalupa" << std::endl; return; }
	std::cout << std::endl << "Read successfuly. Length =" << std::dec << (int)size << std::endl;
	Decode(size);
}

void DiagReq::buildGsmtapIp(uint8_t gsmtapProtocol, uint8_t gsmtap_channel_type, uint8_t* payload, bool is_uplink)
{
	//payload = StructPack::pack(buffer, 1000, "3xI", LOG_CONFIG_RETRIEVE_ID_RANGES_OP);
	uint8_t packet[100] = { 0 };
	StructPack::pack(packet, 100, "3xI", LOG_CONFIG_RETRIEVE_ID_RANGES_OP);
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
		payload = StructPack::pack(buffer, 1000, "3xi", LOG_CONFIG_DISABLE_OP);
		break;
	case SET_LVL_NONE_OF_MSG:
	{
		payload = StructPack::pack(buffer, 1000, "BxxI", MSG_EXT_SUBCMD_SET_ALL_RT_MASKS, MSG_LVL_NONE);
		break;
	}
	case LOG_CONGIF_FOR_RECEIVING_MSG:

		payload = StructPack::pack(buffer, 1000, "3xI", LOG_CONFIG_RETRIEVE_ID_RANGES_OP);
		break;
	case GSM_CONFIG:

		payload = StructPack::pack(buffer, 1000, "3xIIBB39xB30xB63x", LOG_CONFIG_SET_MASK_OP, 0x5, ' ', 0x04, 0x80, '@');//GSM s if we replace 0x80 on 0x0, gsm loggin will off
		break;
	case TDSCDMA_CONFIG:
		payload = StructPack::pack(buffer, 1000, "3xIIBI63x", LOG_CONFIG_SET_MASK_OP, '\r', 255, 1);//TDSCDMA
		break;
	case LTE_CONFIG:
		payload = StructPack::pack(buffer, 1000, "3xIIBB26xIBB35x", LOG_CONFIG_SET_MASK_OP, 0x0B, 0x01, 0x02, 0x01, 0x0c, '0');// APPS/LTE/WIMAX
		break;
	default:
		break;
	}
	size_t size = Payload::SetPayload(DIAG_LOG_CONFIG_F, buffer, payload, m_txBuffer);
	return SendData(m_txBuffer, size);
}

bool DiagReq::SendData(uint8_t* buffer, size_t size)
{
	return m_uart->SendData(buffer, size);
}

