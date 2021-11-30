
#include "pch.h"
#include "WeatherProvider.h"
#include "UpdateBackground.h"
#include "DisplayMessage.h"
#include <iostream>

int main()
{
	WeatherProvider wetherProvider;
	UpdateBackground backgroundUppdater(&wetherProvider);
	DisplayMessage messageDisplayer(&wetherProvider);

	wetherProvider.generateWeather();
}

