// dan_compress_string.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <sstream>

void flush_cin()
{
	std::cin.clear();													// clear the fail state
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');	// flush the cin buffer
}

void get_str_input(std::string& value)
{
	while (true)
	{
		std::cin >> value;
		if (std::cin.fail())
		{
			std::cout << "Invalid input, please enter a string: \n";
			flush_cin();	// flush the cin buffer
			continue;
		}
		break;
	}
}

void compress_string(const std::string& input, std::string& output)
{

	int counter = 1;
	char same = input[0];
	std::stringstream compression;

	for (auto i = 1u; i < input.size(); i++)
	{
		if (input[i] == same)
		{
			counter++;
		} else
		{
			if (counter > 1)
				compression << same << counter;
			else
				compression << same;
			same = input[i];
			counter = 1;
		}
	}

	if (counter > 1)
		compression << same << counter;
	else
		compression << same;

	compression >> output;

}

int main()
{
    std::cout << "Enter a string:\n";

    std::string input;

	get_str_input(input);

	std::string compressed_input;

	compress_string(input, compressed_input);

	std::cout << "Compressed format:\n" << compressed_input << std::endl;


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
