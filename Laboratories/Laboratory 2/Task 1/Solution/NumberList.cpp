/*
	This is the implementation for the NumberList data structure.
*/

#include "NumberList.h"


void NumberList::initialize ()
{
	this->numberOfNumbers = 0;
}


bool NumberList::addNumber (int newNumber)
{
	// There is enough space in the list of numbers to add a new
	// number, so we add the given number to the list.
	if (this->numberOfNumbers + 1 <= 10)
	{
		this->numbers[this->numberOfNumbers] = newNumber;
		this->numberOfNumbers++;

		return true;
	}
	
	// The list of numbers is at its full capacity, so we can't
	// insert the new number into it.
	return false;
}


bool NumberList::insertNumberOnPosition (unsigned short int position, int newNumber)
{
	// There is enough space in the list of numbers to add a new
	// number, so we add the given number to the list.
	if (this->numberOfNumbers + 1 <= 10)
	{
		for (short int index = this->numberOfNumbers; index >= position + 1; index--)
			this->numbers[index] = this->numbers[index - 1];

		this->numbers[position] = newNumber;

		this->numberOfNumbers++;

		return true;
	}

	// The list of numbers is at its full capacity, so we can't
	// insert the new number into it.
	return false;
}


void NumberList::removeNumber (int number)
{
	for (unsigned short int index = 0; index < this->numberOfNumbers; )
		if (this->numbers[index] == number)
		{
			for (unsigned short int newIndex = index; newIndex < this->numberOfNumbers - 1; newIndex++)
				this->numbers[newIndex] = this->numbers[newIndex + 1];
			this->numberOfNumbers--;
		}
		else
			index++;
}


void NumberList::sort ()
{
	bool isSorted = false;
	unsigned short int limit = this->numberOfNumbers - 1;

	do
	{
		isSorted = true;

		for (unsigned short int index = 0; index < limit; index++)
			if (this->numbers[index] > this->numbers[index + 1])
			{
				isSorted = false;

				int container = this->numbers[index];
				this->numbers[index] = this->numbers[index + 1];
				this->numbers[index + 1] = container;
			}

		limit--;
	}
	while (not isSorted);
}


void NumberList::printList ()
{
	// The list of numbers is empty.
	if (this->numberOfNumbers == 0)
		std::cout << "\n\tThe list of numbers is empty.\n";

	// The list of numbers consists of only one number.
	else if (this->numberOfNumbers == 1)
	{
		std::cout << "\n\tThe list of numbers consists of the following number:\n\t";
		std::cout << this->numbers[0] << '\n';
	}

	// The list of numbers consists of more than one number.
	else
	{
		std::cout << "\n\tThe list of numbers consists of the following ";
		std::cout << this->numberOfNumbers << " numbers:\n\t";

		for (unsigned short int index = 0; index < this->numberOfNumbers; index++)
			std::cout << this->numbers[index] << ' ';

		std::cout << '\n';
	}
}