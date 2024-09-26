#pragma once
#ifndef INTERFACE_H
#define INTERFACE_H

#include <stdint.h>
#include <iostream>
#include <cstring> 
#include <thread>
#include <queue> 
#include <iomanip>
#include <mutex>
#include <semaphore>
#include <chrono>
#include "ceSerial.h"

#define bufSize 6144

#define INIT 0xFFFF
#define XOROT 0xFFFF

/**
 * @brief The UartInterface class ��������� ��� �������������� � ���������-��������� UART
 */
class UartInterface {
public:
	explicit  UartInterface() {};
	virtual ~UartInterface() {};

	/**
	 * @brief Init �������������� Uart. ������������� �������� ������������� ��� ����������� �������������
	 * @return True � ������ ������, False � ������ ������
	 */
	virtual bool Init() = 0;

	/**
	 * @brief DataAvail ��������� ������� ������ �� ������� ������ UART
	 * @return True, ���� ������ ����, False, ���� ����� ������
	 */
	virtual bool DataAvail() = 0;

	/**
	 * @brief GetByte �������� 1 ���� �� ������. ���������� ������������ � ���� � DataAvail()
	 * @return ���� ��� 0, ���� ������ ���
	 */
	virtual uint8_t GetByte(bool& res) = 0;

	/**
	 * @brief SendData ��������� ������ � UART. ����� ������ ������ ������� ����� ����� ���� ����������� �����
	 * @param dta ��������� �� ����� � �������
	 * @param size ������ ������������ ������
	 * @param async ����������� ����������, True - ����������� �����, False - ����������� ����� �� ������� ������ �������� ������
	 * � ������, ���� � ������� ������ ������� ������ ��� �� ����������� - ����� ����������� ���������� �� ������� �������� ������.
	 * @return True � ������ ������, False � ������ ������
	 */
	virtual bool SendData(uint8_t* dta, uint32_t size, bool async = false) = 0;

	/**
	 * @brief ReadData ��������� ������ �� RX ������
	 * @param bufferPtr ��������� �� �����
	 * @return ������ ����������� ������
	 */
	virtual uint32_t ReadData(uint8_t* bufferPtr) = 0;

	virtual void CloseConnection() = 0;

	/**
	 * @brief GetDataSize �������� ����� ����, ������� �� ������� ������ UART
	 * @return ����� ���� � ������
	 */
	virtual uint32_t GetDataSize() = 0;

	/**
	* @brief CreateCRC16 ������� ����������� ����� ����
	* @param blk_adr ��������� �� ������ ����
	* @return 2 ����� ����������� �����
	*/
	static uint16_t CreateCRC16(unsigned char* blk_adr, unsigned char blk_len);

	/**
	 * @brief Flush ������� �������� ������ UART
	 */
	virtual void Flush() = 0;
};


class SerialPort : public UartInterface
{
public:
	SerialPort(std::string sPortName = "/dev/ttyUSB0");
	~SerialPort();

	bool Init();
	bool DataAvail();
	void CloseConnection();

	uint8_t GetByte(bool& res);
	bool SendData(uint8_t* dta, uint32_t size, bool async = false);

	uint32_t GetDataSize();

	
	uint32_t ReadData(uint8_t* bufferPtr);//needs for Main Thread
	bool ReadToRX();//needs for CeThread


	void DelaySim(uint64_t ms);
	void Flush() ;

private:
	std::string sPortName = "";
	ceSerial* ce_uart = nullptr;
	uint8_t* Tail= RXbuf;
	uint8_t* Head = RXbuf;
	uint8_t RXbuf[bufSize];//�������
	uint8_t TXbuf[bufSize];//���������

	uint8_t rxQueueBuffer[bufSize];
	std::mutex queueMutex;
	size_t head;
	size_t tail;
};





#endif