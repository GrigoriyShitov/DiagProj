#ifndef _CONSOLEREADTHREAD_H
#define _CONSOLEREADTHREAD_H

#include <string>
#include <termios.h>
#include <unistd.h>
#include <stdio.h>
#include "DiagRequest.h"

void ConsoleReadThread(msgQueue &qC, msgQueue &qM);
void menuoptions();
#if defined(unix) || defined(__unix) || defined(__unix__) || defined(__APPLE__)
int mygetch();
#elif defined(_WIN32) || defined(_WIN64)
#define mygetch() getch()
#endif

#endif