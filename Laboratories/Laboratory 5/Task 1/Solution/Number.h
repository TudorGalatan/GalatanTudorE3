/*
	This is the interface for the Number module.
*/

#pragma once

#include <string>


class Number
{
	private:

		std::string digits;
		unsigned short int base;

	public:

		Number(const char* value, unsigned short int base);
		~Number();
		void changeBase(unsigned short int newBase);
		void print();
		int getNumberOfDigits();
		int getBase();
};