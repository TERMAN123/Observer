#pragma once
#include "Observable.h"

enum Weather
{
	Suny,
	PartlyCloudy,
	MostlyCloudy,
	LightRain,
	Showers,
	Fog,
	Hail,
	Լightning,
	Snow
};

class WeatherProvider :
	public Observable
{
public:
	WeatherProvider();
	~WeatherProvider();

	int myRand();
	void generateWeather();
	Weather getWeather() const;

private:
	Weather m_weater;
};

