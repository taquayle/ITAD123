// Assign_02_05.cpp : Defines the entry point for the console application.
//

// Tyler Quayle - SIN: 950416426

#include "stdafx.h"
#include <iostream>
#include <iomanip>				// Used for formattting cout
#include <cstdlib>				// C++ std library, used for rand()
#include <ctime>				// Used to assign seed to random millisecond
using namespace std;


int main()
{
	unsigned seed = time(0);	// Seed found by using time(0). Based on milliseconds since 1970ish
	int numberOne;				// Used for first of two variables
	int numberTwo;              // Used for second of two randomly assigned variables
	int userAnswer;				// User input variable
	int realAnswer;				// The answer and found by computer

	srand(seed);				// Random seed used for numberOne and numberTwo variables

	numberOne = rand() % 999;	// numberOne assigned random variable from 0-999
	numberTwo = rand() % 999;	// numberTwo assigned random variable from 0-999

	realAnswer = numberOne + numberTwo; //Answer found by computer

	cout << "Please enter the answer to the math problem, then press Enter" << endl << endl;
	cout << setw(2) << left << "" << setw(3) << right << numberOne << endl;
	cout << setw(2)  << left << "+" << setw(3) << right << numberTwo << endl;
	cout << setw(4) << "-----" << endl;
	
	cin >> userAnswer;

	// If statment used if the answer is correct
	if(userAnswer == realAnswer)
	{
		cout << endl << "Congratulations!, your answer was correct" << endl << endl;
	}
	
	// Else statment used when the user answer is incorrect
	else
	{
		cout << endl << endl << "Sorry, your answer was incorrect, the correct answer is" << endl << endl;
		cout << setw(2) << left << "" << setw(3) << right << numberOne << endl;
		cout << setw(2)  << left << "+" << setw(3) << right << numberTwo << endl;
		cout << setw(4) << "-----" << endl;
		cout << setw(5) << right << realAnswer << endl << endl;
	}


	system("pause");
	return 0;
}
