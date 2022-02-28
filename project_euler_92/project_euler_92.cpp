// project_euler_92.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// A number chain is created by continuously adding the square of the digits in a number to form a new number until it has been seen before.
//
// For example,
//
// 44 → 32 → 13 → 10 → 1 → 1
// 85 → 89 → 145 → 42 → 20 → 4 → 16 → 37 → 58 → 89
//
// Therefore any chain that arrives at 1 or 89 will become stuck in an endless loop.What is most amazing is that EVERY starting number will eventually arrive at 1 or 89.
//
// How many starting numbers below ten million will arrive at 89 ?

#include <iostream>
#include "project_euler_92.h"
#include <chrono>

int main()
{
	using namespace std;

	constexpr int count = 10000000;

	const auto start = chrono::system_clock::now();
	const int result = solver(count);
	const auto end = chrono::system_clock::now();


	const auto elapsed =
		std::chrono::duration_cast<std::chrono::milliseconds>(end - start);


	cout << "elapsed time: " << elapsed.count() << " milliseconds" << endl;

	cout << "number of 89chains from 0 to " << count << " was: " << result << endl;
}


int step(int num)
{
	int sum {};

	while (num > 0)
	{
		const int digit = num % 10;

		sum += digit * digit;

		num /= 10;
	}

	return sum;
}

int solver(const int count)
{
	int num_89s {0};

	for (int i = 1; i < count; i++)
	{
		int cur_step = step(i);
		while (cur_step != 89 && cur_step != 1)
		{
			cur_step = step(cur_step);
		}

		if (cur_step == 89)
		{
			num_89s++;
		}
	}

	return num_89s;
}