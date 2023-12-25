#include "msgQueue.h"

bool msgQueue::terminateWork()
{
	terminateVar = TERMINATE_WORK;
	return true;
}

uint8_t msgQueue::getTermVar()
{
	return terminateVar;
}

bool msgQueue::pushN(int value)
{
	std::unique_lock<std::mutex> qlock(mtx);
	q.push(value);
	sem.release();
	qlock.unlock();
	return false;
}

uint8_t msgQueue::front()
{
	std::unique_lock<std::mutex> qlock(mtx);
	return q.front();
}

bool msgQueue::popN()
{
	if (!q.empty()) {
		std::unique_lock<std::mutex> qlock(mtx);
		q.pop();
		qlock.unlock();
		return true;
	}
	return false;
}

void msgQueue::waitData()
{
	if (getTermVar() == TERMINATE_WORK)
		return;
	sem.acquire();
}