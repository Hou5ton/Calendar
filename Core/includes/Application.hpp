#pragma once

#include <exception>

#include "Rendering.hpp"

class Application
{
private:
	bool programmClose = false;
	Rendering calendar;

private:
	void setup();

public:
	void mainLoop();
};
