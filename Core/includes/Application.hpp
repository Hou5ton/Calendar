#pragma once

#include <exception>

#include "Rendering.hpp"

class Application
{
private:
	bool programmClose = false;
	Rendering draw;

private:
	void setup();

public:
	void mainLoop();
};
