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

	char* finalString = new char[1000];
	finalString[0] = '\0';
	short int finalPosition = -1;

	short int firstPosition = strlen(firstString) - 1;
	short int secondPosition = strlen(secondString) - 1;
	bool carry = false;

	while (firstPosition >= 0 or secondPosition >= 0)
	{
		unsigned short int currentSum = 0;

		if (firstPosition >= 0)
			currentSum += (unsigned short int)firstString[firstPosition] - '0';
		
		if (secondPosition >= 0)
			currentSum += (unsigned short int)secondString[secondPosition] - '0';

		if (carry)
			currentSum++;
		
		char currentDigit;

		if (currentSum <= 9)
		{
			currentDigit = currentSum - '0';
			carry = false;
		}
		else
		{
			currentDigit = currentSum / 10 - '0';
			carry = true;
		}

		finalPosition++;
		finalString[finalPosition + 1] = '\0';

		for (unsigned short int index = 1; index <= finalPosition; index++)
			finalString[index] = finalString[index - 1];

		finalString[0] = currentDigit;

		firstPosition--;
		secondPosition--;
	}

	if (carry)
	{
		finalPosition++;
		finalString[finalPosition + 1] = '\0';

		for (unsigned short int index = 1; index <= finalPosition; index++)
			finalString[index] = finalString[index - 1];

		finalString[0] = '1';
	}

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