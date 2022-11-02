#pragma once

#include <iostream>
#include <iomanip>

#include "Date.hpp"

enum Fields
{
	ARRAY,
	FRAME
};

struct COORD
{
	unsigned X;
	unsigned Y;
};


class Rendering
{
private:
	const int numRows = 20;
	const int numCols = 20;
	const unsigned HEIGHT = 10;
	const unsigned WIDTH = 10;
	const unsigned paddingWidth = 2;
	

private:
	char array[20][20] = { '*' };

public:
	void arrayFilling();
	void frame(int X, int Y);

	void Draw();
};
