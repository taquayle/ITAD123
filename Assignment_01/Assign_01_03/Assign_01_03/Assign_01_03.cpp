// Assign_01_03.cpp : Defines the entry point for the console application.
// This program will output the circumference and area
// of the circle with a given radius.


//  Tyler Quayle - SIN: 950416426

#include "stdafx.h"
#include <iostream>
using namespace std;

const  double PI = 3.14;
const  double RADIUS = 5.4;


int main()

{
	float area;			  	        // definition of area of circle
	
	float  circumference;				// definition of circumference
	
    circumference = 2 * PI * RADIUS;	// computes circumference
	
	area = PI * RADIUS * RADIUS;          // computes area
	
	// Fill in the code for the cout statement that will output (with description) 
	// the circumference
	cout << "HERE we go!" << endl;
	cout << "The circumference of the circle is: " << circumference << " units" << endl;
	// Fill in the code for the cout statement that will output (with description) 
	// the area of the circle
	cout << "The area of the circle is: " << area << " units" << endl;
	system("pause");
	return 0;
}
