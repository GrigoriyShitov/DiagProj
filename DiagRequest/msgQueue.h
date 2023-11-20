#pragma once
#ifndef MSGQUEUE_H
#define MSGQUEUE_H


#include <queue> 
#include <mutex>
#include <semaphore>
class msgQueue
{
private:
	std::queue<int> q;
	std::mutex mtx;
	std::counting_semaphore<200> sem{ 0 };
public:
	bool pushN(int value);
	bool popN();
	int sizeq() { return 0; };
	uint8_t front();
	void waitData();

};
#endif