#pragma once

#include "Observer.h"
#include <list>

class Observable
{
protected:
	Observable()
	{

	}

public: 
	void add(Observer* observer);
	void remove(Observer* observer);
	void notify();

private:
	std::list<Observer*> m_listOfObserver;
};