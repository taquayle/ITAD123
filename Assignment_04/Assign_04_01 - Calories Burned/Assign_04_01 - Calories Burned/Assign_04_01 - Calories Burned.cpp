// Assign_04_01 - Calories Burned.cpp : Defines the entry point for the console application.

/*
	Calories Burned
	Running on a particular treadmill you burn 3.9 calories per minute. Write a program that
	uses a “for” loop to display the number of calories burned after 10, 15, 20, 25, and 30
	minutes.
*/

// Tyler Quayle - SIN: 950416426

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	double calories = 0;

	cout << "Display calories burned at 10, 15, 20, 25, 30 minutes:\n\n";

	/* START FOR LOOP */
	for(int minutes = 10; minutes < 31; minutes+=5)
	{
		calories = 3.9 * minutes;
		cout << "Calories burned at " << minutes << ": " << calories << endl;
	}
	/* END FOR LOOP */
	
	system("pause");
	return 0;
}

