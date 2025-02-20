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

bool DiagReq::Decode(size_t size, uint8_t *msg)
{
	uint8_t *ptr = msg;
	uint8_t *packet = msg;
	bool decodeResult = true;
	struct diag_packet *dp = (struct diag_packet *)ptr;
	switch (dp->msg_class)
	{
	case DIAG_LOG_F:
	{

		DEBUG_MSG(std::format("DEBUG: Received log. Log type: 0x{:x} of length {:d} readed size: {:d}\n", (int)dp->msg_protocol, (int)dp->len, size));

		switch (dp->msg_protocol)
		{
		case GSM(LOG_GSM_RR_SIGNALING_MESSAGE_C): // 2g

			DEBUG_MSG("DEBUG: 2G RECEIVED\n");
			handle_2g(dp, size);
			break;

		case WCDMA(LOG_WCDMA_SIGNALING_MSG_C): // WCDMA

			DEBUG_MSG("DEBUG: WCDMA RECEIVED\n");
			handle_3g(dp, size);
			break;

		case UMTS(LOG_UMTS_NAS_OTA_MESSAGE_LOG_PACKET_C): // UMTS

			DEBUG_MSG("DEBUG: UMTS RECEIVED\n")
			handle_3g(dp, size);
			break;
		case LOG_LTE_RRC_OTA_MSG_LOG_C: // 4g
		case LOG_LTE_NAS_ESM_OTA_IN_MSG_LOG_C:
		case LOG_LTE_NAS_ESM_OTA_OUT_MSG_LOG_C:
		case LOG_LTE_NAS_EMM_OTA_IN_MSG_LOG_C:
		case LOG_LTE_NAS_EMM_OTA_OUT_MSG_LOG_C:

			DEBUG_MSG("DEBUG: LTE RECEIVED\n");
			handle_4g(dp, size);
			break;
		case LOG_NR_RRC_OTA_MSG_LOG_C: // 5g

			DEBUG_MSG("DEBUG: UNHANDLED 5G RECEIVED\n");
			break;
		default: // unknown log type
			DEBUG_MSG("DEBUG: unknown log type\n");
			break;
		}

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
		DEBUG_MSG(std::format("Received response: 0x{:x}\n", (int)dp->msg_class));
		while (ptr != &msg[size])
		{
			DEBUG_MSG(std::format("0x{:x} ", *ptr++));
		}
		DEBUG_MSG("\n");
		break;
	}
	return decodeResult;
}

int DiagReq::ReadCycle(uint8_t &msg)
{
	uint32_t size = 0;
	size = m_uart->ReadData(m_rxBuffer); // terminate "~" symbol

	if ((int)size == 0)
	{
		return -1;
	}
	DEBUG_MSG(std::format("DEBUG: Read successfuly. Length = {:d}\n", size));

	memcpy(&msg, m_rxBuffer, size);
	return size;
}

bool DiagReq::StartREO()
{
	size_t size;
	// case LOG_CONGIF_FOR_RECEIVING_MSG:
	payload = StructPack::pack(buffer, 1000, "3xI", LOG_CONFIG_RETRIEVE_ID_RANGES_OP);
	size = Payload::SetPayload(DIAG_LOG_CONFIG_F, buffer, payload, m_txBuffer);
	bool res = SendData(m_txBuffer, size);

	if (!res)
		DEBUG_MSG("DEBUG: LOG_CONGIF_FOR_RECEIVING_MSG err");

	//  case GSM_CONFIG:
	usleep(10000);
	payload = StructPack::pack(buffer, 1000, "3xIIBB39xB30xB63x", LOG_CONFIG_SET_MASK_OP, 0x5, ' ', 0x04, 0x80, '@'); // GSM s if we replace 0x80 on 0x0, gsm loggin will off
	size = Payload::SetPayload(DIAG_LOG_CONFIG_F, buffer, payload, m_txBuffer);
	res = SendData(m_txBuffer, size);

	if (!res)
		DEBUG_MSG("DEBUG: GSM_CONFIG err");

	//  case TDSCDMA_CONFIG:
	usleep(10000);
	payload = StructPack::pack(buffer, 1000, "3xIIBI63x", LOG_CONFIG_SET_MASK_OP, '\r', 255, 1); // TDSCDMA
	size = Payload::SetPayload(DIAG_LOG_CONFIG_F, buffer, payload, m_txBuffer);
	res = SendData(m_txBuffer, size);

	if (!res)
		DEBUG_MSG("DEBUG: TDSCDMA_CONFIG err");

	//  case LTE_CONFIG:
	usleep(10000);
	payload = StructPack::pack(buffer, 1000, "3xIIBB26xIBB35x", LOG_CONFIG_SET_MASK_OP, 0x0B, 0x01, 0x02, 0x01, 0x0c, '0'); // APPS/LTE/WIMAX
	size = Payload::SetPayload(DIAG_LOG_CONFIG_F, buffer, payload, m_txBuffer);
	res = SendData(m_txBuffer, size);

	if (!res)
		DEBUG_MSG("DEBUG:LTE_CONFIG err");

	//  case WCDMA_CONFIG:
	usleep(10000);
	payload = StructPack::pack(buffer, 1000, "3xIIBB39xB474x", LOG_CONFIG_SET_MASK_OP, 0x04, 0xff, 0x0f, 0x80); // WCDMA
	size = Payload::SetPayload(DIAG_LOG_CONFIG_F, buffer, payload, m_txBuffer);
	res = SendData(m_txBuffer, size);

	if (!res)
		DEBUG_MSG("DEBUG:WCDMA_CONFIG err");

	//  case UMTS_CONFIG:
	usleep(10000);
	payload = StructPack::pack(buffer, 1000, "3xIIBB41xB120x", LOG_CONFIG_SET_MASK_OP, 0x07, 0xff, 0x04, 0x04); // UMTS
	size = Payload::SetPayload(DIAG_LOG_CONFIG_F, buffer, payload, m_txBuffer);
	res = SendData(m_txBuffer, size);

	if (!res)
		DEBUG_MSG("DEBUG:UMTS_CONFIG err");

	if (!res)
		DEBUG_MSG("DEBUG:err in StartREO");

	return res;
}

bool DiagReq::Init()
{

	inited = m_uart->Init();
	if (!inited)
	{
		DEBUG_MSG("DEBUG:Can't connect\n");
	}
	m_uart->Flush();

	return inited;
}

bool DiagReq::ZeroLog()
{
	size_t size;
	payload = StructPack::pack(buffer, 1000, "3xI", (uint32_t)LOG_CONFIG_DISABLE_OP);
	size = Payload::SetPayload(DIAG_LOG_CONFIG_F, buffer, payload, m_txBuffer);
	bool res = SendData(m_txBuffer, size);

	payload = StructPack::pack(buffer, 1000, "BxxI", MSG_EXT_SUBCMD_SET_ALL_RT_MASKS, (uint32_t)MSG_LVL_NONE);
	size = Payload::SetPayload(DIAG_LOG_CONFIG_F, buffer, payload, m_txBuffer);
	res = SendData(m_txBuffer, size);
	if (!res)
	{
		DEBUG_MSG("DEBUG:ZeroLog err");
	}
	return res;
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
	DEBUG_MSG(std::format("Direction: {}\n", ((bool)(dp->msg_type & 0x80) ? "Uplink" : "Downlink")));
	DEBUG_MSG(std::format("Channel type: 0x{:x}\n", (int)dp->msg_type));
	switch (dp->msg_type & 0x7f)
	{
	case DCCH:
		DEBUG_MSG("DEBUG:- DCCH\n");
		break;
	case BCCH:
		DEBUG_MSG("DEBUG:- BCCH\n");
		break;
	case L2_RACH:
		DEBUG_MSG("DEBUG:- L2_RACH\n");
		break;
	case CCCH:
		DEBUG_MSG("DEBUG:- CCCH\n");
		break;
	case SACCH:
		DEBUG_MSG("DEBUG:- SACCH\n");
		break;
	case SDCCH:
		DEBUG_MSG("DEBUG:- SDCCH\n");
		break;
	case FACCH_F:
		DEBUG_MSG("DEBUG:- FACCH_F\n");
		break;
	case FACCH_H:
		DEBUG_MSG("DEBUG:- FACCH_H\n");
		break;
	case L2_RACH_WITH_NO_DELAY:
		DEBUG_MSG("DEBUG:- L2_RACH_WITH_NO_DELAY\n");
		break;
	default:
		break;
	}
	char *result = parse2G(dp->data);
	if (result != NULL)
	{
		DEBUG_MSG(result);
	}
}
void DiagReq::handle_3g(diag_packet *dp, size_t size)
{
	uint8_t payload_len = dp->len - 16;
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
		DEBUG_MSG("DEBUG:unhandled 4G PDU");
		return;
	}
	parse3G(dp->data, payload_len, pduName);
}
void DiagReq::handle_4g(diag_packet *dp, size_t size)
{
	DEBUG_MSG(std::format("DEBUG: PDU type: 0x{:x}", (int)dp->data[7]));
	// asn_TYPE_descriptor_t pdu;
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
			DEBUG_MSG("DEBUG:unhandled 4G PDU");
			return;
		}
		parse4G(&dp->data[14], dp->data_len, pduName);
		break;
	default:
		break;
	}
}
