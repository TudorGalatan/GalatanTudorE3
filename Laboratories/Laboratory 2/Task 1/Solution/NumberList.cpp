/*
	This is the implementation for the Number List data structure.
*/

#include "NumberList.h"


void NumberList::initialize ()
{
	this->numberOfNumbers = 0;

	for (unsigned short int index = 0; index < 10; index++)
		this->numbers[index] = 0;
}


bool NumberList::addNumber (int newNumber)
{
	if (this->numberOfNumbers + 1 <= 10)
	{
		this->numbers[this->numberOfNumbers] = newNumber;
		this->numberOfNumbers++;

		return true;
	}
	
	return false;
}


void NumberList::sort ()
{
	bool isSorted = false;
	unsigned short int numberOfNumbers = this->numberOfNumbers - 1;

	do
	{
		isSorted = true;

		for (unsigned short int index = 0; index < numberOfNumbers; index++)
			if (this->numbers[index] > this->numbers[index + 1])
			{
				isSorted = false;

				int container = this->numbers[index];
				this->numbers[index] = this->numbers[index + 1];
				this->numbers[index + 1] = container;
			}

		numberOfNumbers--;
	}
	while (not isSorted);
}


void NumberList::printList ()
{
	// The list of numbers is empty.
	if (this->numberOfNumbers == 0)
		std::cout << "\n\tThe list of numbers is empty.\n";

	// The list of numbers is not empty.
	else
	{
		std::cout << "\n\tThe list of numbers consists of the following ";
		std::cout << this->numberOfNumbers << " numbers:\n\t";

		for (unsigned short int index = 0; index < this->numberOfNumbers; index++)
			std::cout << this->numbers[index] << ' ';

		std::cout << '\n';
	}
}