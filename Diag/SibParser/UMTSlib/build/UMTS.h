#ifndef UMTS_H
#define UMTS_H
#include <stdbool.h>

#ifdef __cplusplus
extern "C"
{
#endif

    bool parse3G(uint8_t *packet,size_t size);

#ifdef __cplusplus
}
#endif

#endif