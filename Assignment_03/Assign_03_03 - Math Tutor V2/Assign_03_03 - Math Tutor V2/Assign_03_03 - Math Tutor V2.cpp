// Assign_03_03 - Math Tutor V2.cpp : Defines the entry point for the console application.

// Tyler Quayle - SIN: 950416426

#include "stdafx.h"
#include <iostream>
#include <iomanip>				// Used for formattting cout
#include <cstdlib>				// C++ std library, used for rand()
#include <ctime>				// Used to assign seed to random millisecond
#include <string>				
using namespace std;


int main()
{
	unsigned seed = time(0);	// Seed found by using time(0). Based on milliseconds since 1970ish
	srand(seed);				// Random seed used for numberOne and numberTwo variables
	
	int userAnswer;				// User input variable
	int realAnswer;				// The answer and found by computer
	int choice;
	string operation;			// Used to output operator symbol, subtraction or addition
	string selection;			// Used to output which selection user made, subtraction or addition
	
	do
	{
		int numberOne = rand() % 999;	// Used for first of two variables
		int numberTwo = rand() % 999;   // Used for second of two randomly assigned variables

		system("CLS"); // Clears screen for next selection
		
		/* Display the menu for user to select from */
		cout << "Math Tutor 2.0, please make a selection" << endl;
		cout << "1 - Addition practice" << endl;
		cout << "2 - Subtraction practice" << endl;
		cout << "3 - Quit" << endl;
		cout << "Selection: ";
		/* End menu display */
		cin >> choice;

		if(choice == 1 || choice == 2)
		{
			/* If choice is Addition, make operation a plus sign, otherwise make it a sub sign even if
			input choice was wrong as it will not be displayed */
			operation = choice == 1 ? '+' : '-';
			selection = choice == 1 ? "Addition practice selected" : "Subtraction practice selected";

			/* If choice was equal to 1, add 2 random numbers, otherwise subtract them */
			realAnswer = choice == 1 ? (numberOne + numberTwo) : (numberOne - numberTwo);

			/* Display the current 2 random numbers as well as the users selection header and
			operator symbol */
			cout << endl << selection << endl << endl;
			cout << setw(2) << left << "" << setw(3) << right << numberOne << endl;
			cout << setw(2) << left << operation << setw(3) << right << numberTwo << endl;
			cout << setw(4) << "-----" << endl;

			cin >> userAnswer; // Get users answers
		
			if(userAnswer == realAnswer) // Check to see if answer is correct
			{cout << endl << "Congratulations!, your answer was correct" << endl << endl;}
		
			else // Answer is not correct
			{
				cout << endl << "Sorry, your answer was incorrect, the correct answer is" << endl << endl;
				cout << setw(2) << left << "" << setw(3) << right << numberOne << endl;
				cout << setw(2) << left << operation << setw(3) << right << numberTwo << endl;
				cout << setw(4) << "-----" << endl;
				cout << setw(5) << right << realAnswer << endl << endl;
			}

		}

		else if (choice != 3) //Will execute if any number other than 1, 2 or 3 is entered
		{cout << endl << "Sorry, your selection was not on the list, please enter valid choice" << endl;}
		
		system("pause");
	} while (choice != 3);

	return 0;
}