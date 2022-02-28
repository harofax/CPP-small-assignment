// dan_arithmetic_progression.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>

int main()
{
    using namespace std;

    const std::string splitter = " ";

	cout << "Enter 2 or more numbers, one at a time. To proceed, enter 'OK', or anything else" << endl;

    int num;

    vector<int> progression;


    while (cin >> num)
    {
        progression.push_back(num);
        cout << "Next num:" << endl;
    }

    if (begin(progression) == end(progression))
    {
        cout << "Please enter 2 or more elements" << endl;
        return EXIT_FAILURE;
    }

    const int prog = *next(begin(progression)) - *begin(progression);

    for (auto it = begin(progression); it != end(progression); ++it)
    {
        if (it == begin(progression))
            continue;
        auto prev = std::prev(it);

        const int cur_diff = *it - *prev;
        if (cur_diff != prog)
        {
            cout << "not arithmetic progression, wtf is wrong with u :(";
            return 0;
        }
    }

    cout << "has arithmetic progression pog ^^";
    return 0;
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
