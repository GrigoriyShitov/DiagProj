#include "Payload.h"
#include "StructPack.h"
#include "Interface.h"
#include "msgQueue.h"
#ifndef CETHREAD_H
#define CETHREAD_H

extern bool HARERABOTAT;

void CeMain(SerialPort& SimPort,msgQueue& q);


#endif
