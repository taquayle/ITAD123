// Assign_03_02_Geometry Calculator.cpp : Defines the entry point for the console application.

/*
	Write the program that displays the following menu:
	Geometry Calculator: 
	1. Calculate the Area of a Circle 
	2. Calculate the Area of a Rectangle 
	3. Calculate the Area of a Triangle 
	4. Quit 
*/

// Tyler Quayle - SIN: 950416426

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

const double PI = 3.14159;

int main()
{
	double base, height, length, width, radius;
	int choice;

	// Used to output ERROR Message in input validation
	string ERROR = "\nERROR: Input was less than or equal to 0, or a non-number\n\n";

	cout <<  "Geometry Calculator: " << endl;
	cout <<  "1. Calculate the Area of a Circle: " << endl;
	cout <<  "2. Calculate the Area of a Rectangle: " << endl;
	cout <<  "3. Calculate the Area of a Triangle " << endl;
	cout <<  "4. Quit " << endl;

	cin >> choice;

	switch (choice)
	{
	
	case 1: // START AREA OF CIRCLE
		cout << "Area of Circle selected:\nPlease enter RADIUS of circle: ";
		cin >> radius;
		
		if (radius <= 0) //Check input to see if it passes as a valid input
		{ cout << ERROR; break;}

		// Output answer within cout
		cout << endl << "Area of circle is: " << (PI * pow(radius, 2)) << endl << endl;
		break; // END AREA OF CIRCLE
	
	case 2: // START AREA OF RECTANGLE
		cout << "Area of a Rectangle selected:\nPlease enter LENGTH of rectangle: ";
		cin >> length;
		
		if (length <= 0) //Check input to see if it passes as a valid input
		{ cout << ERROR; break;}

		cout << "Please enter WIDTH of rectangle: ";
		cin >> width;

		if (width <= 0) //Check input to see if it passes as a valid input
		{ cout << ERROR; break;}

		// Output answer within cout
		cout << endl << "Area of rectangle: " << (length * width) << endl << endl; 
		break; // END AREA OF RECTANGLE
	
	case 3: // START AREA OF TRIANGLE
		cout << "Area of a Triangle selected:\nPlease enter BASE of Triangle: ";
		cin >> base;
		
		if (base <= 0) //Check input to see if it passes as a valid input
		{ cout << ERROR; break;}

		cout << "Please enter HEIGHT of Triangle: ";
		cin >> height;

		if (height <= 0) //Check input to see if it passes as a valid input
		{ cout << ERROR; break;}

		// Output answer within cout
		cout << endl << "Area of Triangle: " << (base * height *.5) << endl << endl; 
		break; // END AREA OF TRIANGLE
	
	case 4:
		break;

	default:
		cout << "ERROR: Your selection was not on the above menu" << endl;
		break;
	}

	system("pause");
	return 0;
}
