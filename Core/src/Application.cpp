#include "Application.hpp"

void Application::setup()
{

}

void Application::mainLoop()
{
	// setup();

	while (!programmClose)
	{
		calendar.arrayFilling();
		calendar.frame(1,1);
		calendar.Draw();
	}
}
