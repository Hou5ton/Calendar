#include "Rendering.hpp"

void Rendering::frame(int X, int Y)
{
    for (int posX = X; posX < WIDTH; ++posX)
    {
        for (int posY = Y; posY < HEIGHT; ++posY)
        {
            if ((posX == X) && (posY == Y) || (posX == WIDTH - 1) && (posY == HEIGHT - 1))
            {
                array[posX][posY] = '#';
            }
            else if ((posX == X) && (posY != Y) || (posX == WIDTH - 1) && (posY != HEIGHT - 1))
            {
                array[posX][posY] = '#';
            }
            else if ((posX != X) && (posY == Y) || (posX != WIDTH - 1) && (posY == HEIGHT - 1))
            {
                array[posX][posY] = '#';
            }
        }
    }
}

void Rendering::arrayFilling()
{
    for (int height = 0; height < numCols; ++height)
    {
        for (int width = 0; width < numRows; ++width)
        {
            array[height][width] = '*';
        }
    }
}

void Rendering::Draw()
{
    system("cls");

    for (int height = 0; height < numCols; ++height)
    {
        for (int width = 0; width < numRows; ++width)
        {
            std::cout << std::setw(paddingWidth) << array[height][width];
        }
        std::cout << std::endl;
    }
}
