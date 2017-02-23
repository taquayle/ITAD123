// Assign_07_04 - Sentence Capitalizer.cpp : Defines the entry point for the console application.
/*
Sentence Capitalizer   
a) Write a function that accepts a pointer to a C-string as an argument and capitalizes the first 
character of each sentence in the string. For instance, if the string argument is

“hello.  my name is Joe. what is your name?” 

the function should manipulate the string so it contains 

“Hello.  My name is Joe. What is your name?”  

	o There can be more than one whitespace between the period and the first word of the new 
	sentence. 
	o Assume that period, question mark, and exclamation mark are the only signals of the sentence 
	ending.    

b) Write an overloaded version of this function that accepts a string class object as its argument.  

Demonstrate the functions in a program that asks the user to input two strings and then passes them 
to the functions. The modified strings should be displayed on the screen

*/

// Tyler Quayle - SIN: 950416426

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

void sentCapital(char*, const int);
void sentCapital(string&);

int main()
{
	const int cSize = 100;
	string stringSent;
	char cStringSent[cSize];
	char *cStringPtr = cStringSent;

	cout << "C-String: Enter a sentence:\n";
	cin.getline(cStringPtr, cSize);

	cout << "String: Enter a sentence:\n";
	getline(cin, stringSent);

	sentCapital(cStringPtr, cSize);
	cout << "\n\nC-String after Capitalization:\n" << cStringPtr << endl;

	sentCapital(stringSent);
	cout << "\n\nString after Capitalization:\n" << stringSent << endl;

	system("pause");
	return 0;
}

void sentCapital(char *cString, const int size)
{
	bool period = false;
	for(int i = 0; i < size; i++)
	{
		if(*(cString+i) == '.')
			period = true;
		if(period & *(cString+i+1) != 32)
		{
			if(*(cString+i+1) > 96 && *(cString+i+1) < 123)
				*(cString+i+1) -= 32;
			period = false;
		}
	}

}

void sentCapital(string &sent)
{
	bool period = false;
	for(int i = 0; i < sent.length(); i++)
	{
		if(sent[i] == '.')
			period = true;
		if(period & sent[i+1] != 32)
		{
			if(sent[i+1] > 96 && sent[i+1] < 123)
				sent[i+1] -= 32;
			period = false;
		}
	}

}