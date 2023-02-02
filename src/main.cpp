/**
 * @file main.cpp
 * @author LiloZz
 * @brief calculating resistors
 * @version 0.1
 * @date 2023-02-01
 *
 * @copyright Copyright FrenchBakery (c) 2023
 *
 */

#include <iostream>

void series_circut(int w1, int w2)
{
    int w = w1 + w2;

    std::cout << "Total Resistance" << w;
}

void parallel_circut(int w1, int w2)
{
    int w = w1 + w2;

    std::cout << "Total Resistance" << w;
}

int main()
{
    int r1;
    int r2;
    std::string x;

    std::cout << "Calculator for comlex resistors" << std::endl;
    std::cout << "Your resistor value  in Ohm:";
    std::cin >> r1;
    std::cin >> r2;
    std::cout << "Do you want to calculate a series circut(s) or a parallel circut(p)";
    std::cin >> x;

    if (x == "s")
    {
        series_circut(r1, r2);
    }

    else if (x == "p")
    {
        series_circut(r1, r2);
    }

    return 0;
}