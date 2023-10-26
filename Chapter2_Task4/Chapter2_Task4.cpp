#include <iostream>
#include "constants.h"

int get_height();
double get_passed_height(int time);

int main()
{
    double tower_height = get_height(); // получаем высоту башни
    int time = 0;

    std::cout << "At 0 seconds, the ball is at height: " << tower_height << " meters\n";

    for (time = 1; time < 6; time++)
    {
        double remainig_height = tower_height - get_passed_height(time);
        if (remainig_height <= 0)
        {
            std::cout << "At " << time << " seconds, the ball is on the ground\n";
            return 0;
        }
        else
        {
            std::cout << "At " << time << " seconds, the ball is at height: "
                << remainig_height << " meters\n";
        }
    }

    return 0;
}

int get_height()
{
    std::cout << "Enter the initial height of the tower in meters: ";
    int height;
    std::cin >> height;

    return height;
}

double get_passed_height(int time)
{
    double result = myConstants::gravity * time * time / 2;

    return result;
}