// Assign_06_01 - Pointers.cpp : Defines the entry point for the console application.
//


// This program demonstrates the use of pointer variables
// It finds the area of a rectangle given length and width
// It prints the length and width in ascending order 

// Tyler Quayle - SIN: 950416426

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{

   int length;		// holds length
   int width;		// holds width
   int area;		// holds area
 
   int *lengthPtr;	// int pointer which will be set to point to length
   int *widthPtr;   // int pointer which will be set to point to width

   cout << "Please input the length of the rectangle" << endl;
   cin >> length;
   cout << "Please input the width of the rectangle" << endl;
   cin >> width;

   // Fill in code to make lengthPtr point to length (hold its address)
   lengthPtr = &length;
   // Fill in code to make widthPtr point to width (hold its address) 
   widthPtr = &width;

    // Fill in code to find the area by using only the pointer variables
   area = *lengthPtr * *widthPtr;
   cout << "The area is " << area << endl;


   // Fill in the condition of length > width by using only the pointer variables)
   if (*lengthPtr > *widthPtr)
    	cout << "The length is greater than the width" << endl;

   // Fill in the condition of width > length by using only the pointer variables)
   else if (*widthPtr > *lengthPtr)
    	cout << "The width is greater than the length" << endl;

   else 
    	cout << "The width and length are the same" << endl;

   system("Pause");
   return 0;
}