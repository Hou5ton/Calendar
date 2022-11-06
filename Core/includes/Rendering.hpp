#pragma once

#include <array>
#include <iostream>
#include <iomanip>
#include <string>


#include "Date.hpp"

enum RenderElement
{
	ARRAY,
	FRAME,
	LINE,
	DATE,
	NOTE
};

class Customization
{
private:
	unsigned posX;
	unsigned posY;
	char Symbol;
	RenderElement Element;

	void setup();

public:
	Customization(unsigned x, unsigned y, RenderElement el, char smbl) : 
		posX(x),
		posY(y),
		Element(el),
		Symbol(smbl)
	{
		setup();
	}
};


class Rendering
{
private:
	// field options
	const unsigned fieldHeight = 20;
	const unsigned fieldWidth = 20;
	const char fieldCh = ' ';

	// rectangle options
	const unsigned startPosXrectngl = 0;
	const unsigned startPosYrectngl = 0;
	const unsigned rectangleWidth = 9;
	const unsigned rectangleHeight = 15;
	const char rectangleCh = '#';

	// line options
	const unsigned lineWidth = 7;
	const char lineCh = '-';

	// day of the week field options
	const unsigned startPosXdays = 1;
	const unsigned startPosYdays = 1;
	char dayOfWeek[7] = { 'M', 'T', 'W', 'T', 'F', 'S', 'S' };

	// numbers options
	const unsigned startPosXnum = 3;
	const unsigned startPosYnum = 1;
	const unsigned fieldHeightNum = 6;
	const unsigned fieldWidthNum = 7;
	unsigned dateCh = 1;

	// other
	std::string array[20][20] = { "*" };
	const unsigned paddingWidth = 4;
	std::array<std::array<std::string, 20>, 20> ar;

public:
	Rendering()
	{
		setup();
	}

private:
	void setup();

	void field();
	void rectangle();
	void line(const unsigned startPosX, const unsigned startPosY);
	void days(char* days);
	void numbers();

public:
	void Draw();
};
