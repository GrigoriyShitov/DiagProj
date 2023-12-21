#pragma once
#ifndef INTERFACE_H
#define INTERFACE_H

#include <stdint.h>
#include <windows.h>
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
 * @brief The UartInterface class Интерфейс для взаимодействия с платформо-зависимым UART
 */
class UartInterface {
public:
	explicit  UartInterface() {};
	virtual ~UartInterface() {};

	/**
	 * @brief Init Инициализирует Uart. Интерпретатор вызывает инициализацию при собственной инициализации
	 * @return True в случае успеха, False в случае ошибки
	 */
	virtual bool Init() = 0;

	/**
	 * @brief DataAvail Проверяет наличие данных во входном буфере UART
	 * @return True, если данные есть, False, если буфер пустой
	 */
	virtual bool DataAvail() = 0;

	/**
	 * @brief GetByte Получить 1 байт из буфера. Необходимо использовать в паре с DataAvail()
	 * @return Байт или 0, если данных нет
	 */
	virtual uint8_t GetByte(bool& res) = 0;

	/**
	 * @brief SendData Отправить данные в UART. После работы метода входной буфер может быть использован сразу
	 * @param dta Указатель на буфер с данными
	 * @param size Развер отправляемых данных
	 * @param async Асинхронное выполнение, True - неблокирует вызов, False - блокирующий вызов до момента полной отправки буфера
	 * В случае, если к моменту вызова функции данные еще не отправились - метод заблокирует выполнение до момента отправки данных.
	 * @return True в случае успеха, False в случае ошибки
	 */
	virtual bool SendData(uint8_t* dta, uint32_t size, bool async = false) = 0;

	/**
	 * @brief ReadData Прочитать данные из RX буфера
	 * @param bufferPtr Указатель на буфер
	 * @return Длинна прочитанной строки
	 */
	virtual uint32_t ReadData(uint8_t* bufferPtr) = 0;

	virtual void CloseConnection() = 0;

	/**
	 * @brief GetDataSize Получить число байт, лежащих во входном буфере UART
	 * @return Число байт в буфере
	 */
	virtual uint32_t GetDataSize() = 0;

	/**
	* @brief CreateCRC16 считает контрольную сумму байт
	* @param blk_adr Указатель на массив байт
	* @return 2 байта контрольной суммы
	*/
	static uint16_t CreateCRC16(unsigned char* blk_adr, unsigned char blk_len);

	/**
	 * @brief Flush Очистка входного буфера UART
	 */
	virtual void Flush() = 0;
};


class SerialPort : public UartInterface
{
public:
	SerialPort(std::string sPortName = "\\\\.\\COM8");
	~SerialPort();
	// UartDeviceBase interface
public:
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
	uint8_t RXbuf[bufSize];//принять
	uint8_t TXbuf[bufSize];//отправить
};





#endif