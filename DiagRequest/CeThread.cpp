#include "CeThread.h"
#include "DiagRequest.h"

void CeMain(SerialPort& SimPort,msgQueue& q) {
	//uint8_t payload = 0;//var for check payload length
	//uint8_t buffer[100];//buffer for string which needs to separate format string in pack method
	bool iret = SimPort.Init();//com port initialization;
	
	if (iret) {
		std::cout << "Connected!\n";
		q.pushN(msgSimInit);
		while (TRUE)
		{
			
			bool res = SimPort.ReadToRX();
			if (res)
			{
				while (SimPort.ReadToRX()) {};
				q.pushN(msgDataAvail);
			}
		}
		//simport.readdata(read_buffer, bufsize);//if on start programm the inner buffer isn't empty we get this data
		////1
		//memset(buffer, 0, sizeof(buffer));//zeroing

		//int32_t a = 0;//***  need to change this variables to define value of config op number
		//uint8_t b;
		//payload = structpack::pack(buffer, 100, "3xi", a);
		//uint32_t size = payload::setpayload(diag_log_config_f, buffer, payload, write_buffer);

		//iret = simport.senddata(write_buffer, size);
		//simport.delaysim(1000);

		//simport.readdata(read_buffer, bufsize);
		////2
		//memset(buffer, 0, sizeof(buffer));

		//a = 0;
		//b = 5;
		//payload = structpack::pack(buffer, 100, "bxxi", b, a);
		//size = payload::setpayload(diag_ext_msg_config_f, buffer, payload, write_buffer);

		//iret = simport.senddata(write_buffer, size);
		//simport.delaysim(1000);

		//simport.readdata(read_buffer, bufsize);
		////3
		//memset(buffer, 0, sizeof(buffer));

		//a = 1;
		//payload = structpack::pack(buffer, 100, "3xi", a);
		//size = payload::setpayload(diag_log_config_f, buffer, payload, write_buffer);

		//iret = simport.senddata(write_buffer, size);
		//simport.delaysim(1000);

		//simport.readdata(read_buffer, bufsize);

	}
	else
		std::cout << "Not connected!\n";
}
