// dan_number_sum_mean_lowest_etc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int numbers[] = {1, 2, 3, 6, 8, 5};


    int lowest = INT_MAX;
    int highest = INT_MIN;
    int sum = 0;

    double median;

    constexpr int numbers_len = std::size(numbers);

    if (numbers_len % 2 == 0)
    {
	    constexpr int middle_high = numbers_len / 2;
        constexpr int middle_low = (numbers_len / 2) - 1;

        median = (numbers[middle_high] + numbers[middle_low]) / 2.0;
    }
	else
    {
	    constexpr int middle = (numbers_len) / 2;
    	median = numbers[middle];
    }

    std::cout << "Numbers: \n";
    for (const auto number : numbers)
    {
        std::cout << number << " ";

        sum += number;

    	if (number < lowest)
            lowest = number;

        if (number > highest)
            highest = number;

    }

    std::cout << std::endl;

    std::cout << "lowest: " << lowest << std::endl;
    std::cout << "highest " << highest << std::endl;
    std::cout << "sum: " << sum << std::endl;
    std::cout << "median: " << median << std::endl;
    std::cout << "mean: " << sum / numbers_len << std::endl;
}
