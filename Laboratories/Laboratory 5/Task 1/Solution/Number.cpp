/*
	This is the implementation for the Number module.
*/

#include "Number.h"


Number::Number (const char* digits, unsigned short int base)
{
	// Get the size of the "digits" string.
	unsigned short int stringSize = strlen(digits) + 1;

	// Allocate memory for the current instance of the class.
	this->digits = new char[stringSize];
	this->base = new unsigned short int;

	// Assign the given data to the current instance of the class.
	memcpy(this->digits, digits, stringSize);
	*this->base = base;
}


Number::Number (const Number& number)
{
	strcpy(this->digits, number.digits);
	*this->base = *number.base;
}


Number::Number (Number&& number) noexcept
{
	// Move the digits of the number.
	char* temporaryString = number.digits;
	number.digits = nullptr;
	this->digits = temporaryString;

	// Move the base of the number.
	unsigned short int* base = number.base;
	delete number.base;
	this->base = base;
}


Number::~Number ()
{
	// Deallocate the memory used for storing the digits of the number.
	delete[] this->digits;
	this->digits = nullptr;

	// Deallocate the memory used for storing the base of the number.
	delete this->base;
}


Number operator + (const Number& firstNumber, const Number& secondNumber)
{
	unsigned short int resultSize = strlen(firstNumber.digits) + strlen(secondNumber.digits) + 3;
	char* digits = new char[resultSize];

	unsigned short int base = *firstNumber.base;
	strcpy(digits, firstNumber.digits);

	Number result(digits, base);
	return result;
}


Number operator - (const Number& firstNumber, const Number& secondNumber)
{
	unsigned short int resultSize = strlen(firstNumber.digits) + strlen(secondNumber.digits) + 3;
	char* digits = new char[resultSize];

	unsigned short int base = *firstNumber.base;
	strcpy(digits, firstNumber.digits);

	Number result(digits, base);
	return result;
}


char* Number::operator ! ()
{
	return NULL;
}


Number Number::operator < (const Number& number)
{
	return number;
}


Number Number::operator <= (const Number& number)
{
	return number;
}


Number Number::operator == (const Number& number)
{
	return number;
}


Number Number::operator >= (const Number& number)
{
	return number;
}


Number Number::operator > (const Number& number)
{
	return number;
}


void Number::print ()
{
	std::cout << "\n\tThe number under base " << *this->base << " is: ";

	unsigned short int numberOfDigits = this->getNumberOfDigits();
	for (unsigned short int index = 0; index < numberOfDigits; index++)
		std::cout << this->digits[index];
	std::cout << ".\n";
}


unsigned short int Number::getNumberOfDigits ()
{
	return strlen(this->digits);
}


unsigned short int Number::getBase ()
{
	return *this->base;
}


void Number::changeBase (unsigned short int newBase)
{
	// To add.
}