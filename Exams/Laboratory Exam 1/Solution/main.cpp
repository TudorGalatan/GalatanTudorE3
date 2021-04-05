#include "DoubleLinkedList.h"

#include <iostream>


void printDouble (const double& value)
{
	std::cout << value << ',';
}


void printInt (const int& value)
{
	std::cout << value << ',';
}


int main ()
{
	DoubleLinkedList <double> doubleList;

	doubleList.PushOnFront(1.5);
	doubleList.PrintAll(printDouble);
	doubleList.PushOnFront(2.5);
	doubleList.PushOnBack(3.5);
	doubleList.PrintAll(printDouble);

	while (doubleList.GetCount())
		std::cout << doubleList.PopFromBack() << ',';
	std::cout << std::endl;

	DoubleLinkedList<int> integerList;

	for (unsigned short int index = 0; index < 10; index++)
		if (index % 2 == 0)
			integerList.PushOnBack(index);
		else
			integerList.PushOnFront(index);

	integerList.PrintAll(printInt);

	return 0;
}