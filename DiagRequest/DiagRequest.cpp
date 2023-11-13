#include <iostream>
#include <Windows.h>
#include <string>
//#include "CeThread.h"
#include"Interface.h"
#include  "Payload.h"
#include "StructPack.h"



void menuoptions();

std::mutex mtx;

class myqueue
{
private:
	std::queue<int> q;
	std::mutex mtx;
	std::counting_semaphore<200> sem{ 0 };
public:
	bool pushN(int tid);
	bool popN();
	int sizeq();
	void waitData()
	{
		sem.acquire();
	}
};

myqueue q;

int main()
{
	SerialPort SimPort;//serial port interface

	uint8_t payload = 0;//var for check payload length
	uint8_t buffer[100];//buffer for string which needs to separate format string in pack method

	uint8_t read_buffer[bufSize];//some buffuer for read op
	uint8_t write_buffer[bufSize];//some buffuer for write op

	memset(read_buffer, 0, bufSize);//eroing buffers
	memset(write_buffer, 0, bufSize);//

	//  std::thread t0(CeMain);

	/*while (1) {
		q.waitData();
		std::unique_lock<std::mutex> ceLock(mtx);
		q.popN();
		ceLock.unlock();
	}




	//std::thread t1(func0, 1);






	bool iret;
	iret=SimPort.Init();//com port initialization
	if (iret) {
		std::cout << "Connected!\n";

		SimPort.ReadData(read_buffer, bufSize);//if on start programm the inner buffer isn't empty we get this data
	//1
		memset(buffer, 0, sizeof(buffer));//zeroing

		int32_t a = 0;//***  need to change this variables to define value of config op number
		uint8_t b;
		payload = StructPack::pack(buffer, 100, "3xI", a);
		uint32_t size = Payload::SetPayload(DIAG_LOG_CONFIG_F, buffer, payload, write_buffer);

		iret = SimPort.SendData(write_buffer, size);
		SimPort.DelaySim(1000);

		SimPort.ReadData(read_buffer, bufSize);
	//2
		memset(buffer, 0, sizeof(buffer));

		a = 0;
		b = 5;
		payload = StructPack::pack(buffer, 100, "BxxI", b, a);
		size = Payload::SetPayload(DIAG_EXT_MSG_CONFIG_F, buffer, payload, write_buffer);

		iret = SimPort.SendData(write_buffer, size);
		SimPort.DelaySim(1000);

		SimPort.ReadData(read_buffer, bufSize);
	//3
		memset(buffer, 0, sizeof(buffer));

		a = 1;
		payload = StructPack::pack(buffer, 100, "3xI", a);
		size = Payload::SetPayload(DIAG_LOG_CONFIG_F, buffer, payload, write_buffer);

		iret = SimPort.SendData(write_buffer, size);
		SimPort.DelaySim(1000);

		SimPort.ReadData(read_buffer, bufSize);

	}
	else
		std::cout << "Not connected!\n";
	*/

	SimPort.GetDataSize();


	return 0;
}


void menuoptions() {
	std::cout << "----------------------------------------------------\n";
	std::cout << "-     Welcome and remember noone loves you here    -\n";
	std::cout << "----------------------------------------------------\n";
	std::cout << "-1. LOG_CONFIG_F                                   -\n";
	std::cout << "-2. EXT_MSG_CONGIF_F                               -\n";
	std::cout << "-3. SUBSYS_CMD_F                                   -\n";
	std::cout << "-4. SIMPLE_COMMAND VERNO_F                         -\n";
	std::cout << "-5. SIMPLE_COMMAND EXT_BUILD;                      -\n";
	std::cout << "-6. SIMPLE_COMMAND VER_F;                          -\n";
	std::cout << "-7. SIMPLE_COMMAND VER_F;                          -\n";
	std::cout << "-99. Happy life                                    -\n";
	std::cout << "----------------------------------------------------\n";
}





/* USER CODE BEGIN 0 */




