// Assign_06_01 - Chips and Salsa.cpp : Defines the entry point for the console application.
/*
	Chips and Salsa 

	Write a program that lets a maker of chips and salsa keep track of their sales for 5 
	different types of salsa they produce: mild, medium, sweet, hot, and zesty. It should use 
	two parallel 5-element arrays: an array of stings that holds the 5 salsa names and an array 
	of integers that holds the number of jars sold during the past month for each salsa type. 
	The salsa names should be stored using an initialization list at the time the name array is 
	created. The program should prompt the user to enter the number of jars sold for each 
	type. Once this sales data has been entered, the program should produce a report that 
	displays sales for each salsa type, total sales, and the names of the highest selling and 
	lowest selling products. 
*/

// Tyler Quayle - SIN: 950416426

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

bool Validate(int [], int);

int main()
{
	const int ARRAYSIZE = 5;
	
	string salsaNames[ARRAYSIZE] = { "Mild", "Medium", "Sweet", "Hot", "Zesty" };
	int salsaSales[ARRAYSIZE];

	string sTemp = "";
	int iTemp = 0;


	for (int i = 0; i < ARRAYSIZE; i++)
	{
		do{
		cout << "Please enter sales figures for " << salsaNames[i] << ": ";
		cin >> salsaSales[i];
		}while(Validate(salsaSales, i));
	}

	cout << "\n\nSales data highest to lowest\n\n";
	
	for (int i = 0; i < ARRAYSIZE; i++)
	{
		for (int j = 0; j < ARRAYSIZE; j++)
		{
			if(salsaSales[i] > salsaSales[j])
			{
				sTemp = salsaNames[i];
				salsaNames[i] = salsaNames[j];
				salsaNames[j] = sTemp;

				iTemp = salsaSales[i];
				salsaSales[i] = salsaSales[j];
				salsaSales[j] = iTemp;
			}

		}
	}
	
	for(int i = 0; i < ARRAYSIZE; i++)
		cout << "Sales for " << salsaNames[i] << ": " << salsaSales[i] << "\n";

	system("Pause");
	return 0;
}

bool Validate(int validateSales[], int index)
{
	if(validateSales[index] < 0)
	{
		cout << "\n\nError: invalid input, enter input again\n\n";
		return true;
	}
	else
		return false;
}