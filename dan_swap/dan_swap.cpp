#include <iostream>
#include "dan_swap.h"

using namespace std;

void print_values(int value_a, int value_b)
{
	cout << "value a = " << value_a << endl;
	cout << "value b = " << value_b << endl;
}

int main()
{
	int value_a, value_b;

    cout << "Enter an integer for value a: ";
	cin >> value_a;

	cout << "Enter an integer for value b: ";
	cin >> value_b;

	cout << "before swap: " << endl;
	print_values(value_a, value_b);

	//std::swap(value_a, value_b); // STD swap
	//swap_ref(value_a, value_b);
	swap_ptr(&value_a, &value_b);


	cout << "after swap: " << endl;
	print_values(value_a, value_b);
}

void swap_ref(int& value_a, int& value_b)
{
	value_a = value_a + value_b;
	value_b = value_a - value_b;
	value_a = value_a - value_b;
}


void swap_ptr(int* value_a, int* value_b)
{
	*value_a = *value_a + *value_b;
	*value_b = *value_a - *value_b;
	*value_a = *value_a - *value_b;
}
