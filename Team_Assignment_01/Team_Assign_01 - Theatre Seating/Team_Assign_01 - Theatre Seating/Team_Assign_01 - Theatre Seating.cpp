// GroupAssign_01 - Theater Seating.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iomanip>
#include <fstream>
#include <iostream>
#include <math.h>
using namespace std;

const int ROWS = 16;
const int SEATS = 31;

void setSeats(char[ROWS][SEATS]);
	void fromFile(char[ROWS][SEATS]);
void setCost(double[]);
	bool validate(double);
	void fromFile(double[]);



void displaySeats(char[ROWS][SEATS]);
int displayMenu(char[ROWS][SEATS], double []);
	void seatCheck(int, int, int, char[ROWS][SEATS]);
		bool validate(int, int, int);
	void seatInfo(char[ROWS][SEATS], double[]);






int main()
{

	char seats[ROWS][SEATS];
	double seatCost[ROWS];

	cout << "Group 3 - Theatre Seating Project:" << 
		"\nTyler Quayle\nJonathan Lopez-Cuevas\n" <<
		"Barbara Puk\nSudachom Samitthan\n\n";
	system("pause");

	setCost(seatCost);

	setSeats(seats);

	do{ displaySeats(seats);
	}while(displayMenu(seats, seatCost));

	cout << "\n\nHave a nice day!\n\n";

	ofstream costOut;
	costOut.open("seatCost.txt");

	for(int i = 1; i < ROWS; i++)
		costOut << seatCost[i] << endl;

	ofstream seatsOut;
	seatsOut.open("seatAssign.txt");

	for(int i = 1; i < ROWS; i++)
	{
		for(int j = 1; j < SEATS; j++)
			seatsOut << seats[i][j];
		seatsOut << endl;
	}
	seatsOut.close();
	costOut.close();
	system("pause");
	return 0;
}

void setSeats(char seats[][SEATS])
{
	system("cls");
	int choice;

	cout << "SET SEATS MENU\n\nEnter 0: Set all seats empty\nEnter 1: Read from file\nChoice:";
	cin >> choice;
	if(choice == 0)
	{
		for(int i = 1; i < ROWS; i++)
			for(int j = 1; j < SEATS; j++)
				seats[i][j] = '#';
	}
	else if(choice == 1)
	{
		fromFile(seats);
	}
	else
	{
		cout << "Invalid Choice\n\n";
		system("pause");
		setSeats(seats);
	}

}

void fromFile(char seats[][SEATS])
{
	ifstream seatsIn;
	seatsIn.open("seatAssign.txt"); 


	if (seatsIn == NULL)
	{
		cout << "\n\nERROR: seatAssign.txt failed to open" << endl; 
		system("pause");
		seatsIn.close();
		setSeats(seats);
	}
	else
	{
		for(int i = 1; i < ROWS; i++)
		{
			for(int j = 1; j < SEATS; j++)
				seats[i][j] = seatsIn.get();                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
			seatsIn.get();
		}
		seatsIn.close();
	}

}

void setCost(double seatCost[])
{
	system("cls");
	int choice;

	cout << "SET COST MENU\n\nEnter 0: Manually enter prices\nEnter 1: Read from file\nChoice:";
	cin >> choice;
	if(choice == 0)
	{
		for(int i = 1; i < ROWS; i++)
		{
			do{
			cout << "Please enter the cost for seats in row " << i << ": ";
			cin >> seatCost[i];
			}while(validate(seatCost[i]));
		}
	}
	else if(choice == 1)
	{
		fromFile(seatCost);
		for(int i = 1; i < ROWS; i++)
		cout << "Row " << i << " price set to: $" << seatCost[i] << endl;
		system("pause");
	}
	else
	{
		cout << "Invalid Choice\n\n";
		system("pause");
		setCost(seatCost);
	}

}

void fromFile(double seatCost[])
{
	ifstream costIn;
	costIn.open("seatCost.txt"); 

	int tempPos = 1;
	if (costIn == NULL)
	{
		cout << "ERROR: seatCost.txt failed to open" << endl; 
		system("pause");
		costIn.close();
		setCost(seatCost);
	}
	else
	{
		while(costIn >> seatCost[tempPos])
		{
			tempPos++;
		}
		costIn.close();
	}

}

bool validate(double check)
{
	if(check > 0)
		return false;
	cout << "\n\nERROR: INVALID INPUT\n\n"; 
	return true;
}

int displayMenu(char seats[][SEATS], double seatCost[])
{
	int choice, rowChoice, seatChoice, toSeatChoice;

	cout << "\n\nMENU\nEnter 1: Buy seats\nEnter 2: See current totals\nEnter 3: Exit\nChoice:";
	cin >> choice;

	switch(choice)
	{
		case 1:
				cout << "Which Row?: ";
				cin >> rowChoice;
				cout << "Which seat?: ";
				cin >> seatChoice;
				cout << "To which seat? ";
				cin >> toSeatChoice;
				seatCheck(rowChoice, seatChoice, toSeatChoice, seats);
				return 1;
		case 2: 
				seatInfo(seats, seatCost);
				return 1;
		case 3: 
				return 0;
		default:
				cout << "\n\nInvalid Choice\n\n";
				system("Pause");
				return 1;
	}
}

void displaySeats(char seats[][SEATS])
{
	system("cls");
	cout << setw(7) << "" << "1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0";
	for(int i = 1; i < ROWS; i++)
	{
		cout << "\nRow " << setw(2) << i;
		for(int j = 1; j < SEATS; j++)
			cout << " " << seats[i][j];
	
	}
}

void seatInfo(char seats[][SEATS], double seatCost[])
{

	system("cls");
	double rowTotal = 0, grandTotal = 0, seatsTaken = 0, grandSeats = 0;

	for(int i = 1; i < ROWS; i++)
	{
		rowTotal = seatsTaken = 0;
		for(int j = 1; j < SEATS; j++)
		{
			if(seats[i][j] == 42)
			{
				rowTotal += seatCost[i];
				seatsTaken++;
			}
		}
		cout << "Row: " << setw(2) << i << " || Price: $"  << setw(3) << seatCost[i] << " || Seats sold: " << setw(3) << seatsTaken 
				<< "|| Seats Left: " << setw(3) << (SEATS-seatsTaken-1) << " || Total: $" << rowTotal << endl;
		grandTotal += rowTotal;
		grandSeats += seatsTaken;
	}
	cout << endl << "\n\nCurrent Grand Total sales: $" << grandTotal <<
		"\nSeats Sold: " << grandSeats << " of " << ((SEATS-1) * (ROWS-1)) <<
		" " << ((grandSeats/((SEATS-1)*(ROWS-1))*100)) << "% full\n\n";
	system("pause");
}


void seatCheck(int rowChoice, int seatChoice, int toSeatChoice, char seats[][SEATS])
{
	if(validate(rowChoice, seatChoice, toSeatChoice))
	{
		for(int i = 0; i <= toSeatChoice-seatChoice; i++)
		{
			if(seats[rowChoice][seatChoice+i] == 42)
				cout << "Sorry Row: " << rowChoice << " seat: " << (seatChoice+i) << " is already sold\n";
			else
			{
			   seats[rowChoice][seatChoice+i] = '*';
			   cout << "Row: " << rowChoice << " seat: " << (seatChoice+i) << " Purchased\n";
			}
		}
	}
	system("pause");
}

bool validate(int rowChoice, int seatChoice, int toSeatChoice)
{
	bool val = true;
	if(rowChoice < 1 || rowChoice > 15)
	{
		cout << "\nERROR: Row does not exsist\n";
		val = false;
	}
	if(seatChoice < 1 || toSeatChoice < 1 || seatChoice > 30 || toSeatChoice > 30)
	{
		cout << "\nERROR: Seat does not exsist\n";
		val = false;
	}
	if(toSeatChoice < seatChoice)
	{
		cout << "\nERROR: Seat selections invalid\n";
		val = false;
	}

	return val;
}



