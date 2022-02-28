// dan_lucky_number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <set>

bool check_luck(int num)
{
    std::set<int> occurrence_set;

    while (num > 0)
    {
        const int digit = num % 10;

        const auto exists = occurrence_set.insert(digit);

        if (exists.second == false)
        {
            return false;
        }

        num /= 10;
    }

    return true;
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
            std::cin.clear();																	// clear the fail state
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');	// flush the cin buffer
            continue;
        }
        break;
    }

    return value;
}

int main()
{
    std::cout << "Enter an integer:\n";
    
    const int num = get_int_input();

    num = 4;

    if (check_luck(num))
    {
        std::cout << "It's lucky!!! Congratulations!" << std::endl;
    } else
    {
        std::cout << "It's not a lucky number... My condolences. " << std::endl;
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
