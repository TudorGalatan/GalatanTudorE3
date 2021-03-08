/*
	This is the implementation for the Sort module.
*/

#include "Sort.h"


Sort::Sort ()
{
	this->numberOfElements = 0;
}


void Sort::print ()
{
	std::cout << "\n\tThe list of numbers ";

	// The list of numbers is empty.
	if (this->numberOfElements == 0)
		std::cout << "is empty.";
	
	// The list of numbers is not empty.
	else
	{
		std::cout << "consists of the following ";

		// The list of elements consists of more than one element.
		if (this->numberOfElements > 1)
			std::cout << this->numberOfElements << ' ';

		std::cout << "element";

		// The list of elements consists of more than one element.
		if (this->numberOfElements > 1)
			std::cout << "s";

		std::cout << ":\n";
	}

	// Print the list of numbers.
	for (unsigned short int index = 0; index < this->numberOfElements; index++)
		std::cout << this->elements[index] << ' ';

	std::cout << '\n';
}


unsigned short int Sort::getNumberOfElements ()
{
	return this->numberOfElements;
}


unsigned short int Sort::getElementFromIndex (unsigned short int index)
{
	return this->elements[index];
}


void Sort::bubbleSort (bool ascendingOrder)
{
	short int limit = this->numberOfElements - 1;
	bool isSorted = false;

	do
	{
		isSorted = true;

		for (unsigned short int index = 0; index < limit; index++)
			if ((ascendingOrder and this->elements[index] > this->elements[index + 1]) or
				(not ascendingOrder and this->elements[index] < this->elements[index + 1]))
			{
				int container = this->elements[index];
				this->elements[index] = this->elements[index + 1];
				this->elements[index + 1] = container;
				isSorted = false;
			}

		limit--;
	}
	while (not isSorted);
}


void Sort::insertSort (bool ascendingOrder)
{
	for (unsigned short int index = 1; index < this->numberOfElements; index++)
	{
		int currentValue = this->elements[index];
		unsigned short int currentPosition = index;

		while (currentPosition and this->elements[currentPosition - 1] > currentValue)
		{
			this->elements[currentPosition] = this->elements[currentPosition - 1];
			currentPosition--;
		}

		this->elements[currentPosition] = currentValue;
	}
}


void Sort::quicksort (bool ascendingOrder)
{
	this->quicksortHelpFunction(0, this->numberOfElements - 1);
}


void Sort::quicksortHelpFunction (unsigned short int startIndex, unsigned short int endIndex)
{
	if (startIndex >= endIndex)
		return;

	unsigned short int partitionIndex = this->quicksortPartition(startIndex, endIndex);

	this->quicksortHelpFunction(startIndex, partitionIndex - 1);
	this->quicksortHelpFunction(partitionIndex + 1, endIndex);
}


unsigned short int Sort::quicksortPartition (unsigned short int startIndex, unsigned short int endIndex)
{
	int pivotElement = this->elements[endIndex];
	unsigned short int partitionIndex = startIndex;

	for (unsigned short int index = startIndex; index < endIndex; index++)
		if (this->elements[index] <= pivotElement)
		{
			int container = this->elements[index];
			this->elements[index] = this->elements[partitionIndex];
			this->elements[partitionIndex] = container;
			partitionIndex++;
		}

	int container = this->elements[partitionIndex];
	this->elements[partitionIndex] = this->elements[partitionIndex + 1];
	this->elements[partitionIndex + 1] = container;

	return partitionIndex;
}