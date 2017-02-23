// Assign_02_04.cpp : Defines the entry point for the console application.
//
// This program will read in the qunatity of a particular item and its price.
// It will then print out the total price.
// The input will come from a data file and the output will go to
// an output file.

// Tyler Quayle - SIN:950416426

#include "stdafx.h"
#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
   	ifstream dataIn;		// defines an input stream for a data file
	ofstream dataOut;		// defines an output stream for an output file
	int quantity;			// contains the amount of items purchased
	float itemPrice;		// contains the price of each item
	float  totalBill;		// contains the total bill.  The price of all items

// These statements open two files.

	dataIn.open("transaction.txt");  
	dataOut.open("bill.txt");
	
	if (dataIn == NULL)
	{
		cout << "ERROR: File: transaction.text failed to open" << endl;
	}
	
	else if(dataOut == NULL)
	{
		cout << "ERROR: FIle: bill.txt failed to open" << endl;
	}

	else
	{
		cout << "File: transaction.txt successfully opened" << endl << endl;
	    cout << "File: bill.txt successfully opened" << endl << endl;

		// Fill in the appropriate code in the blank below
		cout << setprecision(2) << fixed << showpoint;  // formatted output


		// Fill in the input statement that brings in the 
		// quantity and price of the item.
		dataIn >> quantity;
		dataIn >> itemPrice;

		// Fill in the assignment statement that determines the totalbill.
		totalBill = quantity * itemPrice;

		// Fill in the output statement that prints the total bill, with a label,
		// to an output.
		cout << "Total Bill: $" << totalBill << endl;
		dataOut << "Total Bill: $" << totalBill << endl;

		// Don't forget to close files!!
		dataIn.close();
		dataOut.close();
	}

	system("pause");
	return 0;
}