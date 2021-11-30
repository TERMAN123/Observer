#pragma once
#include "Observer.h"
#include "WeatherProvider.h"

class DisplayMessage :
	public Observer
{
public:
	DisplayMessage(WeatherProvider* weather);
	~DisplayMessage();

	virtual void notify();

private:
	WeatherProvider* m_weather;
};

