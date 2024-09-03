#include "msgQueue.h"

bool msgQueue::terminateWork()
{
	terminateVar = true;
	return true;
}

bool msgQueue::getTermVar()
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

bool msgQueue::pushTo(int value, msgQueue &qTo)
{

	std::unique_lock<std::mutex> qlock(mtx);
	qTo.pushN(value);
	qlock.unlock();
	return true;
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

int msgQueue::sizeq()
{
	return q.size();
}

bool msgQueue::checkmsg()
{
	if (sem.try_acquire())
	{
		return true;
	}
    return false;
}



void msgQueue::waitData()
{

	sem.acquire();
}