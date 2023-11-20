#include "DiagRequest.h"


void menuoptions();
std::mutex consolemtx;

msgQueue q;



int main()
{
	SerialPort SimPort;//serial port interface
	DiagReq diag(&SimPort);

	uint8_t read_buffer[bufSize];//some buffuer for read op
	uint8_t write_buffer[bufSize];//some buffuer for write op

	bool iret;

	uint8_t payload = 0;//var for check payload length
	uint8_t buffer[100];//buffer for string which needs to separate format string in pack method

	memset(read_buffer, 0, bufSize);//zeroing buffers
	memset(write_buffer, 0, bufSize);//

	std::thread t0(CeMain, std::ref(SimPort),std::ref(q));
	q.waitData();
	q.popN();
	int32_t a = 0;//***  need to change this variables to define value of config op number
	uint8_t b;
	payload = StructPack::pack(buffer, 100, "3xi", a);
	uint32_t size = Payload::SetPayload(DIAG_LOG_CONFIG_F, buffer, payload, write_buffer);

	iret = SimPort.SendData(write_buffer, size);

	while (1) {
		q.waitData();
		std::unique_lock<std::mutex> ceLock(consolemtx);
		uint8_t msg = q.front();
		q.popN();
		std::cout << (unsigned int)msg << std::endl;
		ceLock.unlock();
		switch (msg)
		{
		case MsgDataAvail: // DataAvail
			if (!diag.DataAvail())
			{
				std::cout << "Read Error"<< std::endl;
				// TODO: Error logic
			}
			break;
		case MsgTimeOut: // Timeout
			if (!diag.Timeout())
			{
				// TODO: Error logic
			}
			break;
		default:
			break;
		}
	}


	t0.join();

	//std::thread t1(func0, 1);




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




