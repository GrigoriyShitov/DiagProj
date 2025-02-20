#pragma once
#ifndef DIAGREQ_H
#define DIAGREQ_H
#include <iostream>
#include <string>
#include <functional>
#include <map>
#include <fstream>
#include "CeThread.h"
#include "Main.h"
#include "Payload.h"
#include "StructPack.h"
#include "protocol/subsyscdm.h"
#include "protocol/CMLOG_SYS_SEL_REQ_F.h"
#include "protocol/CMLOG_SYSTEM_SELECTION_PERFERENCE_PER_ SUBS_REQ_F.h"
#include "SibParser/GSMlib/Sibs.h"
#include "SibParser/UMTSlib/build/UMTS.h"
#include "SibParser/LTElib/build/LTE.h"
#define infinityReadStart true

// send Diag commands to disable preexisting logging
#define DISABLING_LOG_CONFIG 0
#define SET_LVL_NONE_OF_MSG 1

// Send the message for receiving the highest valid log code for
// each existing log type(see defintions above).
#define LOG_CONGIF_FOR_RECEIVING_MSG 2

// Register logging for each supported log type

#define GSM_CONFIG 3
#define TDSCDMA_CONFIG 4
#define LTE_CONFIG 5
#define WCDMA_CONFIG 6
#define UMTS_CONFIG 7

extern std::mutex consolemtx;

struct diag_packet
{
	uint16_t msg_class;
	uint16_t len;
	uint16_t inner_len;
	uint16_t msg_protocol;
	uint64_t timestamp;
	uint8_t msg_type;
	uint8_t msg_subtype;
	uint8_t data_len;
	uint8_t data[0];
} __attribute__((packed));

class DiagReq
{
public:
	DiagReq(UartInterface *comPort)
	{
		m_uart = comPort;
	};
	/**
	 * @brief Send command to module to disable all logs and set all RT masks to "NONE"
	 * @return true - success, false - error
	 */
	bool ZeroLog();

	// bool SwitchMode(uint8_t mode);
	/**
	 * Decode a diag packet received from the modem.
	 *
	 * @param size The size of the packet received.
	 * @param msg The packet received.
	 *
	 * @return true if the packet was decoded, false otherwise.
	 */
	bool Decode(size_t size, uint8_t *msg);

	bool Timeout()
	{
		return true;
	}
	/**
	 * Read a single packet from the UART interface and copy it to the msg argument.
	 *
	 * @param[out] msg The packet read from the UART interface.
	 *
	 * @return The size of the packet read, or -1 if no packet was available.
	 */
	int ReadCycle(uint8_t &msg);
	/**
	 * @brief Start REO
	 *
	 * This function sets the log configuration for each radio interface type.
	 * It sets the log mask for GSM, TDSCDMA, LTE, WCDMA, and UMTS radio interfaces.
	 * Before setting the log mask, it sends a request to retrieve the log id range.
	 * After setting the log mask, it waits for 10000 useconds before sending the next request.
	 * If any of the requests fail, it prints an error message and returns false.
	 * If all the requests are successful, it returns true.
	 *
	 * @return true if all the requests are successful, false otherwise
	 */
	bool StartREO();
	/**
	 * Initialize diagnostic port
	 *
	 * @return true if init success, false otherwise
	 */
	bool Init();

private:
	bool SendData(uint8_t *buffer, size_t size);
	void handle_2g(struct diag_packet *dp, size_t size);
	void handle_3g(diag_packet *dp, size_t size);
	void handle_4g(struct diag_packet *dp, size_t size);
	bool PushPacket(uint8_t opNum);
	char *pduName;
	uint8_t m_rxBuffer[bufSize];
	uint8_t m_txBuffer[bufSize];
	uint16_t payload = 0;
	uint8_t buffer[1000] = {0};
	bool iret = false;
	bool inited = false;

	uint8_t PacketNumber = 0;
	UartInterface *m_uart;
};

#endif