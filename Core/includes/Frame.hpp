#pragma once

#include <array>
#include <iostream>
#include <iomanip>
#include <string>

#include <vector>

class Frame
{
private:
    // borders of the field of a two-dimensional array
    // on which all other forms will be built
    const unsigned fieldHeight = 20;
    const unsigned fieldWidth = 20;
    const char fieldCh = '1';

    // outer border of the calendar frame (rectangle)
    const unsigned startPosXrectngl = 0;
    const unsigned startPosYrectngl = 0;
    const unsigned rectangleWidth = 9;
    const unsigned rectangleHeight = 15;
    const char rectangleCh = '#';

    // horizontal auxiliary separator line
	const unsigned lineWidth = 7;
	const char lineCh = '-';

    // horizontal line indicating the days of the week
    const unsigned startPosXdays = 1;
    const unsigned startPosYdays = 1;
    char dayOfWeek[7] = { 'M', 'T', 'W', 'T', 'F', 'S', 'S' };

    // options for entering month digits
    const unsigned startPosXnum = 3;
    const unsigned startPosYnum = 1;
    const unsigned fieldHeightNum = 6;
    const unsigned fieldWidthNum = 7;
    unsigned dateCh = 1;

    // other options
    const unsigned paddingWidth = 4;
    std::string array[20][20] = { "*" };
    std::array<std::array<std::string, 20>, 20> ar;
private:

    // filling the main field with empty characters
    void fillMainField();

    // filling the outer borders of the calendar frame (rectangle)
    void fillOuterBorders();

    // insert separator lines in a frame
    void insertSeparatorLine(const unsigned startPosX, const unsigned startPosY);

    // insert a line indicating the days
    void insertLineDays(char* dayOfWeek);

    // inserting days into a matrix
    void Frame::insertDaysInMatrix();

public:
    Frame();

    void Draw();
};
