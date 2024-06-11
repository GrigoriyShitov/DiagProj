#pragma once
#ifndef DIAGREQ_H
#define DIAGREQ_H
#include <iostream>
#include <Windows.h>
#include <string>
#include <functional>
#include <map>
#include <fstream>
#include "CeThread.h"
#include "Payload.h"
#include "StructPack.h"


#define msgSimInit (0)
#define msgDataAvail (1)
#define msgTimeOut (2)
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

class DiagReq {
public:
	DiagReq(UartInterface* comPort) 
	{
		m_uart = comPort;
	};

	bool ExecuteStep(msgQueue& q);
	bool Decode(size_t size);
	bool Timeout()
	{
		return true;
	}
	void ReadCycle(msgQueue& q);
	void buildGsmtapIp(uint8_t gsmtapProtocol, uint8_t gsmtap_channel_type, uint8_t* payload, bool is_uplink);

	bool StartREO();

	bool Init();
	bool inited = false;
private:

	bool SendData(uint8_t* buffer, size_t size);
	bool PushPacket(uint8_t opNum);
	uint8_t m_rxBuffer[bufSize];
	uint8_t m_txBuffer[bufSize];
	uint16_t payload = 0;
	uint8_t buffer[1000] = { 0 };
	bool iret = false;

	uint8_t PacketNumber = 0;
	UartInterface* m_uart;
};



#endif