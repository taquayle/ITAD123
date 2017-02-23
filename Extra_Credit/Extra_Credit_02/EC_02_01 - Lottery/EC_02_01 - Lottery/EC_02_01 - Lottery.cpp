// EC_02_01 - Lottery.cpp : Defines the entry point for the console application.


// Tyler Quayle - SIN: 950416426

#include "stdafx.h"
#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;

int main()
{
	int lotteryNum[5];
	int userNum[5];
	int match = 0;
	srand(time(NULL)); //For seeding random 

	for(int i = 0; i < 5; i++)
		lotteryNum[i] = rand() % 9;

	cout << "Please enter 5 numbers between 1 and 9 with space between each\n";
	cin >> userNum[0] >> userNum[1] >> userNum[2] >> userNum[3] >> userNum[4];


	cout << setw(17)<< "Lottery Numbers: ";
	for(int i = 0; i < 5; i++)
	{
		cout << lotteryNum[i] << " ";
		if(userNum[i] == lotteryNum[i])
			match++;
	}
	
	cout << endl << setw(17) << "User Numbers: ";
	for(int i = 0; i < 5; i++)
		cout << userNum[i] << " ";

	cout << "\n\nTotal Matches: " << match;
	cout << endl;
	system("Pause");
}

