// Assign_05_04 - Case Converter.cpp : Defines the entry point for the console application.
/*
	Lowercase to Uppercase Converter 

	Write a program that lets the user enter a string into a character array. The 
	program should then convert all the lowercase letters to uppercase. (If character is 
	already uppercase, or is not a letter, it should be left alone.) 
*/

// Tyler Quayle - SIN: 950416426

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	const int arraySize = 100;
	char caseArray[arraySize];

	cout << "Please enter string [MAX SIZE = " << arraySize-1 << "]\n";

	cin.getline(caseArray, (arraySize -1));

	// WOO! possible to use no brackets
	for( int i = 0; i < arraySize; i++)
		if(caseArray[i] > 96 && caseArray[i] < 123)
			caseArray[i] -= 32;

	cout << caseArray << endl;
	system("pause");
	return 0;
}
