#include "Payload.h"





uint32_t Payload::SetPayload(uint8_t opcode, uint8_t* packbuf, uint16_t sizepack, uint8_t* buf) {
	memset(buf, 0, sizeof(buf));
	uint8_t *ptr = buf;
	uint16_t size = 0;
	*ptr++ = opcode; size++;
	
	memcpy(ptr, packbuf, sizepack);
	ptr+=sizepack;
	size += sizepack;

	uint16_t crc = SerialPort::CreateCRC16(buf, size);
	uint8_t* crcPtr = (uint8_t*)&crc;
	*ptr = crcPtr[0];
	*++ptr = crcPtr[1];
	size += 2;
	ptr = buf;
	while ((size_t)(ptr - buf) < size)
	{
		if (*ptr == '}') {
			ptr++;
			memmove(ptr + 1, ptr, size - ((size_t)(ptr - buf)));
			*ptr = ('}')^0x20;
			size++;
		}
		else if (*ptr == '~') {
			*ptr = '}';
			ptr++;
			memmove(ptr + 1, ptr, size - ((size_t)(ptr - buf)));
			*ptr = ('~') ^ 0x20;
			size++;

		}
		ptr++;
	}	
	

	//uint16_t* crcPlace = (uint16_t*)ptr;
	//*crcPlace = crc;
	*ptr = '~';
	return size+1;
}