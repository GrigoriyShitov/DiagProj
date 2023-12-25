#include "CeThread.h"
#include "DiagRequest.h"

bool HARERABOTAT = false;

void CeMain(SerialPort& SimPort,msgQueue& q) {

	bool iret = SimPort.Init();//com port initialization;
	
	if (iret) {
		std::cout << "Connected!\n";
		q.pushN(msgSimInit);
		while (1)
		{

			bool res = SimPort.ReadToRX();
			if (res)
			{
				while (SimPort.ReadToRX()){};
				q.pushN(msgDataAvail);
			}
		}

		SimPort.CloseConnection();

	}
	else
		std::cout << "Not connected!\n";
}
