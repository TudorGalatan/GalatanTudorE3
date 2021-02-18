#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>


void bubbleSort (char words[][100], unsigned int numberOfWords)
{
	for (unsigned int word = 0; word < numberOfWords; word++)
		for (unsigned int word = 0; word < numberOfWords - 1; word++)
			if (strlen(words[word]) < strlen(words[word + 1]))
			{
				char temporaryWord[100];
				strcpy(temporaryWord, words[word]);
				strcpy(words[word], words[word + 1]);
				strcpy(words[word + 1], temporaryWord);
			}
			else if (strlen(words[word]) == strlen(words[word + 1]))
			{
				if (strcmp(words[word], words[word + 1]) > 0)
				{
					char temporaryWord[100];
					strcpy(temporaryWord, words[word]);
					strcpy(words[word], words[word + 1]);
					strcpy(words[word + 1], temporaryWord);
				}
			}
}


int main ()
{
	char sentence[1000];
	fgets(sentence, 1000, stdin);

	char words[100][100];
	unsigned int numberOfWords = 0;

	char delimiter[] = " \n";
	char* word = strtok(sentence, delimiter);

	while (word != NULL)
	{
		strcpy(words[numberOfWords++], word);
		word = strtok(NULL, delimiter);
	}

	bubbleSort(words, numberOfWords);

	for (unsigned int word = 0; word < numberOfWords; word++)
		printf("%s\n", words[word]);

	return 0;
}