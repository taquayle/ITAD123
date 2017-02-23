/* Group_3 - Theatre Seating.cpp : Defines the entry point for the console application.

	Barbara Puk			- Testing / Documentation
	Tyler Quayle		- Main / Putting all code together
	Sudachom Samitthan	- Display seats / menu 
	Jonathan Cuevas		- Reading in files / fill in arrays
*/

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <math.h>
using namespace std;

const int ROWS = 16;
const int SEATS = 31;

/* Jon */
void setSeats(char[ROWS][SEATS]);
	void fromFile(char[ROWS][SEATS]);
	bool validate(double);
	void fromFile(double[]);

void fromFile(int[]);
void setPrice(double[]);
bool validate(double);
/* Jon */

/* Sudachom */
int displayMenu(char[][SEATS] , double[] );
void displaySeats( char [][SEATS]);

void seatInfo(char [][SEATS],double[] );

void seatCheck(int ,int,int , char[][SEATS]);
	bool validate(int ,int,int );
/* Sudachom */

int main()
{

	char seats[ROWS][SEATS]; // Two dimensional array of 115 rows, 30 seats each
	double seatCost[ROWS]; // 


	setPrice(seatCost); // Call to 'fill in' cost array

	setSeats(seats); // Call to 'fill in' seat array


	/* Main loop that user interfaces with */
	do{ displaySeats(seats);
	}while(displayMenu(seats, seatCost));
	/* End of main loop */

	cout << "\nEnd of Program Reached!\n";

	ofstream costOut;
	costOut.open("seatCost.txt");

	for(int i = 1; i < ROWS; i++)  // Write prices out to files
		costOut << seatCost[i] << endl;

	if(costOut != NULL)
		cout << "\n\nSeatCost.txt successfully written";
	else
		cout << "\n\nSeatCost.txt failed to write";

	ofstream seatsOut;
	seatsOut.open("seatAssign.txt");

	for(int i = 1; i < ROWS; i++) // Write seat assignments to file
	{
		for(int j = 1; j < SEATS; j++)
			seatsOut << seats[i][j];
		seatsOut << endl;
	}

	if(seatsOut != NULL)
		cout << "\n\nseatsOut.txt successfully written\n\n";
	else
		cout << "\n\nseatOut.txt failed to write\n\n";
	
	/* Close out both files*/
	seatsOut.close();
	costOut.close();
	/* End of closeing files */
	system("pause");
	return 0;
}

void fromFile(char seats[][SEATS]){
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

void fromFile(double seatCost[]){
	ifstream costIn;
	costIn.open("seatCost.txt"); 

	int tempPos = 1;
	if (costIn == NULL)
	{
		cout << "ERROR: seatCost.txt failed to open" << endl; 
		system("pause");
		costIn.close();
		setPrice(seatCost);
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

void setPrice(double seatCost[]){
	system("cls");
	int choice;
	cout << "Price set Menu \n" << "choice 0: manually set prices\n" << "choice 1: read from file" << endl;
	cin >> choice;

	if (choice == 0){
		for (int i = 1; i < ROWS; i++){
			do{
				cout << "Enter Price for Row " << i << ": ";
				cin >> seatCost[i];

			} while (!validate(seatCost[i]));
		}
	}
	else if (choice == 1){
		fromFile(seatCost);
	}
	else{
		cout << "invalid input" << endl;
		system("pause");
		setPrice(seatCost);
	}
}

bool validate(double val){

	if (val > 0){
		return true;
	}
	else{
		cout << "Error: invalid input" << endl;
		return false;
	}
	
}
void setSeats(char seats[][SEATS]){
	system("cls");
	int choice;
	cout << "Seat set Menu \n" << "\nchoice 0: set all seats empty " << "\nchoice 1: read from file" << endl;
	cin >> choice;

	if (choice == 0)
	{
		for(int i = 1; i < ROWS; i++)
			for(int j = 1; j < SEATS; j++)
				seats[i][j] = '#';
			
		
	}
	else if (choice==1){
		fromFile(seats);
	}
	else{
		cout << "invalid input" << endl;
		system("pause");
		setSeats(seats);
	}
}



int displayMenu(char seat[][SEATS],double price[]){
		int choice,buyRow,buySeat,buyToSeat;
		cout<<"Menu";
		cout<<"\nChoice 1 : Purchase Seats";
		cout<<"\nChoice 2 : Display seat info";
		cout<<"\nchoice 3 : exit"<<endl;
		cin>>choice;

		switch(choice){
		case 1: 
			cout<<"Which Row??"<<endl;
			cin>>buyRow;
			cout<<"Which Seat??"<<endl;
			cin>>buySeat;
			cout<<"To Which Seat"<<endl;
			cin>>buyToSeat;
			seatCheck(buyRow,buySeat,buyToSeat,seat);
				return 1;
		case 2:
			seatInfo(seat,price);
				return 1;
		case 3: 
			return 0;
		default:
			cout<<"Invalid Selection";
			return 1;
		}	
}

void seatInfo(char seats[][SEATS],double prices[]){
	system("cls");
	double rowTotal=0, seatsTaken,grandTotal = 0,grandSeats = 0;
	for(int i =1;i<ROWS;i++)
	{
		rowTotal = seatsTaken = 0;
		for(int h = 1;h<SEATS;h++)
		{
			if(seats[i][h] == '*')
			{
				seatsTaken++;
				rowTotal += prices[i];
			}
		}
		cout<<"Row " << right << setw(2) << i;
		cout<<" Price $" <<  left << setw(4) << prices[i];
		cout<<" Seats Taken: " << setw(2) << seatsTaken;
		cout<<" Seat Left: " << setw(2) <<(SEATS-seatsTaken-1);
		cout<<" Total $" << right << setw(6) <<rowTotal << endl;
		grandTotal += rowTotal;
		grandSeats += seatsTaken;
	}
		cout<<"\nGrand Total Sales $"<<grandTotal<<endl;
		cout<<"\nSeats Sold " << grandSeats << " of " << ((SEATS-1)*(ROWS-1));
		cout<<" - " << setprecision(3) <<((grandSeats/((SEATS-1)*(ROWS-1)))*100) << "% full" << endl;
		system("pause");
}

void displaySeats( char seats[][SEATS]){
	system("cls");
	cout << setw(7) << ""<< "1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0\n";
	for(int i =1; i<ROWS;i++){
		cout<<"Row " << setw(2)<<i;
		for(int h=1;h<SEATS;h++){
			cout<<" "<<seats[i][h];
		}
		cout<<endl;
	}
}
void seatCheck(int rowChoice,int seatChoice,int toSeatChoice, char seats[][SEATS])
{
	if(validate(rowChoice,seatChoice,toSeatChoice))
	{
		for(int i=0;i<=(toSeatChoice-seatChoice);i++)
		{
			if(seats[rowChoice][seatChoice+i]=='*')
			{
				cout<<"Row "<< rowChoice <<" Seat: "<<seatChoice+i<<" is already taken"<<endl;
			}
			else
			{
				seats[rowChoice][seatChoice+i] = '*';
				cout << "Seat: " << (seatChoice+i) << " bought\n";
			}
		}
	}
	system("pause");
}

bool validate(int rowChoice,int seatChoice,int toSeatChoice){
	bool val = true;
	if(rowChoice>15 || rowChoice <1){
		val = false;
		cout<<"Row doesn't exsist"<<endl;
	}
	if(seatChoice<1 || seatChoice>30 ||toSeatChoice<1 || toSeatChoice>30){
		val = false;
		cout<<"Seat doesn't exsist"<<endl;
	}
	if(toSeatChoice<seatChoice){
		val = false;
		cout<<"Seat selection invalid"<<endl;
	}
	return val;
}