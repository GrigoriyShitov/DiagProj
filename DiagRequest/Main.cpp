#include "DiagRequest.h"


void menuoptions();
std::mutex consolemtx;
msgQueue q;



void ConsoleReadThread()
{
	while (true)
	{
		std::string readed;
		std::cin >> readed;
		if (readed == "q")
		{ 
			q.pushN(TERMINATE_WORK);
			return;
		}
	}
}


bool ExecuteStepHandle(DiagReq& diag, msgQueue& q)
{
	bool iret=false;
	iret = diag.ExecuteStep(q);

	if (!diag.inited) {
		diag.Init();
	}
	
	
	return iret;
}


bool TimeoutHandle(DiagReq& diag)
{
	if (!diag.Timeout())
	{
		// TODO: Error logic
	}
	return true;
}

int main()
{
	
	SerialPort SimPort;//serial port interface
	DiagReq diag(&SimPort);
	bool iret = false;
	

	std::thread t0(CeMain, std::ref(SimPort),std::ref(q));
	std::thread t1(ConsoleReadThread);
	//std::thread t2(Timer(DiagReq& diag));
	menuoptions();
	

	while (true)
	{
		q.waitData();
		std::unique_lock<std::mutex> ceLock(consolemtx);
		uint8_t msg = q.front();
		std::cout << std::dec << std::endl << (unsigned int)msg << std::endl;
		ceLock.unlock();
		iret = ExecuteStepHandle(diag, q);
		q.popN();

		if (iret == infinityReadStart) {
			while (1) {
				q.waitData();
				diag.ReadCycle(q);
				q.popN();
			}
		}
	}
	
	t0.join();


	return 0;
}

void menuoptions()
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
