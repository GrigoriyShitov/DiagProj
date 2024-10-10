#include "DiagRequest.h"
#include "Main.h"
#include "ConsoleReadThread.h"
#include "SibParser/GSMlib/Sibs.h"
msgQueue qM, qC;
void start();

bool ExecuteStepHandle(DiagReq &diag)
{
	bool iret = false;
	qM.waitData();
	while (qM.front() != msgSimInit){
		qM.waitData();
		qM.popN();
	}
	diag.Init();
	iret = diag.ExecuteStep();


	return iret;
}

bool TimeoutHandle(DiagReq &diag)
{
	if (!diag.Timeout())
	{
		// TODO: Error logic
	}
	return true;
}

int main()
{
	SerialPort SimPort; // serial port interface
	DiagReq diag(&SimPort);
	bool iret = false;
	start();

	std::thread t0(CeMain, std::ref(SimPort), std::ref(qC), std::ref(qM)); // read thread
	std::thread t1(ConsoleReadThread, std::ref(qC), std::ref(qM));		   // programm controll thread
	// std::thread t2(Timer(DiagReq& diag));
	iret= ExecuteStepHandle(diag);
	
	//iret =true;
	while (true)
	{
		
		
		if (iret == infinityReadStart)
		{
			while (!qM.getTermVar())
			{
				qM.waitData();
				switch (qM.front())
				{
				case msgTerminate:
					qM.terminateWork();
					break;
				// case msgDisableLog:

				case msgSwitchTo2g:
					if (diag.SwitchMode(msgSwitchTo2g))
						cout << "2g mode" << endl;
					qC.pushN(msgContinue);
					qM.popN();
					continue;
				case msgSwitchTo3g:
					if (diag.SwitchMode(msgSwitchTo3g))
						cout << "3g mode" << endl;
					qC.pushN(msgContinue);
					qM.popN();
					continue;
				case msgSwitchTo4g:
					if (diag.SwitchMode(msgSwitchTo4g))
						cout << "4g mode" << endl;
					qC.pushN(msgContinue);
					qM.popN();
					continue;
				case msgDataAvail:
				case msgSimInit:
					diag.ReadCycle();
					qM.popN();
					continue;
				default:
					continue;
				}
			}
			break;
		}
	}
	t0.join();
	t1.join();
	return 0;
}

void start()
{
	std::cout << "Welcome to diag programm" << std::endl;
	std::cout << "________________________" << std::endl;
	std::cout << "_Press any key to start_" << std::endl;
	std::cout << "________________________" << std::endl;
	std::cout << "_If you want to stop   _" << std::endl;
	std::cout << "_press q + ENTER       _" << std::endl;
	std::cout << "________________________" << std::endl;
	getchar();
}