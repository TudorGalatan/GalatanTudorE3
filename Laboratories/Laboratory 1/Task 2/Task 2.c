#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>


unsigned int stringToNumber (char string[])
{
	unsigned int number = 0;

	for (unsigned int index = 0; string[index] != '\n'; index++)
	{
		unsigned short int digit = string[index] - '0';
		number = number * 10 + digit;
	}

	return number;
}


int main ()
{
	FILE* inputFile = fopen("in.txt", "r");

	unsigned int number = 0;
	unsigned long long int sum = 0;

	char word[100];
	while (fgets(word, 100, inputFile))
	{
		unsigned int number = stringToNumber(word);
		sum += number;
	}

	printf("%llu", sum);

	return 0;
}