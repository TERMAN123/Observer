#include "pch.h"
#include "UpdateBackground.h"
#include <iostream>

UpdateBackground::UpdateBackground(WeatherProvider* weather)
	: m_weather(weather)
{
	m_weather->add(this);
}


UpdateBackground::~UpdateBackground()
{
}

void UpdateBackground::notify()
{
	switch (m_weather->getWeather())
	{
		case Suny:
		{
			std::cout << "Its suny ^^" << std::endl;
			break;
		}
		case PartlyCloudy:
		{
			std::cout << "Partly cloudy" << std::endl;
			break;
		}
		case MostlyCloudy:
		{
			std::cout << "Mostly cloudy" << std::endl;
			break;
		}
		case LightRain:
		{
			std::cout << "Light rain" << std::endl;
			break;
		}
		case Showers:
		{
			std::cout << "Showers" << std::endl;
			break;
		}
		case Fog:
		{
			std::cout << "Fog" << std::endl;
			break;
		}
		case Hail:
		{
			std::cout << "Hail" << std::endl;
			break;
		}
		case Լightning:
		{
			std::cout << "Lightning" << std::endl;
			break;
		}
		case Snow:
		{
			std::cout << "Its Snowing" << std::endl;
			break;
		}
	default:
		break;
	}
}