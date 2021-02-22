/*
	This is the starting point of the application.
*/

#include "NumberList.h"


/*
	Runs a basic example for the defined data structure.
	Input:
		- none
	Output:
		- the example is being run
*/
void runExample ();


int main ()
{
	// Run the example for the defined data structure.
	runExample();

	return 0;
}


void runExample ()
{
	// Declare the list of numbers.
	NumberList numberList;

	// Initialize the list of numbers.
	numberList.initialize();

	// Print the initial list of numbers.
	numberList.printList();

	// Add some numbers.
	numberList.addNumber(-67);
	numberList.addNumber(-123);
	numberList.addNumber(-123);
	numberList.addNumber(45);
	numberList.addNumber(0);

	// Print the list of numbers.
	numberList.printList();

	// Sort the list of numbers.
	numberList.sort();

	// Print the sorted list of numbers.
	numberList.printList();
}