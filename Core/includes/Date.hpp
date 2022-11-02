#pragma once

#include <chrono>
#include <ctime>
#include <iostream>

class Date
{
private:
	int Year, Month, Day;
	int seconds, minutes, hours;

public:
	void getCurrentTime();
};
