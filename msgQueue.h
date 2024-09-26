#pragma once
#ifndef MSGQUEUE_H
#define MSGQUEUE_H


#include <queue> 
#include <mutex>
#include <semaphore>

#define msgSimInit (0)
#define msgDataAvail (1)

#define msgSwitchTo2g (0x32)//2 keypad
#define msgSwitchTo3g (0x33)//3 keypad
#define msgSwitchTo4g (0x34)//4 keypad


#define msgStop (0x20)
#define msgContinue (0x1b)

#define msgUnknown (253)
#define msgStart (254)
#define msgTerminate (255)

class msgQueue
{
private:
	std::queue<int> q;
	std::mutex mtx;
	std::counting_semaphore<200> sem{ 0 };
	bool terminateVar = false;
public:
	bool terminateWork();
	bool getTermVar();
	bool pushN(int value);
	bool pushTo(int value, msgQueue& qTo);
	bool popN();
	int sizeq();
	bool checkmsg(); 
	uint8_t front();
	void waitData();

};
#endif