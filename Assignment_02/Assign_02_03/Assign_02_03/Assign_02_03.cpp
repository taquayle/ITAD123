// Assign_02_03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double interestRate, timesCompound, principal, interest, balance;

	cout << "Hello, please enter the principal balance" << endl << "$";

	cin >> principal;

	cout << "Now, please enter the interest rate" << endl;

	cin >> interestRate;

	// Needs to be divided by 100 to get into correct format
	interestRate /= 100;

	cout << "Finally, the times your principal will be compounded per year" << endl;

	cin >> timesCompound;

	// Calculates final balance after interest has been compounded
	balance = principal * pow((1+interestRate/timesCompound), timesCompound);

	
	interest = balance - principal;

	cout << setprecision(2) << fixed << showpoint << endl << endl;
	cout << setw(25) << left << "Interest Rate:";
    cout << setw(10) << right << (interestRate*100) << "%" << endl;
	cout << setw(25) << left << "Times compounded:";
	cout << setw(10) << right << timesCompound << endl;
	cout << setw(25) << left << "Principal:              $";
	cout << setw(10) << right << principal << endl;
	cout << setw(25) << left << "Interest:               $"; 
	cout << setw(10) << right << interest << endl;
	cout << setw(25) << left << "Amount in Savings:      $"; 
	cout << setw(10) << right << balance << endl << endl;


	system("pause");
	return 0;
}

