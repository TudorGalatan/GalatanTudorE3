/*
	This is the starting point of the application.
*/

#include "NumberList.h"


/*
	Runs a basic example of using the NumberList data structure.
	Input:
		- none
	Output:
		- the example is being run
*/
void runExample ();


int main ()
{
	// Run the basic example of using the NumberList data structure.
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

	// Add some numbers to the list of numbers.
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

	// Insert a new number on a given position in the list of numbers.
	numberList.insertNumberOnPosition(0, 5);

	// Print the updated list of numbers.
	numberList.printList();

	// Remove a number from the list of numbers.
	numberList.removeNumber(-123);

	// Print the updated list of numbers.
	numberList.printList();
}