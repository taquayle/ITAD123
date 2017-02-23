// Chapter 6, Programming Challenge 2
//Complete the program.
//The program will ask the user to enter the width and the length of a rectangle, and then
//display the rectangle's area. 
//The program calls the following functions, which have not been written:
//getLength -	This function should ask the user to enetr the rectangle's length, 
//				and then return that value as a double
//getWidth -	This function should ask the user to enetr the rectangle's width, 
//				and then return that value as a double
//getArea -		This function should accept the rectangle's length and width as arguments, and return 
//				the rectangle's area.	area = length * width 
//displayData -	This function should accept the rectangle's length and width, and area as arguments 
//				and display them in appropriate message on the screen.



#include <iostream>
using namespace std;

// Write the prototypes for the getLength,
// getWidth, getArea, and displayData
// functions here.

int main()
{
   double length,    // The rectangle's length
          width,     // The rectangle's width
          area;      // The rectangle's area
          
   // Get the rectangle's length.
   length = getLength();
   
   // Get the rectangle's width.
   width = getWidth();
   
   // Get the rectangle's area.
   area = getArea(length, width);
   
   // Display the rectangle's data.
   displayData(length, width, area);
          
   return 0;
}

double getLength()
{
	double length;
	cout << "Please enter a length for your Rectangle: ";
	cin >> length;

	return length;
}


//***************************************************
// You must write the getLength, getWidth, getArea, *
// and displayData functions.                       *
//***************************************************