#include "pch.h"
#include "Observable.h"


void Observable::add(Observer* observer)
{
	m_listOfObserver.push_back(observer);
}

void Observable::remove(Observer* observer)
{
	auto it = std::find(m_listOfObserver.begin(), m_listOfObserver.end(), observer);
	if (it != m_listOfObserver.end())
	{
		m_listOfObserver.erase(it);
	}
}

void Observable::notify()
{
	for (Observer* observer : m_listOfObserver)
	{
		observer->notify();
	}
}