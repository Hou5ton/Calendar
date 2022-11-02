#include "Rendering.hpp"

void Rendering::frame()
{
    // clear field
    system("cls");

    for (int i = 0; i < WIDTH; i++)
    {
        std::cout << std::setw(widthParameter) << "#";
    }
    std::cout << "\n";

    for (int i = 0; i < HEIGHT; i++)
    {
        for (int j = 0; j < WIDTH; j++)
        {
            if (j == 0 || j == WIDTH - 1)
            {
                std::cout << std::setw(widthParameter) << "#";
            }
            else
            {
                bool print = false;
                if (!print)
                {
                    std::cout << std::setw(widthParameter) << " ";
                }
            }
        }
        std::cout << "\n";
    }

    for (int i = 0; i < WIDTH; i++)
    {
        std::cout << std::setw(widthParameter) << "#";
    }
}
