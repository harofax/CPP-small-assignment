// dan_fibbonacci_gucci_gang.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int fibonacci_rec(int n)
{
	if (n == 0 || n == 1)
	{
		return n;
	} 

	return fibonacci_rec(n - 1) + fibonacci_rec(n - 2);
}

void fibonacci_iter(int n)
{
	int cur = 0, next = 1, sum = 0;
	for (int i = 0; i <= n; i++)
	{
		std::cout << cur << " ";
		sum = cur + next;
		cur = next;
		next = sum;
	}
}

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



int main()
{
	int n = 0;

	std::cout << "Enter how many fibbos u want, bucko: \n";
	n = get_int_input();

	int i = 0;

	while (i <= n)
	{
		std::cout << fibonacci_rec(i) << " ";
		i++;
	}

	std::cout << "CUT CUT CUT, TAKE 2, DO IT MORE ITERATIVELY:\n";

	fibonacci_iter(n);
}
