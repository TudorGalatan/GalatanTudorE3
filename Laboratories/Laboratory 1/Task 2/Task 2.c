#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>


int stringToNumber (char string[])
{
	int number = 0;

	unsigned short int negative = 0;

	if (string[0] == '-')
		negative = 1;
	else
	{
		unsigned short int digit = string[0] - '0';
		number = number * 10 + digit;
	}

	for (unsigned int index = 1; index < strlen(string); index++)
	{
		unsigned short int digit = string[index] - '0';
		number = number * 10 + digit;
	}

	if (negative)
		number -= 2 * number;

	return number;
}


int main ()
{
	FILE* inputFile = fopen("in.txt", "r");

	unsigned int number = 0;
	long long int sum = 0;

	char word[100];

	while (fgets(word, 100, inputFile))
	{
		if (word[strlen(word) - 1] == '\n')
			word[strlen(word) - 1] = '\0';
		int number = stringToNumber(word);
		sum += number;
	}

	printf("%lld\n", sum);

	return 0;
}