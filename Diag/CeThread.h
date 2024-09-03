#include "Payload.h"
#include "StructPack.h"
#include "Interface.h"
#include "msgQueue.h"
#ifndef CETHREAD_H
#define CETHREAD_H


void CeMain(SerialPort& SimPort,msgQueue &qC,msgQueue &qM);


#endif
