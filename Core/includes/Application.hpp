#pragma once

#include <exception>

#include "Date.hpp"
#include "Rendering.hpp"


class Application
{
private:
	bool programmClose = false;
	Rendering calendar;
	Date d;

private:
	void setup();

public:
	void mainLoop();
};
