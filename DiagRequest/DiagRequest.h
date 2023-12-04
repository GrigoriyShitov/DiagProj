#pragma once
#include <iostream>
#include <Windows.h>
#include <string>
#include "CeThread.h"
#include "Payload.h"
#include "StructPack.h"
#include <functional>

#define msgSimInit 0
#define msgDataAvail 1
#define msgTimeOut 2

extern std::mutex consolemtx;


class DiagReq {
public:
	DiagReq(UartInterface* comPort) 
	{
		m_uart = comPort;
	};

	bool DataAvail();
	bool Decode();
	bool Timeout()
	{
		return true;
	}

	bool TxOk()
	{
		return true;
	}

	bool StartREO()
	{
		return true;
	}

	bool Init()
	{
		return true;
	}
private:

	bool SendData(uint8_t* buffer, size_t size)
	{
		return m_uart->SendData(buffer, size);
	}
	uint8_t m_rxBuffer[bufSize];
	size_t size = 0;
	
	UartInterface* m_uart;
};


/*SerialPort SimPort;//serial port interface


	uint8_t read_buffer[bufSize];//some buffuer for read op
	uint8_t write_buffer[bufSize];//some buffuer for write op

	bool iret;

	uint8_t payload = 0;//var for check payload length
	uint8_t buffer[100];//buffer for string which needs to separate format string in pack method

	memset(read_buffer, 0, bufSize);//zeroing buffers
	memset(write_buffer, 0, bufSize);//

	std::thread t0(CeMain, std::ref(SimPort));
	q.waitData();
	q.popN();
	int32_t a = 0;//***  need to change this variables to define value of config op number
	uint8_t b;
	payload = StructPack::pack(buffer, 100, "3xi", a);
	uint32_t size = Payload::SetPayload(DIAG_LOG_CONFIG_F, buffer, payload, write_buffer);

	iret = SimPort.SendData(write_buffer, size);
	
	uint8_t length = 0;
	*/
