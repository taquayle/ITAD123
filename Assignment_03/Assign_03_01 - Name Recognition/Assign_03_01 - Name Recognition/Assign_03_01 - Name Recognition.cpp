// Assign_03_01 - Name Recognition.cpp : Defines the entry point for the console application.

/*
	Write a program that will ask first and last names of the user. If your name has been
	entered, output: “Hello, my creator!” Otherwise output: “Hello, fist name last name”,
	where fist name last name is the data entered by the user.
	Use only c-strings (arrays of characters) in the solution of this problem.
*/

// Tyler Quayle - SIN: 950416426

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int main()
{
	const int nameSize = 40;

	char creatorFirst[nameSize] = "Tyler", creatorLast[nameSize] = "Quayle";
	char userFirst[nameSize], userLast[nameSize];

	// Get user first name
	cout << "Please enter your fist name: ";
	cin >> userFirst;

	// Get user last name
	cout << endl << "Please enter your last name: ";
	cin >> userLast;

	// Compare use name to creator name, if both are equal, strcmp will return 0
	if (strcmp(userFirst, creatorFirst) == 0 && strcmp(userLast, creatorLast) == 0)
	{
		cout << endl << "Hello, my creator!" << endl;
	}

	// Arrays are different, output user name
	else
	{
		cout << endl << "Hello " << userFirst << " " << userLast << endl;
	}

	system("Pause");
	return 0;
}

