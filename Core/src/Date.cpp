#include "Date.hpp"

void Date::getCurrentTime()
{
	std::time_t result = std::time(nullptr);
	std::cout << std::ctime(&result);
}
