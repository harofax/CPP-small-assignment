// dan_contains_number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void flush_cin()
{
	std::cin.clear();													// clear the fail state
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');	// flush the cin buffer
}

int get_int_input()
{
	int value;
	while (true)
	{
		std::cin >> value;
		if (std::cin.fail())
		{
			std::cout << "Invalid input, please enter an integer: \n";
			flush_cin();	// flush the cin buffer
			continue;
		}
		break;
	}

	return value;
}

bool contains_digit(int number, int digit)
{
	while (number > 0)
	{
		const int current_digit = number % 10;

		if (current_digit == digit)
		{
			return true;
		}

		number /= 10;
	}

	return false;
}

int main()
{
    std::cout << "Enter a single digit number:\n";
	int digit = get_int_input();

	while (digit > 9 || digit < 0)
	{
		std::cout << "Please enter a single-digit number:\n";
		digit = get_int_input();
	}

	std::cout << "Now enter any number:\n";
	int number = get_int_input();

	if (contains_digit(number, digit))
	{
		std::cout << number << " contains the number " << digit << std::endl;
	} else
	{
		std::cout << number << " does not contain the number " << digit << std::endl;
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
