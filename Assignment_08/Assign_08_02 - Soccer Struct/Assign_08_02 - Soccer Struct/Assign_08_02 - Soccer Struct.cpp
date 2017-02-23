// Assign_08_02 - Soccer Struct.cpp : Defines the entry point for the console application.
/*
	Soccer Scores  

	Write a program that stores the following data about a soccer player in a structure:  

		Player’s Name 
		Player’s Number  
		Points Scored by Player  

	The program should keep an array of 12 of these structures. Each element is for a different 
	player on a team. When the program runs it should ask the user to enter the data for each 
	player. It should then show the table that lists each player’s number, name, and points 
	scored.  The program should also calculate and display the total points earned by the team. 
	The number and name of the player that has earned the most points should also be displayed.   

	Input validation: Do not accept negative values for player’s numbers or points scored

*/

// Tyler Quayle - SIN: 950416426

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

bool validate(int);

struct player
{
	string name;
	int number;
	int score;
};

int main()
{
	const int teamSize = 6;
	player teamMembers[teamSize];
	int mvp = 0, teamScore = 0;
	
	for(int i = 0; i < teamSize; i++)
	{
		
		cout << "\nPlease enter name for player " << i+1 << ": ";
		getline(cin, teamMembers[i].name, '\n');
		
		do{
			cout << teamMembers[i].name << "'s number: ";
			cin >> teamMembers[i].number;
		}while(validate(teamMembers[i].number));
		
		do{
			cout << teamMembers[i].name << "'s goals scored: ";
			cin >> teamMembers[i].score;
		}while(validate(teamMembers[i].score));

		cin.ignore();
	}
	
	for(int i = 0; i < teamSize; i++)
	{
		cout  << "#" << setw(4) << left <<  teamMembers[i].number  
			<< setw(30) << left << teamMembers[i].name << " || Goals Scored: " 
			<< teamMembers[i].score << endl;
		
		if(teamMembers[i].score > teamMembers[i+1].score)
			mvp = i;
		
		teamScore += teamMembers[i].score;
	}

	cout << "\n\nMVP - " << teamMembers[mvp].name << " #" << teamMembers[mvp].number << " With " << teamMembers[mvp].score << " goals scored";
	cout << "\n\n Team total goals: " << teamScore << endl;
	system("Pause");
	return 0;
}

bool validate(int check)
{
	if(check >= 0)
		return false;

	cout << "ERROR: Number must be positive\n";
	return true;
}