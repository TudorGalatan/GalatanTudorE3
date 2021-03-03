/*
	This is the implementation for the Mathematics module.
*/

#include "Mathematics.h"


int Mathematics::addNumbers (int firstNumber, int secondNumber)
{
	return firstNumber + secondNumber;
}


int Mathematics::addNumbers (int firstNumber, int secondNumber, int thirdNumber)
{
	return firstNumber + secondNumber + thirdNumber;
}


double Mathematics::addNumbers (double firstNumber, double secondNumber)
{
	return firstNumber + secondNumber;
}


double Mathematics::addNumbers (double firstNumber, double secondNumber, double thirdNumber)
{
	return firstNumber + secondNumber + thirdNumber;
}


int Mathematics::addNumbers (int count, ...)
{
	return 0;
}


char* Mathematics::addNumbers (const char*, const char*)
{
	return 0;
}


int Mathematics::multiplyNumbers (int firstNumber, int secondNumber)
{
	return firstNumber * secondNumber;
}


int Mathematics::multiplyNumbers (int firstNumber, int secondNumber, int thirdNumber)
{
	return firstNumber * secondNumber * thirdNumber;
}


double Mathematics::multiplyNumbers (double firstNumber, double secondNumber)
{
	return firstNumber * secondNumber;
}


double Mathematics::multiplyNumbers (double firstNumber, double secondNumber, double thirdNumber)
{
	return firstNumber * secondNumber * thirdNumber;
}