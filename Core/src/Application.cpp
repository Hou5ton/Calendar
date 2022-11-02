#include "Application.hpp"

void Application::setup()
{

}

void Application::mainLoop()
{
	// setup();

	while (!programmClose)
	{
		draw.frame();
	}
}
