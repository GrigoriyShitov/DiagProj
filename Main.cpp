#include "DiagRequest.h"
#include "Main.h"
#include "SibParser/GSMlib/Sibs.h"
void start();

bool ExecuteStepHandle(DiagReq &diag)
{
	bool iret = false;

	iret = diag.Init();
	if (!iret)
	{
		DEBUG_MSG("DEBUG: Init error\n");
		return iret;
	}
	iret = diag.ZeroLog();
	if (!iret)
	{
		DEBUG_MSG("DEBUG: ZeroLog error\n");
		return iret;
	}
	iret = diag.StartREO();
	if (!iret)
	{
		DEBUG_MSG("DEBUG: StartREO error\n");
		return iret;
	}

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

int main(int argc, char *argv[])
{
	SerialPort SimPort; // serial port interface
	DiagReq diag(&SimPort);
	uint8_t msgBuffer[bufSize];
	bool iret = false;
	bool closeConnection = false;
	DEBUG_MSG("DEBUG: Verbose mode");
	start();
	iret = ExecuteStepHandle(diag);
	std::thread t0(CeMain, std::ref(SimPort), std::ref(closeConnection)); // read thread
	// std::thread t1(ConsoleReadThread, std::ref(qC), std::ref(qM));		   // programm controll thread
	//  std::thread t2(Timer(DiagReq& diag));

	// iret =true;
	while (iret)
	{
		while (getchar() != 'q')
		{
			if (getchar() == '0')
			{
				diag.ZeroLog();
				continue;
			}
			if (getchar() == 'g')
			{
				diag.StartREO();
				continue;
			}
			int size = diag.ReadCycle(*msgBuffer);
			if (size != -1)
			{
				diag.Decode(size, msgBuffer);
			}
		}
		
		break;
	}
	closeConnection = true;
	t0.join();
	SimPort.CloseConnection();
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