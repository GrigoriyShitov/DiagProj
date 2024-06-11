#pragma once
#ifndef PAYLOAD_H
#define PAYLOAD_H

#include "messages.h"
#include "LogTypes.h"
#include "GSMTAP.h"
#include "StructPack.h"
#include "Interface.h"

#ifdef __GNUC__
#define PACK( __Declaration__ ) __Declaration__ __attribute__((__packed__))
#endif

#ifdef _MSC_VER
#define PACK( __Declaration__ ) __pragma( pack(push, 1) )\
 __Declaration__\
 __pragma( pack(pop))
#endif



class Payload {
public:
	uint32_t static SetPayload(uint8_t opcode, uint8_t* packbuf, uint16_t sizepack, uint8_t* buf); //make final payload packet
	/*void SetTemplate(const char* format);
	template <typename T>
	T readPayload(size_t index);
	void Pack();
	uint8_t* GeetRawData();*/
	//void GeetRawData(uint8_t* buffer);
private:
	uint8_t m_buffer;

};

#endif