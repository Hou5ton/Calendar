#include "Frame.hpp"

Frame::Frame()
{
    fillMainField();
    fillOuterBorders();
    insertSeparatorLine(1,2);
    insertLineDays(dayOfWeek);
    insertDaysInMatrix();
    insertSeparatorLine(1, 8);
}

void Frame::fillMainField()
{
    for (int height = 0; height < fieldHeight; ++height)
    {
        for (int width = 0; width < fieldWidth; ++width)
        {
            array[height][width] = fieldCh;
        }
    }
}

void Frame::fillOuterBorders()
{
    for (int currentX = startPosXrectngl; currentX < rectangleHeight; ++currentX)
    {
        for (int currentY = startPosYrectngl; currentY < rectangleWidth; ++currentY)
        {
            if ((currentX == startPosXrectngl) && (currentY == startPosYrectngl) || (currentX == rectangleHeight - 1) && (currentY == rectangleWidth - 1))
            {
                array[currentX][currentY] = rectangleCh;
            }
            else if ((currentX == startPosXrectngl) && (currentY != startPosYrectngl) || (currentX == rectangleHeight - 1) && (currentY != rectangleWidth - 1))
            {
                array[currentX][currentY] = rectangleCh;
            }
            else if ((currentX != startPosXrectngl) && (currentY == startPosYrectngl) || (currentX != rectangleHeight - 1) && (currentY == rectangleWidth - 1))
            {
                array[currentX][currentY] = rectangleCh;
            }
        }
    }
}

void Frame::insertSeparatorLine(const unsigned startPosX, const unsigned startPosY)
{
    for (int i = startPosX; i < lineWidth + startPosX; ++i)
    {
        array[startPosY][i] = lineCh;
    }
}

void Frame::insertLineDays(char* dayOfWeek)
{
    for (int i = startPosXdays, posArr = 0; i < 7 + startPosXdays; ++i, ++posArr)
    {
        array[startPosYdays][i] = dayOfWeek[posArr];
    }
}

void Frame::insertDaysInMatrix()
{
    for (int curPosX = startPosXnum; curPosX < fieldHeightNum + startPosXnum; ++curPosX)
    {
        for (int curPosY = startPosYnum; curPosY < fieldWidthNum + startPosYnum; ++curPosY)
        {
            array[curPosX][curPosY] = std::to_string(dateCh++);;
        }
    }
}

void Frame::Draw()
{
    system("cls");

    for (int height = 0; height < fieldHeight; ++height)
    {
        for (int width = 0; width < fieldWidth; ++width)
        {
            std::cout << std::setw(paddingWidth) << array[height][width];
        }
        std::cout << std::endl;
    }
}
