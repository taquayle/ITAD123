// This program will read in the qunatity of a particular item and its price.
// It will then print out the total price.
// The input will come from a data file and the output will go to
// an output file.

// PLACE YOUR NAME HERE

#include <fstream>
#include <iomanip>
using namespace std;


int main()
{
   	ifstream dataIn;		// defines an input stream for a data file
	ofstream dataOut;		// defines an output stream for an output file
	int quantity;			// contains the amount of items purchased
	float itemPrice;		// contains the price of each item
	float  totalBill;		// contains the total bill.  The price of all items

// These statements open two files.

	dataIn.open("transaction.txt");  
	dataOut.open("bill.txt");
	
	if (dataIn.open("transaction.txt") == null)
	{
		cout << "Test";
		system("pause");
		return 0;
	}
// Before reading from the file and writing to another one make sure that the files opened successfully. 
// Use if/else statement for that check and DO NOT do any reading / writing if the file failed to open! 
// Output a warning message if the files were not opened.

	// Fill in the appropriate code in the blank below
	_________<< setprecision(2) << fixed << showpoint;  // formatted output


	// Fill in the input statement that brings in the 
	// quantity and price of the item.

	// Fill in the assignment statement that determines the totalbill.

	// Fill in the output statement that prints the total bill, with a label,
	// to an output.

	// Don't forget to close files!!


	return 0;
}