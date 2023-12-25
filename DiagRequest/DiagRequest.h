#pragma once
#ifndef DIAGREQ_H
#define DIAGREQ_H
#include <iostream>
#include <Windows.h>
#include <string>
#include "CeThread.h"
#include "Payload.h"
#include "StructPack.h"
#include <functional>

#define msgSimInit (0)
#define msgDataAvail (1)
#define msgTimeOut (2)
#define infinityReadStart true

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


	bool StartREO();

	bool Init();
	bool inited = false;
private:

	bool SendData(uint8_t* buffer, size_t size);
	bool PushPacket(uint8_t opNum);
	uint8_t m_rxBuffer[bufSize];
	uint8_t m_txBuffer[bufSize];
	uint8_t payload = 0;
	uint8_t buffer[1000] = { 0 };
	bool iret = false;

	uint8_t PacketNumber = 0;
	UartInterface* m_uart;
};



#endif