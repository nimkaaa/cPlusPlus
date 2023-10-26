#include <iostream>
#include "getting.h"

int main()
{
	const double first_num = get_number();
	double second_num = get_number();
	char character = get_character();
	double result;

	if (character == '+')
	{
		result = first_num + second_num;
		std::cout << "result: " << first_num << " + " << second_num << " = " << result;
	} 
	else if (character == '-')
	{
		result = first_num - second_num;
		std::cout << "result: " << first_num << " - " << second_num << " = " << result;
	}
	else if (character == '*')
	{
		result = first_num * second_num;
		std::cout << "result: " << first_num << " * " << second_num << " = " << result;
	}
	else if (character == '/')
	{
		result = first_num / second_num;
		std::cout << "result: " << first_num << " / " << second_num << " = " << result;
	}
	else
	{
		std::cout << "you've got the wrong character...";
		return 0;
	}

	
	return 0;
}