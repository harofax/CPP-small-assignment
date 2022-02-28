// dan_last_digit.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "dan_last_digit.h"

using namespace std;

int main()
{
    int num;
    
    cout << "Enter number: ";
    cin >> num;

    cout << "---------------------------" << endl;

    const int last = last_digit(num);
    cout << "last digit of " << num << " is: " << last << endl;

    cout << "---------------------------" << endl;

    cout << "each digit: " << endl;

    print_each_digit(num);

    cout << "---------------------------" << endl;

    cout << "reverse digits: " << endl;

    print_reverse_digits(num);

    cout << "---------------------------" << endl;

}

int first_digit(int number)
{
    if (number >= 10) 
    {
        return first_digit(number / 10);
    }

    return number;
}

int last_digit(int number)
{
    return number % 10;
}

void print_each_digit(int number)
{
    const int num_digits = log10(number);

    if (number >= 10) 
    {
        print_each_digit(number / 10);
    }

    const int digit = number % 10;

    cout << "digit #" << num_digits + 1 << ": " << digit << endl;
}

void print_reverse_digits(int number)
{
	const int num_digits = log10(number);

    for (int i = 0; i <= num_digits; i++)
    {
        cout << "digit #" << num_digits - i + 1 << ": " << number % 10 << endl;
        number /= 10;
    }
}
