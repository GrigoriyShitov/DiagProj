#include "DiagRequest.h"


bool DiagReq::ExecuteStep(msgQueue& q)
{
	uint8_t msg = q.front();

	if (iret != infinityReadStart) {
		if (msg == msgDataAvail) {
			ReadCycle(q);
		}
		if (inited) {
			if(StartREO())
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
		uint8_t pending_msgs = *ptr++;
		uint16_t log_outer_length = 0;
		log_outer_length += *ptr++;
		log_outer_length += (*ptr++) << 8;

		//inner log packet
		uint16_t log_inner_length = 0;
		log_inner_length += *ptr++;
		log_inner_length += (*ptr++) << 8;

		uint16_t log_type = 0;
		log_type += *ptr++;
		log_type += (*ptr++) << 8;

		uint64_t log_time = 0;
		log_time += *ptr++;
		log_time += (*ptr++) << 8;
		log_time += (*ptr++) << 16;
		log_time += (*ptr++) << 24;
		log_time += (*ptr++) << 32;
		log_time += (*ptr++) << 40;
		log_time += (*ptr++) << 48;
		log_time += (*ptr++) << 56;




		std::cout << std::hex << std::showbase << "Received log. Log type:" << log_type
			<< " of length " << (int)log_outer_length
			<< ": b'";
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

bool DiagReq::StartREO()
{
	if (PacketNumber < 2)
	{
		std::cout << "Error in start REO" << std::endl;
		return false;
	}

	switch (PacketNumber)
	{
	case 2:

		if (!PushPacket(PacketNumber))
		{
			std::cout << "Push2 error. \n Exit..." << std::endl;
			return false;
		}
		PacketNumber++;
		break;
	case 3:
		if (!PushPacket(PacketNumber))
		{
			std::cout << "Push GSM error. \n Exit..." << std::endl;
			return false;
		}
		PacketNumber++;
		break;
	case 4:

		if (!PushPacket(PacketNumber))
		{
			std::cout << "Push W-CDMA error. \n Exit..." << std::endl;
			return false;
		}
		PacketNumber++;
		break;
	case 5:

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
	case 0:

		if (!PushPacket(PacketNumber))
		{
			std::cout << "Init error. \n Exit..." << std::endl;
			return false;
		}
		PacketNumber++;
		break;
	case 1:
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
	case 0://send Diag commands to disable preexisting logging
		payload = StructPack::pack(buffer, 1000, "3xi", LOG_CONFIG_DISABLE_OP);
		break;
	case 1:
	{
		payload = StructPack::pack(buffer, 1000, "BxxI", MSG_EXT_SUBCMD_SET_ALL_RT_MASKS, MSG_LVL_NONE);
		break;
	}
	case 2:
		// Send the message for receiving the highest valid log code for
		// each existing log type(see defintions above).
		payload = StructPack::pack(buffer, 1000, "3xI", LOG_CONFIG_RETRIEVE_ID_RANGES_OP);
		break;
	case 3:
		// Register logging for each supported log type
		payload = StructPack::pack(buffer, 1000, "3xIIBB39xB30xB63x", LOG_CONFIG_SET_MASK_OP, 0x5, ' ', 0x04, 0x80, '@');//GSM s if we replace 0x80 on 0x0, gsm loggin will off
		break;
	case 4:
		payload = StructPack::pack(buffer, 1000, "3xIIBI63x", LOG_CONFIG_SET_MASK_OP, '\r', 255, 1);//TDSCDMA
		break;
	case 5:
		payload = StructPack::pack(buffer, 1000, "3xIIBB26xIBB35x", LOG_CONFIG_SET_MASK_OP, 0x0B,0x01,0x02,0x01,0x0c,'0');// APPS/LTE/WIMAX
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