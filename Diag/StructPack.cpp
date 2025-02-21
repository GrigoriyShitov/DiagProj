#include "StructPack.h"

StructPack::StructPack(const char *format, va_list inArg)
	: format(format)
{
	va_copy(arg, inArg);
	va_end(inArg);
}
StructPack::StructPack(const char *format, va_list inArg, void *buffer, uint32_t maxLen)
	: buffer((uint8_t *)buffer), maxLen(maxLen), format(format)
{
	va_copy(arg, inArg);
	va_end(inArg);
}
StructPack::~StructPack()
{
	va_end(arg);
}

int StructPack::doPack()
{
	int width;
	pos = 0;

	const char *str;
	int strLen;

	for (; *format != 0; format++)
	{
		width = 0;
		for (; *format >= '0' && *format <= '9'; ++format)
		{
			width *= 10;
			width += *format - '0';
		}

		if (width == 0)
			width = 1;
		switch (*format)
		{
		case 'x':
		{
			while (width--)
				pack_uint8(0);
			break;
		}
		case 'c':
		case 'b':
		case '?':
		case 'B':
		{
			while (width--)
			{
				//if msvc: uint8_t ptr = va_arg(arg, uint8_t);
				uint8_t ptr = va_arg(arg, int);
				pack_uint8(ptr);
			}
			break;
		}
		case 'i':
		case 'I':
		case 'l':
		case 'L':
		{
			while (width--)
			{
				uint32_t ptr = va_arg(arg, uint32_t);
				pack_uint32(ptr);
			}
			break;
		}
		case 'f':
		{

			while (width--)
			{
				float ptr = va_arg(arg, double);
				pack_float(ptr);
			}
			break;
		}
		case 's':
		{
			str = va_arg(arg, const char *);
			strLen = va_arg(arg, unsigned int);
			pack_string(str, strLen, width);
			break;
		}
		}
	}
	/*else {
		switch (*format) {
		case 'B': pack_uint8(va_arg(arg, unsigned int)); break;
		case 'L': pack_uint32(va_arg(arg, uint32_t)); break;
		case 'f': pack_float(va_arg(arg, double)); break;
		}
	}
}*/

	return pos;
}

void StructPack::pack_uint8(uint8_t val)
{
	emit(val);
}
void StructPack::pack_uint32(uint32_t val)
{
	emit(val >> 0);
	emit(val >> 8);
	emit(val >> 16);
	emit(val >> 24);
}
void StructPack::pack_string(const char *str, int len, int width)
{
	for (int i = 0; i < width; i++)
	{
		uint8_t c = 0;
		if (i < len)
			c = str[i];
		emit(c);
	}
}
void StructPack::pack_float(float val)
{
	uint8_t *d = (uint8_t *)&val;
	emit(d[0]);
	emit(d[1]);
	emit(d[2]);
	emit(d[3]);
}
void StructPack::emit(uint8_t byte)
{
	if (pos == maxLen)
		return;
	buffer[pos++] = byte;
}

int StructPack::doUnpack()
{
	int width;
	pos = 0;

	char *str;
	int strLen;

	for (; *format != 0; format++)
	{
		width = 0;
		for (; *format >= '0' && *format <= '9'; ++format)
		{
			width *= 10;
			width += *format - '0';
		}

		if (width > 0)
		{
			switch (*format)
			{
			case 'B':
			{
				uint8_t *ptr = va_arg(arg, uint8_t *);
				while (width--)
					unpack_uint8(ptr++);
				break;
			}
			case 'L':
			{
				uint32_t *ptr = va_arg(arg, uint32_t *);
				while (width--)
					unpack_uint32(ptr++);
				break;
			}
			case 'f':
			{
				float *ptr = va_arg(arg, float *);
				while (width--)
					unpack_float(ptr++);
				break;
			}
			case 's':
				str = va_arg(arg, char *);
				strLen = va_arg(arg, unsigned int);
				unpack_string(str, strLen, width);
				break;
			}
		}
		else
		{
			switch (*format)
			{
			case 'B':
				unpack_uint8(va_arg(arg, uint8_t *));
				break;
			case 'L':
				unpack_uint32(va_arg(arg, uint32_t *));
				break;
			case 'f':
				unpack_float(va_arg(arg, float *));
				break;
			}
		}
	}

	return pos;
}

void StructPack::unpack_uint8(uint8_t *val)
{
	*val = fetch();
}
void StructPack::unpack_uint32(uint32_t *val)
{
	*val =
		(fetch() << 0) |
		(fetch() << 8) |
		(fetch() << 16) |
		(fetch() << 24);
}
void StructPack::unpack_float(float *val)
{
	uint8_t *d = (uint8_t *)val;
	d[0] = fetch();
	d[1] = fetch();
	d[2] = fetch();
	d[3] = fetch();
}
void StructPack::unpack_string(char *str, int len, int width)
{
	for (int i = 0; i < width; i++)
	{
		uint8_t c = fetch();
		if (i < len)
			str[i] = c;
	}
}
uint8_t StructPack::fetch()
{
	if (pos == maxLen)
		return 0;
	return buffer[pos++];
}

int StructPack::pack(void *buffer, uint32_t maxLen, const char *format, ...)
{
	va_list arg;
	va_start(arg, format);
	StructPack packer(format, arg, buffer, maxLen);
	return packer.doPack();
}
int StructPack::unpack(const void *buffer, uint32_t maxLen, const char *format, ...)
{
	va_list arg;
	va_start(arg, format);
	StructPack packer(format, arg, const_cast<void *>(buffer), maxLen);
	return packer.doUnpack();
}
