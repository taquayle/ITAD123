// ExtraCredit_01 - ASCII Code.cpp : Defines the entry point for the console application.
/*
	Problem 1: Characters for the ASCII Codes

	Write a program that uses loop to display the characters for the ASCII codes 0 through 
	127. Display 16 characters on each line. 
*/

// Tyler Quayle - SIN: 950416426

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int characterDisplay = 0;

	do // do-while that runs until ascii code == 128
	{
		for(int i = 0; i < 16; i++) // For displaying only 16 chars per line
		{
			// Displays characterDisplay as typecast of char than increments it (post)
			cout << " " << (char)characterDisplay++;
		}
		cout << endl;
	}while(characterDisplay < 128);
	
	system("pause");
	return 0;
}

