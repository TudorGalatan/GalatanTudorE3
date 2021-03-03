/*
	This is the implementation for the Mathematics module.
*/

#include "Mathematics.h"


int Mathematics::add (int firstNumber, int secondNumber)
{
	return firstNumber + secondNumber;
}


int Mathematics::add (int firstNumber, int secondNumber, int thirdNumber)
{
	return firstNumber + secondNumber + thirdNumber;
}


double Mathematics::add (double firstNumber, double secondNumber)
{
	return firstNumber + secondNumber;
}


double Mathematics::add (double firstNumber, double secondNumber, double thirdNumber)
{
	return firstNumber + secondNumber + thirdNumber;
}


int Mathematics::add (unsigned int numberOfNumbers, ...)
{
	va_list numbers;

	va_start(numbers, numberOfNumbers);

	int sum = 0;
	for (unsigned int index = 0; index < numberOfNumbers; index++)
		sum += va_arg(numbers, int);

	va_end(numbers);

	return sum;
}


char* Mathematics::add (const char* firstString, const char* secondString)
{
	if (firstString == nullptr or secondString == nullptr)
		return nullptr;

	char* finalString = (char*)firstString;
	strcat(finalString, secondString);

	return finalString;
}


int Mathematics::multiply (int firstNumber, int secondNumber)
{
	return firstNumber * secondNumber;
}


int Mathematics::multiply (int firstNumber, int secondNumber, int thirdNumber)
{
	return firstNumber * secondNumber * thirdNumber;
}


double Mathematics::multiply (double firstNumber, double secondNumber)
{
	return firstNumber * secondNumber;
}


double Mathematics::multiply (double firstNumber, double secondNumber, double thirdNumber)
{
	return firstNumber * secondNumber * thirdNumber;
}