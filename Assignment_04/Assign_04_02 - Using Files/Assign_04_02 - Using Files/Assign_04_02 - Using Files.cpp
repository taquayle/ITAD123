// Assign_04_02 - Using Files.cpp : Defines the entry point for the console application.

/*
	File random.txt (provided) contains a long list of random numbers. Write a program that
	opens the file, reads all the numbers from the file, calculates and displays the following:
	1. The number of numbers in the file
	2. The sum of all the numbers in the file (a running total)
	3. The average of all the numbers in the file
*/

// Tyler Quayle - SIN: 950416426

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
	double numCount = 0, runningTotal = 0, currentNum, numAverage;
	int align = 30, alignNum = 7;
	
	ifstream dataIn;
	dataIn.open("random.txt");  
	
	if (dataIn == NULL)
		cout << "ERROR: random.txt failed to open" << endl; 
	
	else
	{
		cout << "File: random.txt successfully opened" << endl;
		/* START of while loop for reading file until next line = null */
		while(dataIn >> currentNum)
		{
			numCount++;
			runningTotal += currentNum;
		}
		/* END of while loop for reading file */
	
		numAverage = runningTotal / numCount;

		cout << endl << setw(align) << "RESULTS OF RANDOM.TXT" << endl;
		cout << endl << setw(align) << "Amount of numbers in file:" << setw(alignNum) << numCount;
		cout << endl << setw(align) << "Sum of all numbers in file:" << setw(alignNum) << runningTotal;
		cout << setprecision(2) << fixed;
		cout << endl << setw(align) << "Average of numbers in file:" << setw(alignNum) << numAverage;
		cout << endl << endl;
	}
	dataIn.close();
	system("Pause");
	return 0;
}

