// Assign_07_03 - Passwords.cpp : Defines the entry point for the console application.
/*
	Password Verifier 

	Imagine you are developing a software package that requires users to enter their own 
	passwords. Your software requires that users’ passwords meet the following criteria: 

	o  The password should be at least six characters long. 
	o  The password should contain at least one uppercase and at least one lowercase letter. 
	o  The password should have at least one digit. 

	Write a program that asks for a password and then verifies that it meets the stated criteria. 
	If it doesn’t, the program should display a messagetelling the user why. 
*/

// Tyler Quayle - SIN: 950416426

#include "stdafx.h"
#include <iostream>
#include <string> 
#include <cstring>
using namespace std;

bool validatePassword(string);

int main()
{
	string password;
	
	do{
	cout << "\nPlease enter a Password: ";
	cin >> password;
	system("cls");
	}while(!validatePassword(password));

	cout << "\nPASSWORD ACCEPTED\n";
	system("pause");
	return 0;
}

bool validatePassword(string pWord)
{
	bool lower = false, upper = false, size = false, digit = false;
	
	for(int i = 0; i < pWord.length(); i++)
	{
		if(islower(pWord[i]))
			lower = true;
		if(isupper(pWord[i]))
			upper = true;
		if(isdigit(pWord[i]))
			digit = true;
		if(pWord.length() > 5)
			size = true;
	}
	
	if(!size)
		cout << "\n* Password must be at least 6 Chars \n";

	if(!digit)
		cout << "\n* Password must have a number \n";
	
	if(!upper)
		cout << "\n* Password must contain Upper case \n";
	
	if(!lower)
		cout << "\n* Password must contain Lower case \n";

	if(size && digit && upper && lower)
		return true;
	return false;
}