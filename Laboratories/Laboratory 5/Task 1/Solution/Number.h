/*
	This is the interface for the Number module.
*/

#pragma once

#include <cstring>
#include <iostream>


class Number
{
	private:

		char* digits;
		unsigned short int* base;

	public:

		/*
			This is the main constructor of the class. It initializes the data with
			the given values.
			Input:
				- "digits": the digits of the number
				- "base": the base of the number
			Output:
				- the data is being initialized with the given values
		*/
		Number (const char* digits, unsigned short int base);

		/*
			This is the copy constructor of the class. It initializes the data with
			the values of the other class instance.
			Input:
				- "number": the other class instance
			Output:
				- the data is being initialized with the values of the other class
				  instance
		*/
		Number (const Number& number);

		/*
			This is the move constructor of the class.
			Input:
				- "number": the other class instance
			Output:
				- the data is being initialized
		*/
		Number (Number&& number) noexcept;

		/*
			This is the destructor of the class. It destroys the current instance of
			the class.
			Input:
				- none
			Output:
				- the current instance of the class is being destroyed
		*/
		~Number ();

		char* operator + (const Number& number);
		char* operator - (const Number& number);
		char* operator ! ();
		Number operator < (const Number& number);
		Number operator <= (const Number& number);
		Number operator == (const Number& number);
		Number operator >= (const Number& number);
		Number operator > (const Number& number);

		/*
			Prints the number on the screen.
			Input:
				- none
			Output:
				- the number is being printed on the screen
		*/
		void print ();

		/*
			Gets the number of digits of the number.
			Input:
				- none
			Output:
				- the number of digits of the number
		*/
		unsigned short int getNumberOfDigits ();

		/*
			Gets the base of the number.
			Input:
				- none
			Output:
				- the base of the number
		*/
		unsigned short int getBase ();

		/*
			Changes the base of the number.
			Input:
				- "newBase": the new base of the number
			Output:
				- the number is converted to the new base
		*/
		void changeBase (unsigned short int newBase);
};