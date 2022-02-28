#include <iostream>
#include "dan_guessing_game.h"

using namespace std;


int main()
{
	char play_again = 'y';

	do
	{
		system("CLS");

		cout << "-- Welcome to the GUESSING GAME --" << endl << endl;

		cout << "Enter min range: ";
		const int min_guess = get_int_input();

		cout << "Enter max range: ";
		int max_guess = get_int_input();

		while (max_guess <= min_guess)
		{
			cout << "Max range must be larger than min range" << endl;
			cout << "Please enter max range again: ";
			max_guess = get_int_input();
		}

		const int range = max_guess - min_guess;
		const int secret_number = rand() % range + min_guess;

		while (true)
		{
			cout << "Enter your guess: ";
			const int guess = get_int_input();

			if (guess == secret_number)
			{
				break;
			}

			if (guess < secret_number)
			{
				cout << "Guess was lower than secret number" << endl;
			}
			else
			{
				cout << "Guess was higher than secret number" << endl;
			}
		}

		cout << "!!!!!!!!!!!!!!!!" << endl;
		cout << "!! YOU DID IT !!" << endl;
		cout << "!!!!!!!!!!!!!!!!" << endl;

		cout << "Play again? [y/n]" << endl;
		cin >> play_again;

	} while (std::tolower(play_again) == 'y');

	system("CLS");
	cout << "\n\n- - - Thank you for playing! - - -\n\n";
}

int get_int_input()
{
	int value;
	while (true)
	{
		cin >> value;
		if (cin.fail())
		{
			cout << "Invalid input, please enter an integer: \n";
			cin.clear();																	// clear the fail state
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');	// flush the cin buffer
			continue;
		}
		break;
	}

	return value;
}
