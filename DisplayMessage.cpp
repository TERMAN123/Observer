#include "pch.h"
#include "DisplayMessage.h"
#include <iostream>


DisplayMessage::DisplayMessage(WeatherProvider* weather)
	: m_weather(weather)
{
	m_weather->add(this);
}


DisplayMessage::~DisplayMessage()
{
}

void DisplayMessage::notify()
{
	std::cout << "Background updating to corresponding picture" << std::endl;
}