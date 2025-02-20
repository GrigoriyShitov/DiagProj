#include "CeThread.h"
#include "DiagRequest.h"

void CeMain(SerialPort &SimPort, bool &closeConnection)
{
	SimPort.Flush();

	while (!closeConnection)
	{
		while (SimPort.ReadToRX())
		{
		};
	}
}
