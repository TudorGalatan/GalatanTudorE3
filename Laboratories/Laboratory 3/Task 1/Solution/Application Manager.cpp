/*
	This is the starting point of the application.
*/

#include "Mathematics.h"
#include <cassert>
#include <cstring>
#include <iostream>


void runExample ();


int main ()
{
	// Run the example on how to use the Mathematics module.
	runExample();

	return 0;
}


void runExample ()
{
	// Create the necessary object.
	Mathematics mathematics;

	// Create some example numbers.
	int firstInteger = -567, secondInteger = 37, thirdInteger = 456234299, fourthInteger = 1, fifthInteger = -5451;
	double firstDouble = 0.345, secondDouble = 535.67, thirdDouble = 67.9999;
	const char* firstString = "Ana has";
	const char* secondString = " apples.";

	// Test the first form of the function "add".
	int firstResult = mathematics.add(firstInteger, secondInteger);
	int firstCorrectResult = -530;
	assert(firstResult == firstCorrectResult);

	// Test the second form of the function "add".
	int secondResult = mathematics.add(firstInteger, secondInteger, thirdInteger);
	int secondCorrectResult = 456233769;
	assert(secondResult == secondCorrectResult);

	// Test the third form of the function "add".
	double thirdResult = mathematics.add(firstDouble, secondDouble);
	double thirdCorrectResult = 536.015;
	assert(thirdResult == thirdCorrectResult);

	// Test the fourth form of the function "add".
	double fourthResult = mathematics.add(firstDouble, secondDouble, thirdDouble);
	double fourthCorrectResult = 604.0149;
	assert(fourthResult == fourthCorrectResult);

	// Test the fifth form of the function "add".
	int fifthResult = mathematics.add(5, firstInteger, secondInteger, thirdInteger, fourthInteger, fifthInteger);
	int fifthCorrectResult = 456228319;
	assert(fifthResult == fifthCorrectResult);

	/*
	// Test the sixth form of the function "add".
	char* sixthResult = mathematics.add(firstString, secondString);
	const char* sixthCorrectResult = "Ana has apples.";
	short int compare = strcmp(sixthResult, sixthCorrectResult);
	assert(compare == 0);
	*/

	// Test the first form of the function "multiply".
	int seventhResult = mathematics.multiply(firstInteger, secondInteger);
	int seventhCorrectResult = -20979;
	assert(seventhResult == seventhCorrectResult);

	// Test the second form of the function "multiply".
	int eighthResult = mathematics.multiply(firstInteger, secondInteger, fifthInteger);
	int eighthCorrectResult = 114356529;
	assert(eighthResult == eighthCorrectResult);

	// Test the third form of the function "multiply".
	double ninthResult = mathematics.multiply(firstDouble, thirdDouble);
	double ninthCorrectResult = 23.4599655;
	if (ninthResult != ninthCorrectResult)
		std::cout << "The result is not correct.\n";

	// Test the fourth form of the function "multiply".
	double tenthResult = mathematics.multiply(firstDouble, secondDouble, thirdDouble);
	double tenthCorrectResult = 12566.7997194;
	if (tenthResult != tenthCorrectResult)
		std::cout << "The result is not correct.\n";
}