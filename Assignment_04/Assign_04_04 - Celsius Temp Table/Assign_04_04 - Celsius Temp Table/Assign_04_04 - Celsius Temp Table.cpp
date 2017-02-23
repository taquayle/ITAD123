// Assign_04_04 - Celsius Temp Table.cpp : Defines the entry point for the console application.
/*
	Celsius Temperature Table
	Write a function named celsius that accepts a Fahrenheit temperature as an argument. The function
	should return the temperature, converted to Celsius. Demonstrate the function by calling
	it in a loop that displays a table of the Fahrenheit temperatures 0 through 20 and their
	Celsius equivalents.
*/

// Tyler Quayle - SIN: 950416426

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

double celsius(double);

int main()
{
	// Table heading
	cout << setw(11) << "Fahrenheit" << setw(11) << "Celsius" << endl;
	cout << setprecision(2) << fixed;

	// For loop that displays Fahrenheit and calls celsisus 20 times
	for(double fahrenheit = 0; fahrenheit < 21; fahrenheit++)
		cout << setw(11) << fahrenheit << setw(11) << celsius(fahrenheit) << endl;
	

	system("Pause");
	return 0;
}

double celsius(double fahr)
{
	return (5.0/9.0 * (fahr - 32));
}