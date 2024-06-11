#ifndef LTE_H
#define LTE_H
#include <stdbool.h>

#ifdef __cplusplus
extern "C"
{
#endif

    bool parse4G(uint8_t *packet,size_t size);

#ifdef __cplusplus
}
#endif

#endif