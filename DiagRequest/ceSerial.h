// File: ceSerial.h
// Description: ceSerial communication class for Windows and Linux
// WebSite: http://cool-emerald.blogspot.sg/2017/05/serial-port-programming-in-c-with.html
// MIT License (https://opensource.org/licenses/MIT)
// Copyright (c) 2018 Yan Naing Aye

// References
// https://en.wikibooks.org/wiki/Serial_Programming/termios
// http://www.silabs.com/documents/public/application-notes/an197.pdf
// https://msdn.microsoft.com/en-us/library/ff802693.aspx
// http://www.cplusplus.com/forum/unices/10491/

#ifndef CESERIAL_H
#define CESERIAL_H
#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <cstring>

#define CE_SERIAL_IMPLEMENTATION

#if defined(_WIN64) || defined(__WIN32__) || defined(_WIN32) || defined(WIN32) || defined(__WINDOWS__) || defined(__TOS_WIN__) || defined(__CYGWIN__)
#define CE_WINDOWS 
#elif defined(unix) || defined(__unix) || defined(__unix__)
#define CE_LINUX
#endif

#ifdef CE_WINDOWS
#include <windows.h>
#include <thread>
#include <mutex>
std::mutex readmtx;
#endif

class ceSerial {
private:
	uint8_t  rxchar;
	std::string port;
	int64_t baud;
	int64_t dsize;
	uint8_t parity;
	float stopbits;
	bool stdbaud;
#ifdef CE_WINDOWS
	HANDLE hComm; //handle
	OVERLAPPED osReader;
	OVERLAPPED osWrite;
	BOOL fWaitingOnRead;
	COMMTIMEOUTS timeouts_ori;
#else
	long fd;//serial_fd
#endif
public:
	static void Delay(unsigned long ms);
	ceSerial();
	ceSerial(std::string Device, int64_t BaudRate, int64_t DataSize, uint8_t ParityType, float NStopBits);
	~ceSerial();
	long Open(void);//return 0 if success
	void Close();
	uint8_t ReadChar(bool& success);//return read char if success
	bool WriteByte(uint8_t  ch);////return success flag
	bool WriteString(uint8_t* data);//write null terminated string and return success flag
	bool Write(uint8_t* data, int64_t n);
	bool SetRTS(bool value);//return success flag
	bool SetDTR(bool value);//return success flag
	bool GetCTS(bool& success);
	bool GetDSR(bool& success);
	bool GetRI(bool& success);
	bool GetCD(bool& success);
	bool IsOpened();
	void SetPortName(std::string Port);
	std::string GetPort();
	void SetBaudRate(int64_t baudrate);
	int64_t GetBaudRate();
	void SetDataSize(int64_t nbits);
	int64_t GetDataSize();
	void SetParity(uint8_t  p);
	uint8_t GetParity();
	void SetStopBits(float nbits);
	float GetStopBits();
};


#endif // CESERIAL_H
