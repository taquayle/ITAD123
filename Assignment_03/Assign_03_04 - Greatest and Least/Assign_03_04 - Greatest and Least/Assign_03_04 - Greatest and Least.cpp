// Assign_03_04 - Greatest and Least.cpp : Defines the entry point for the console application.

/*
	Write a program with a loop that lets the user enter a series of integers. The user should 
	enter -99 to signal the end of the series. After all the numbers have been entered, the 
	program should display the largest and the smallestnumbers entered. 
*/

// Tyler Quayle - SIN: 950416426

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	long int currentNumber, greatestNumber = NULL, smallestNumber = NULL;

	cout << "Please enter any number and any amount of numbers, enter -99 to stop" << endl << endl;
	cout << "Enter number: ";

	cin >> currentNumber; // Get user number

	if(currentNumber != -99)
	{
		greatestNumber = smallestNumber = currentNumber;
		while(currentNumber != -99) // Continues until Sentinel (-99) is entered
		{
			greatestNumber = currentNumber > greatestNumber ? currentNumber : greatestNumber;
			smallestNumber = currentNumber < smallestNumber ? currentNumber : smallestNumber;

			cout << "Enter number: ";
			cin >> currentNumber; // Get next number
		}
		
		system("CLS"); // Clears screen for sequence results
		cout << "Sequence Results:" << endl << endl;
		cout << "Greatest number in sequence: " << greatestNumber << endl;
		cout << "Smallest number in sequence: " << smallestNumber << endl << endl;
	}

	else
	{system("CLS"); cout << "Sequence Results: NO NUMBERS ENTERED\n\n";}

	system("Pause");
	return 0;
}

