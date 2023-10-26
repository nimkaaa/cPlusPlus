#include <iostream>

int readNumber();
void writeAnswer(int result);

int main()
{
    int first_number = readNumber();
    int second_number = readNumber();

    writeAnswer(first_number + second_number);

    return 0;
}

int readNumber()
{
    std::cout << "Enter an integer: ";
    int a = 0;
    std::cin >> a;

    return a;
}

void writeAnswer(int result)
{
    std::cout << "Result of sum: " << result;
}