// EC_02_03 - String Analyzer.cpp : Defines the entry point for the console application.

// Tyler Quayle - SIN: 950416426

#include "stdafx.h"
#include <iostream>
using namespace std;

void string_analyzer(char *, int&, double&);

int main()
{
	int word_count = 1;
	double avg_word_len = 0;
	char str[100];

	cout << "Please Enter a sentence (up to 100)\n";
	cin.getline(str, 100);

	string_analyzer(str, word_count, avg_word_len);

	cout << "Word Count: " <<word_count;
	cout << "\nAverage char per word: " << avg_word_len;
	cout << endl;
	system("pause");
}

void string_analyzer(char* str, int& count, double& avg)
{
	double charCount = 0;
	for(int i = 0; i < 100; i++)
	{
		if( *(str+i+1) == 32 && *(str+i) != 32)
			count++;
		if((*(str+i) >= 65 && *(str+i) <= 90) ||(*(str+i) >= 97  && *(str+i) <= 122))
			charCount++;
	}
	avg = charCount / count;
}