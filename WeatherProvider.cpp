#include "pch.h"
#include "WeatherProvider.h"
#include <time.h>
#include <Windows.h>

WeatherProvider::WeatherProvider()
	:m_weater(Suny)
{

}

int WeatherProvider::myRand()
{
	srand((int)time(0));
	return rand() % 9;
}

WeatherProvider::~WeatherProvider()
{
}

void WeatherProvider::generateWeather()
{
	while (true)
	{
		Weather w = Weather(myRand());
		if (m_weater != w)
		{
			m_weater = w;
			notify();
		}
		Sleep(5000);
	}
}

Weather WeatherProvider::getWeather() const
{
	return m_weater;
}