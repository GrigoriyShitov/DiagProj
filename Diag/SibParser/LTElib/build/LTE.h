#ifndef LTE_H
#define LTE_H
#include <stdbool.h>

#ifdef __cplusplus
extern "C"
{
#endif

    int parse4G(uint8_t *packet,size_t size,char* pduName);

#ifdef __cplusplus
}
#endif

#endif