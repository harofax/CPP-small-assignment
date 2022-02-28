// dan_occurences_of_characters.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
#include <string>

int main()
{
    std::cout << "Please enter a word:\n";

	std::string input;

    std::cin >> input;

    std::map<char, int> occurrence_map;


    for (const char chr : input)
    {
        auto uppercase = static_cast<char>(::toupper(chr));
        occurrence_map[uppercase]++;
    }

    for (auto const& val : occurrence_map)
    {
        std::cout << val.first << ": " << val.second << std::endl;
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
