#include <iostream>

double get_number()
{
	std::cout << "enter a double value: ";
	double number;
	std::cin >> number;

	return number;
}

char get_character()
{
	std::cout << "enter one of the following: +, -, *, or /: ";
	char character;
	std::cin >> character;

	return character;
}