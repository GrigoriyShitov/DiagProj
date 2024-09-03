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
			ReadCycle();
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
bool DiagReq::SwitchMode(uint8_t mode)
{
	// payload = StructPack::pack(buffer, 1000, "3xI", (uint32_t)LOG_CONFIG_DISABLE_OP);

	// size_t size = Payload::SetPayload(DIAG_LOG_CONFIG_F, buffer, payload, m_txBuffer);

	// SendData(m_txBuffer, size);
	diag_mode_config_req var;
	var.PLMN_SELECTION_MODE = PLMN_SELECTION_MODE_AUTOMATIC;
	var.PLMN_REQUESTED[0] = 0;
	var.PLMN_REQUESTED[1] = 0;
	var.PLMN_REQUESTED[2] = 0;
	var.GW_ACQ_ORDER_PREF = GW_ACQ_ORDER_PREF_AUTOMATIC;
	var.BAND_PREF = BAND_PREF_NO_CHANGE;
	var.ROAM_PREF = ROAM_PREF_NO_CHANGE;
	switch (mode)
	{
	case msgSwitchTo2g:
		var.MODE_PREF = GSM_ONLY;
		// payload = StructPack::pack(buffer, 1000, "B2x", uint8_t(15)); // cmlog_state_info
		break;
	case msgSwitchTo3g:
		var.MODE_PREF = WCDMA_ONLY;
		break;
	case msgSwitchTo4g:
		var.MODE_PREF = LTE_ONLY;
		break;
	default:
		break;
	}
	payload = StructPack::pack(buffer, 1000, "BHBBBBIIIIII", var.SUBSYS_ID, var.SUBSYS_CMD_CODE, var.PLMN_SELECTION_MODE, var.PLMN_REQUESTED[0], var.PLMN_REQUESTED[1], var.PLMN_REQUESTED[2], var.MODE_PREF, var.GW_ACQ_ORDER_PREF, var.BAND_PREF, var.ROAM_PREF, var.HYBR_PREF, var.SRV_DOMAIN_PREF); // CMLOG_SYS_SEL_REQ_F TODO

	uint32_t size = Payload::SetPayload(var.CMD_CODE, buffer, payload, m_txBuffer);

	return SendData(m_txBuffer, size);
}
bool DiagReq::Decode(size_t size)
{
	uint8_t *ptr = m_rxBuffer;
	uint8_t *packet = m_rxBuffer;
	struct diag_packet *dp = (struct diag_packet *)ptr;
	uint8_t opcode = *ptr++;
	switch (dp->msg_class)
	{
	case DIAG_LOG_F:
	{
		// // decode header
		// uint8_t pendingMsgs = *ptr++;
		// uint16_t logOuterLength = 0;
		// logOuterLength += *ptr++;
		// logOuterLength += (*ptr++) << 8;

		// log_hdr log_header;
		// // inner log packet

		// log_header.len = *ptr++;
		// log_header.len += (*ptr++) << 8;

		// log_header.code = *ptr++;
		// log_header.code += (*ptr++) << 8;

		// log_header.ts = *ptr++;
		// log_header.ts += (*ptr++) << 8;
		// log_header.ts += (*ptr++) << 16;
		// log_header.ts += (*ptr++) << 24;
		// log_header.ts += (*ptr++) << 32;
		// log_header.ts += (*ptr++) << 40;
		// log_header.ts += (*ptr++) << 48;
		// log_header.ts += (*ptr++) << 56;
		std::cout << std::hex << std::showbase << "Received log. Log type:" << dp->msg_protocol
				  << " of length " << std::dec << dp->len << " readed size:" << size << std::endl;
		switch (dp->msg_protocol)
		{
		case GSM(LOG_GSM_RR_SIGNALING_MESSAGE_C): // 2g
		{
			handle_2g(dp, size);
			uint8_t interfaceType = GSMTAP_TYPE_ABIS;
		}
		break;
		case WCDMA(LOG_WCDMA_SIGNALING_MSG_C): // WCDMA
		{
			std::cout << "WCDMA RECEIVED" << std::endl;
			uint8_t *parser = ptr;
			diag_umts_rrc_msg wcdma_msg;
			wcdma_msg.chan_type = (*parser++);
			wcdma_msg.rb_id = (*parser++);
			wcdma_msg.length = *parser++;
			wcdma_msg.length += (*parser++) << 8;

			handle_3g(dp,size);
		}
		case UMTS(LOG_UMTS_NAS_OTA_MESSAGE_LOG_PACKET_C): // UMTS
		{
			std::cout << "UMTS RECEIVED" << std::endl;
			handle_3g(dp,size);
			uint8_t *parser = ptr;
			diag_umts_nas_ota_msg umts_msg;
			umts_msg.direction = (*parser++);

			umts_msg.msg_length = *parser++;
			umts_msg.msg_length += (*parser++) << 8;
			umts_msg.msg_length += (*parser++) << 16;
			umts_msg.msg_length += (*parser++) << 24;
			// parser=signaling_message
			
		}
		break;
		case LOG_LTE_RRC_OTA_MSG_LOG_C: // 4g
		case LOG_LTE_NAS_ESM_OTA_IN_MSG_LOG_C:
		case LOG_LTE_NAS_ESM_OTA_OUT_MSG_LOG_C:
		case LOG_LTE_NAS_EMM_OTA_IN_MSG_LOG_C:
		case LOG_LTE_NAS_EMM_OTA_OUT_MSG_LOG_C:
		{
			// std::cout << "LTE RECEIVED" << std::endl;
			// uint8_t *parser = ptr;
			// uint8_t extHeaderVer = (*parser++);
			// uint8_t rrcRel = (*parser++);
			// uint16_t rrcVer = (*parser++);
			// uint8_t bearerId = (*parser++);

			// uint16_t phyCellId = 0;
			// phyCellId += *parser++;
			// phyCellId += (*parser++) << 8;

			// // parser=ext_header
			// if (extHeaderVer >= 25)
			// {
			// 	parser = ptr;
			// 	extHeaderVer = (*parser++);
			// 	rrcRel = (*parser++);
			// 	rrcVer = (*parser++);
			// 	rrcVer += (*parser++) << 8;
			// 	uint8_t ncRrcRel = (*parser++);
			// 	bearerId = (*parser++);
			// 	phyCellId = (*parser++);
			// 	phyCellId += (*parser++) << 8;
			// }
			// else
			// {
			// }
			// // parser=ext_header
			// uint16_t length = 0;
			// uint8_t freqType = 4; // H

			// if (extHeaderVer < 8)
			// 	freqType = 2; // I

			// uint8_t headerSpec = freqType + 2 + 1 + 2; // freq_type + 'HBH'

			// // if (*(parser + headerSpec - 1) != iSize - headerSpec)
			// //	headerSpec = freqType + 2 + 1 + 4 + 2; // freqType + HB4xH
			// parser += headerSpec - 2;
			// length = *parser++;
			// length += (*parser++) << 8;

			std::cout << "LTE RECEIVED" << std::endl;
			handle_4g(dp, size);

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
			// std::cout << "хуйня какая-то" << std::endl;
			break;
		}

		while (1)
		{
			std::cout << std::hex << std::showbase << (int)(*packet) << " ";
			if (*packet == 0x7e)
				break;
			else
				packet++;
		}
		std::cout << std::endl;
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

void DiagReq::ReadCycle()
{
	uint32_t size = 0;
	size = m_uart->ReadData(m_rxBuffer) - 1; // terminate "~" symbol

	if ((int)size < 3)
	{
		std::cout << std::dec << (int)size << std::endl;
		std::cout << "zalupa" << std::endl;
		return;
	}

	std::cout << std::endl
			  << "Read successfuly. Length =" << std::dec << (int)size << std::endl;
	Decode(size);
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
			exit(1);
			return false;
		}
		PacketNumber++;
		break;
	case LTE_CONFIG:

		if (!PushPacket(PacketNumber))
		{
			std::cout << "Push APPS/LTE/WIMAX error. \n Exit..." << std::endl;
			exit(1);
			return false;
		}
		PacketNumber++;
		break;
	case WCDMA_CONFIG:

		if (!PushPacket(PacketNumber))
		{
			std::cout << "Push wcdma error. \n Exit..." << std::endl;
			exit(1);
			return false;
			
		}
		PacketNumber++;
		break;
	case UMTS_CONFIG:

		if (!PushPacket(PacketNumber))
		{
			std::cout << "Push UMTS error. \n Exit..." << std::endl;
			exit(1);
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

void DiagReq::handle_2g(struct diag_packet *dp, size_t size)
{
	std::cout << "Direction: " << ((bool)(dp->msg_type & 0x80) ? "Uplink" : "Downlink") << std::endl;
	std::cout << "Channel type: " << (int)dp->msg_type;
	switch (dp->msg_type & 0x7f)
	{
	case DCCH:
		cout << "- DCCH";
		break;
	case BCCH:
		cout << "- BCCH";
		break;
	case L2_RACH:
		cout << "- L2_RACH";
		break;
	case CCCH:
		cout << "- CCCH";
		break;
	case SACCH:
		cout << "- SACCH";
		break;
	case SDCCH:
		cout << "- SDCCH";
		break;
	case FACCH_F:
		cout << "- FACCH_F";
		break;
	case FACCH_H:
		cout << "- FACCH_H";
		break;
	case L2_RACH_WITH_NO_DELAY:
		cout << "- L2_RACH_WITH_NO_DELAY";
		break;
	default:
		break;
	}
	cout << endl;
	parse2G(dp->data);
}
void DiagReq::handle_3g(diag_packet *dp, size_t size){
	uint8_t payload_len= dp->len- 16;
	switch (dp->msg_type)
	{
	case 0: /* UL-CCCH */
		pduName = "UL-CCCH-Message";
		break;
	case 1: /* UL-DCCH */
		pduName = "UL-DCCH-Message";
		break;
	case 2: /* DL-CCCH */
		pduName = "DL-CCCH-Message";
		break;
	case 3: /* DL-DCCH */
		pduName = "DL-DCCH-Message";
		break;
	case 4: /* DL-BCCH */
		pduName = "DL-BCCH-Message";
		break;
	
	default:
		break;
	}
	parse3G(dp->data, payload_len, pduName);
}
void DiagReq::handle_4g(diag_packet *dp, size_t size)
{
	cout<< "data: "<<(int)dp->data[7] << endl;
	switch (dp->msg_protocol)
	{
	case LOG_LTE_RRC_OTA_MSG_LOG_C:
		switch (dp->data[7])
		{
		case 0:
			pduName = "BCCH-BCH-Message";
			break;
		case 2: // BCCH-DL-SCH
			pduName = "BCCH-DL-SCH-Message";
			break;
		case 3: // MCCH
			pduName = "MCCH-Message";
			break;
		case 4: // PCCH
			pduName = "PCCH-Message";
			break;
		case 5: // DL-CCCH
			pduName = "DL-CCCH-Message";
			break;
		case 6: // DL-DCCH
			pduName = "DL-DCCH-Message";
			break;
		case 7: // UL-CCCH
			pduName = "UL-CCCH-Message";
			break;
		case 8: // UL-DCCH
			pduName = "UL-DCCH-Message";
			break;
		default:
			cout<< "unhandled 4G PDU" << endl;
			return;
		}
		cout<< "Start parsing 4G " << pduName << endl;
		parse4G(&dp->data[14], dp->data_len, pduName);
		break;

	default:
		break;
	}
}
