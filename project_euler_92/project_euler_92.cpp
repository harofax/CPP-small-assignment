// project_euler_92.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "project_euler_92.h"
#include <chrono>

int main()
{
	using namespace std;

	int count = 10000000;

	auto start = chrono::system_clock::now();
	int result = solver(count);
	auto end = chrono::system_clock::now();


	auto elapsed =
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

int solver(int count)
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