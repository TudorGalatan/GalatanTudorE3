#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>


void solveTask ();
void bubbleSort (char words[][50], unsigned short int numberOfWords);


int main ()
{
	// Read the input sentence, store the individual words,
	// sort them and print them in the requested manner.
	solveTask();

	return 0;
}


/*
	Reads the input sentence, stores the individual words,
	sorts them and prints them in the requested manner.
	Input:
		- none
	Output:
		- the individual words are printed on the screen in
		  the requested manner
*/
void solveTask ()
{
	// Read the input sentence.
	char sentence[1000];
	fgets(sentence, 1000, stdin);

	// Get the first word.
	char words[200][50];
	unsigned short int numberOfWords = 0;
	char delimiters[] = " \n";
	char* word = strtok(sentence, delimiters);

	// Get the other words.
	while (word != NULL)
	{
		strcpy(words[numberOfWords++], word);
		word = strtok(NULL, delimiters);
	}

	// Sort the words.
	bubbleSort(words, numberOfWords);

	// Print the words on the screen in the requested manner.
	for (unsigned short int word = 0; word < numberOfWords; word++)
		printf("%s\n", words[word]);
}


/*
	Sorts a matrix of words in the requested manner using
	Bubble Sort.
	Input:
		- "words": the matrix of words
		- "numberOfWords": the total number of words
	Output:
		- the matrix of words is sorted in the requested manner
*/
void bubbleSort (char words[][50], unsigned short int numberOfWords)
{
	for (unsigned short int iteration = 0; iteration < numberOfWords; iteration++)
		for (unsigned short int word = 0; word < numberOfWords - 1; word++)

			// The words have a different number of letters.
			if (strlen(words[word]) < strlen(words[word + 1]))
			{
				char temporaryWord[50];
				strcpy(temporaryWord, words[word]);
				strcpy(words[word], words[word + 1]);
				strcpy(words[word + 1], temporaryWord);
			}

	// The words have an equal number of letters and they are not sorted in
	// an alphabetical order yet.
			else if (strlen(words[word]) == strlen(words[word + 1]))
				if (strcmp(words[word], words[word + 1]) > 0)
				{
					char temporaryWord[100];
					strcpy(temporaryWord, words[word]);
					strcpy(words[word], words[word + 1]);
					strcpy(words[word + 1], temporaryWord);
				}
}