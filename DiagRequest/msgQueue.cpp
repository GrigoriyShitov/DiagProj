#include "msgQueue.h"

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
	sem.acquire();
}