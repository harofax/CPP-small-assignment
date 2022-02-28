// dan_is_odd.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "dan_is_odd.h"

#define BOOL_STR(b) ((b) ? "true" : "false")

int main()
{
    std::cout << "3 is odd? " << BOOL_STR(dan_is_odd(3)) << std::endl;
    std::cout << "2 is odd? " << BOOL_STR(dan_is_odd(2)) << std::endl;
}

bool dan_is_odd(int num) {
	return num % 2 != 0;
}
