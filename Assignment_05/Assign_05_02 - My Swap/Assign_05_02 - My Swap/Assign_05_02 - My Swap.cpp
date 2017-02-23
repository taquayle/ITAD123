// Assign_05_02 - My Swap.cpp : Defines the entry point for the console application.
/*
	my_swap Function 
	Write a function named my_swapthat takes two integers and swaps their values. 
	Example: int a holds value 10,  int b holds value 15; 
*/

// Tyler Quayle  - SIN: 950416426

#include "stdafx.h"
#include <iostream>
using namespace std;

void my_swap(int&, int&);

int main()
{
	int varA, varB;
	cout << "Please enter variable A: ";
	cin >> varA;

	cout << "Please enter variable B: ";
	cin >> varB;


	cout << "Variable A: " << varA << " Variable B: " << varB << endl;
	my_swap(varB, varA);
	cout << "My_Swap() called" << endl;
	cout << "Variable A: " << varA << " Variable B: " << varB << endl;
	
	system("pause");
	return 0;
}



void my_swap(int& varA, int& varB)
{
	int temp = varA;
	varA = varB;
	varB = temp;
}


