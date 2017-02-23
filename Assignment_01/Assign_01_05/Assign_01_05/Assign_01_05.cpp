// Assign_01_05.cpp : Defines the entry point for the console application.
// Program that calculates the total for a meal costing $44.50 with tax of 
// 6.75% and a tip of 15%.

//  Tyler Quayle - SIN: 950416426

#include "stdafx.h"
#include <iostream>
using namespace std;

const double TAX = 1.0675;
const double TIP = 1.15;

int main()
{
	//Variable used to keep track of the current bill aqs taxes and tips are
	//added into the program.
	double runningTotal = 44.5;

	//using cout.precision to limit output to 2 decimal places. This only works if
	//the variables are constant, since cout.precision(x) only shows first x numbers
	cout.precision(4);

	//Displaying runningTotal after default value
	cout << "The meal total came out to: $" << runningTotal << endl;

	//Meal total being mulitplied by the tax rate
	runningTotal = runningTotal * TAX;

	//Displaying runningTotal after tax
	cout << "After tax rate of 6.75% the total is now: $" << runningTotal << endl;

	//Running total being mulitplied by tip now that tax has been applied
	runningTotal = runningTotal * TIP;

	//Displaying final runningTotal after tax and tip have been factored in
	cout << "With 15% tip, the total is now: $" << runningTotal << endl;


	system("pause");
	return 0;
}

