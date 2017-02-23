// Assign_01_02.cpp : Defines the entry point for the console application.
// This program will take a number and divide it by 2.

// Tyler Quayle - SIN: 950416426


#include "stdafx.h"
#include <iostream>
using namespace std;

int main()

{
	
	float number;
	int divider;
	
	divider = 2;
	
	cout << "Hi there" << endl;
	cout << "Please input a number and then hit return" << endl;
	cin  >> number;
	
	number = number / divider;
	
	cout << "Half of your number is " << number << endl;
	
	system("pause");
	return 0;
}