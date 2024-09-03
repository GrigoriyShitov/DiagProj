#ifndef UMTS_H
#define UMTS_H


#ifdef __cplusplus
extern "C"
{
#endif

    int parse3G(uint8_t* packet4G, size_t lenght, char* pduName);

#ifdef __cplusplus
}
#endif

#endif