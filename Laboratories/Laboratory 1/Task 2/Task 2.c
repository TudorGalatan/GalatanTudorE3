#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>


void calculateSum ();
long long int stringToNumber (char string[]);


int main ()
{
	// Read the input data, calculate the requested sum
	// and print it on the screen.
	calculateSum();

	return 0;
}


/*
	Reads the input data, calculates the requested sum and
	prints it on the screen.
	Input:
		- none
	Output:
		- the requested sum is printed on the screen
*/
void calculateSum ()
{
	// Open the input file.
	FILE* inputFile = fopen("in.txt", "r");

	long long int sum = 0;
	char string[10000];

	// For every line, convert the string into a number and
	// build the sum.
	while (fgets(string, 10000, inputFile))
	{
		// The last character on every line, except the last one,
		// is a line break, which cannot be part of the number.
		if (string[strlen(string) - 1] == '\n')
			string[strlen(string) - 1] = '\0';

		// Convert the string into a number.
		long long int number = stringToNumber(string);

		// Build the requested sum.
		sum += number;
	}

	// Print the requested sum on the screen.
	printf("%lld\n", sum);
}


/*
	Converts a string into a number.
	Input:
		- "string": the given string
	Output:
		- the number corresponding to the string's content
*/
long long int stringToNumber (char string[])
{
	// If the first character of the string is '-', then we have a negative number.
	unsigned short int isNegative = 0;
	if (string[0] == '-')
		isNegative = 1;

	// Take every character, convert it to a digit and build the number digit by digit.
	long long int number = 0;
	for (unsigned int index = isNegative; index < strlen(string); index++)
	{
		unsigned short int digit = string[index] - '0';
		number = number * 10 + digit;
	}

	if (isNegative)
		number = -number;

	return number;
}