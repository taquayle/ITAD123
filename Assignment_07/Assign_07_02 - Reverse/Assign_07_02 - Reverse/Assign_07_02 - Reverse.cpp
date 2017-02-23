// Assign_07_02 - Reverse.cpp : Defines the entry point for the console application.
/*
	Reverse Function

	Write a program that reverses in memory an array of integers given by the user. The program
	should ask the user to enter the size of the array, dynamically allocate memory for it and 
	populate the array with the data provided by the user.   

	Implement function void reverse ( int* array, int size). 

	The function gets pointer to the array as a parameter and reverses the order of elements 
	using pointers “head” and “tail” to move through the array.  Use this function to reverse an 
	array given by the user. Output the original array and the reversed array, after the function
	worked on it.
*/

// Tyler Quayle - SIN: 950416426

#include "stdafx.h"
#include <iostream>
using namespace std;

void reverse(int*, int);

int main()
{
	int arraySize;
	int *numArray;

	cout << "Enter size of array: ";
	cin >> arraySize;
	
	numArray = new int[arraySize];

	for(int i = 0; i < arraySize; i++)
	{
		cout << "Enter number for array position " << i << ": ";
		cin >> *(numArray+i);
	}

	cout << "\nArray Forwards\n\n";
	for(int i = 0; i < arraySize; i++)
		cout << " " << *(numArray+i);
	
	reverse(numArray, arraySize);
	
	
	cout << "\n\nArray Reversed\n\n";
	for(int i = 0; i < arraySize; i++)
		cout << " " << *(numArray+i);
	
	cout << endl << endl;

	delete [] numArray;

	system("pause");
	return 0;
}


void reverse(int* nArray, int size)
{
	int *tempArray = new int[size];
	int tempPos = size;

	for(int i = 0; i < size; i++)
		*(tempArray + i) = *(nArray + --tempPos);

	for(int i = 0; i < size; i++)
		*(nArray + i) = *(tempArray + i);
	
	delete [] tempArray;
}
