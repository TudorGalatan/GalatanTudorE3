/*
	This is the starting point of the application.
*/

#include "Sort.h"


void runExample ();


int main ()
{
	runExample();

	return 0;
}


void runExample ()
{
	Sort firstSort;
	firstSort.print();

	Sort secondSort(10, -100, 100);
	secondSort.print();
	secondSort.bubbleSort();
	secondSort.print();

	int numbers[] = {7, 56, 89, 0, 0, 0, 10, -5, -6, -5};
	Sort thirdSort(10, numbers);
	thirdSort.print();
	thirdSort.insertSort();
	thirdSort.print();

	Sort fourthSort("-5,7,9,10,0,0,6,9");
	fourthSort.print();
	fourthSort.quicksort();
	fourthSort.print();

	fourthSort.mergeLists(secondSort);
	fourthSort.print();
}