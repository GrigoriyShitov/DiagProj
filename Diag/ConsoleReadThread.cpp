#include "ConsoleReadThread.h"
#if defined(unix) || defined(__unix) || defined(__unix__) || defined(__APPLE__)
int mygetch()
{
    struct termios oldt,
        newt;
    int ch;
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    ch = getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    return ch;
}
#endif

void ConsoleReadThread(msgQueue &qC, msgQueue &qM)
{
    int c;
    if (qM.front() == msgTerminate)
    {
        return;
    }
    qC.pushN(msgStart);
    while (true)
    {
        c = mygetch();
        if (c == 0x20)
        {
            qC.pushN(msgStop);
            usleep(500);
            menuoptions();
            c = mygetch();
            switch (c)
            {
            case 0x51: // qC
            case 0x71: // qC
            case 0xb9: // й
            case 0x99: // Й
                qC.terminateWork();
                qC.pushN(msgTerminate);
                qM.pushN(msgTerminate);
                return;
                break;
            case msgSwitchTo2g: // 2 keypad
                qM.pushN(msgSwitchTo2g);
                break;
            case msgSwitchTo3g: // 3keypad
                qM.pushN(msgSwitchTo3g);
                break;
            case msgSwitchTo4g: // 4 keypad
                qM.pushN(msgSwitchTo4g);
                break;
            case 0x1b: // ESC
                qC.pushN(msgContinue);
                break;
            default:
                break;
            }
        }
    }
}

void menuoptions()
{
    cout << "\nProgramm was stopped by user\n"
         << "Plese, choose an option from the list below:\n"
         << endl;

    cout << "ESC - Continue\n"
         << "2 - GSM" << endl
         << "3 - UMTS" << endl
         << "4 - LTE" << endl
         << "Q - Exit\n"
         << endl;
}