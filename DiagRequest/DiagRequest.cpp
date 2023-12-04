#include "DiagRequest.h"


bool DiagReq::DataAvail()
{
	size = m_uart->ReadData(m_rxBuffer);
	std::cout << std::endl << "Read successfuly. Length =" << std::dec << (int)size << std::endl;
	Decode();
	return true;
}
bool DiagReq::Decode()
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
		



		std::cout << std::hex << std::showbase << "Decoding complited successfuly. Type log:" << log_type
			<< " of length " << (int)log_outer_length
			<< ": b'";
		while (ptr != &m_rxBuffer[size - 3])
			std::cout << (int)(*ptr++)<<" ";

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
		break;
	}
    return false;
}

