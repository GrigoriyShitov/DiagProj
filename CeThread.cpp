#include "CeThread.h"
#include "DiagRequest.h"

void CeMain(SerialPort &SimPort, msgQueue &qC, msgQueue &qM)
{

	bool iret = SimPort.Init(); // com port initialization;
	bool res;
	SimPort.Flush();
	if (iret)
	{
		std::cout << "Connected!\n";
		qC.waitData();
		qC.popN();
		qC.pushTo(msgSimInit, qM);
		while (1)
		{
			res = SimPort.ReadToRX();
			if (res)
			{
				while (SimPort.ReadToRX())
				{
				};
				qC.pushTo(msgDataAvail, qM);
			}
			while (qC.checkmsg())
			{
				
				if (qC.front() == msgStop)
				{
					qC.popN();
					qC.waitData();
					switch (qC.front())
					{
					case msgContinue:
						break;
					case msgTerminate:
						qC.terminateWork();
						SimPort.Flush();
						SimPort.CloseConnection();
						std::cout << "Disconnected!\n";
					
						return;
					default:
						break;
					}
					qC.popN();
				}
			}
		}

		SimPort.CloseConnection();
	}
	else
	{
		qC.pushTo(msgTerminate, qM);
		qC.terminateWork();
		std::cout << "Not connected!\n";
		return;
	}
}
