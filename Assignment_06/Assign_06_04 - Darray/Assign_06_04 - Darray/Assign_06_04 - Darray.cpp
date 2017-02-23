// Assign_06_04 - Darray.cpp : Defines the entry point for the console application.
//


// This program demonstrates the use of dynamic arrays

// Tyler Quayle - SIN: 950416426

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;


int main()

{

   float  *monthSales;		// a pointer used to point to an array
							// holding monthly sales
   float  total = 0;		// total of all sales
   float  average;			// average of monthly sales
   int    numOfSales;		// number of sales to be processed
   int    count;			// loop counter

   cout << fixed << showpoint << setprecision(2);

   cout << "How many monthly sales will be processed? ";
   cin >> numOfSales;

   // Fill in the code to allocate memory for the array pointed to by
   // monthSales.

   monthSales = new float(numOfSales);
   

   cout << "Enter the sales below\n";

   for ( count = 0; count < numOfSales;  count++)
	{
       cout << "Sales for Month number  " 
		    << count// Fill in code to show the number of the month 
			<< ":";
	   cin >> *(monthSales + count);
	   // Fill in code to bring sales into an element of the array
	}

   for ( count = 0; count < numOfSales; count++)
	{
	   total = total + monthSales[count];
	}

   average = total / numOfSales;


   cout << "Average Monthly sale  is $" << average << endl;
   // Fill in the code to deallocate memory assigned to the array.

   system("Pause");
   return 0;
}
