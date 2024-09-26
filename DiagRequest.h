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

		//send Diag commands to disable preexisting logging
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

struct diag_packet {
	uint16_t msg_class;
	uint16_t len;
	uint16_t inner_len;
	uint16_t msg_protocol;
	uint64_t timestamp;
	uint8_t msg_type;
	uint8_t msg_subtype;
	uint8_t data_len;
	uint8_t data[0];
} __attribute__ ((packed));


class DiagReq {
public:
	DiagReq(UartInterface* comPort) 
	{
		m_uart = comPort;
	};

	bool ExecuteStep();
	bool SwitchMode(uint8_t mode);
	bool Decode(size_t size);
	bool Timeout()
	{
		return true;
	}
	void ReadCycle();

	bool StartREO();

	bool Init();
	bool inited = false;
private:
	void ReadSingleResponse(msgQueue &qM);
	bool SendData(uint8_t* buffer, size_t size);
	void handle_2g(struct diag_packet* dp, size_t size);
	void handle_3g(diag_packet *dp, size_t size);
	void handle_4g(struct diag_packet* dp, size_t size);
	bool PushPacket(uint8_t opNum);
	char* pduName;
	uint8_t m_rxBuffer[bufSize];
	uint8_t m_txBuffer[bufSize];
	uint16_t payload = 0;
	uint8_t buffer[1000] = { 0 };
	bool iret = false;

	uint8_t PacketNumber = 0;
	UartInterface* m_uart;
};



#endif