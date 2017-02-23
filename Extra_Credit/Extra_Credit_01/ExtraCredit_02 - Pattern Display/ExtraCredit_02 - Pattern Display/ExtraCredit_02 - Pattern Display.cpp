// ExtraCredit_02 - Pattern Display.cpp : Defines the entry point for the console application.
/*
	Problem 2: Pattern display 

	Write a program that uses a loop to display patternA below, followed by another loop 
	that displays pattern B
*/

// Tyler Quayle - SIN: 950416426

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{

	cout << "Pattern A \n\n";
	for(int i =0; i < 8; i++)
	{
		for(int j = 0; j < i; j++)
		{  cout << "+";}
		cout << endl;
	}
	
	cout << endl;
	
	cout <<  "Pattern B \n\n";
	for(int i =0; i < 8; i++)
	{
		for(int j = i; j < 7; j++)
		{  cout << "+";}
		cout << endl;
	}

	system("pause");
	return 0;
}
