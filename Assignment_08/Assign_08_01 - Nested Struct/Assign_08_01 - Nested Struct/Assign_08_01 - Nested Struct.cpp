// Assign_08_01 - Nested Struct.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;


// This program uses a structure to hold data about a rectangle 
// It calculates the area and perimeter of a box 

// Tyler Quayle - SIN 950416426

// Fill in code to define a structure named Dimensions that
// contains 2 float members, length and width

// Fill in code to define a structure named rectangle that contains
// 3 members: area, perimeter, and sizes.  area and perimeter should be
// floats, whereas sizes should be a Dimensions structure variable
struct dimensions
{
	float length;
	float width;
};
struct rectangle
{
	float area;
	float perimeter;
	dimensions sizes;
};

int main()
{
   // Fill in code to declare a rectangle structure variable named box.
	rectangle box;
   cout << "Enter the length of a rectangle: ";
   cin >> box.sizes.length;
   // Fill in code to read in the length to the appropriate location

   cout << "Enter the width of a rectangle: ";
   cin >> box.sizes.width;
   // Fill in code to read in the width to the appropriate location 

   cout << endl << endl;

   // Fill in code to compute the area and store it in the appropriate
   // location
   box.area = box.sizes.length * box.sizes.width;
   // Fill in code to compute the perimeter and store it in the 
   // appropriate location
   box.perimeter = (box.sizes.length * 2) + (box.sizes.width*2);

   cout << fixed << showpoint << setprecision(2);
   cout << "The area of the rectangle is " << box.area << endl; 
   cout << "The perimeter of the recangle is " <<  box.perimeter
        << endl;
   system("pause");
   return 0;
}


