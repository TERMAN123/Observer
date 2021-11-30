#pragma once
#include "Observer.h"
#include "WeatherProvider.h"

class UpdateBackground :
	public Observer
{
public:
	UpdateBackground(WeatherProvider* weather);
	~UpdateBackground();

	virtual void notify();

private:
	WeatherProvider* m_weather;
};

