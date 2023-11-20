#pragma once
#include <iostream>
#include <Windows.h>
#include <string>
#include "CeThread.h"
#include "Payload.h"
#include "StructPack.h"
#include <functional>

extern myqueue q;
extern std::mutex consolemtx;


class DiagReq {
public:

private:
	SerialPort SimPort;
};

int main();