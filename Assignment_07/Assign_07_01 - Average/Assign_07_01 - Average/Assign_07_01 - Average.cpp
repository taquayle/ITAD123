// Assign_07_01 - Average.cpp : Defines the entry point for the console application.
/*
	Average Function

	Write a function that finds an average of the array using only pointers 
	(and pointer arithmetic) to move through the array. Test the function in 
	a driver program.  Function header: double average(int* array, int size)
*/

// Tyler Quayle - SIN: 950416426

#include "stdafx.h"
#include <iostream>
#include <time.h>
using namespace std;

double average(int*, const int);

int main()
{
	const int SIZE = 10;
	int numArray[SIZE];
	int *numPtr = numArray;

	int choice;
	
	cout << "Enter 0 - Randomly Generated array\nEnter 1 - Manually entered arrray\n";
	cin >> choice;

	switch (choice)
	{
	case 0:
		srand(time(NULL)); // Seeds calls to rand()
		for(int i = 0; i < SIZE; i++)
		{
			cout << "Number generated (0-999) for Position " << i << ": ";
			*(numPtr+i) = rand() % 999;
			cout << " " << *(numPtr+i) << endl;
		}
		
		cout << "\nAverage of array: " << average(numPtr, SIZE) << "\n\n";
		
		break;
	case 1:
		
		for(int i = 0; i < SIZE; i++)
		{
			cout << "Please enter a Number for Array Position " << i << ": ";
			cin >> numArray[i];
		}
		
		cout << "\nAverage of array: " << average(numPtr, SIZE) << "\n\n";
		
		break;
	default:
			cout << "Invalid Selection, exiting program\n";
	}

	

	system("pause");
	return 0;
}

double average(int * ptr, const int SIZE)
{
	double tempTotal=0;
	for(int i = 0; i < SIZE; i++)
		tempTotal += *(ptr+i);

	return (tempTotal/SIZE);
}