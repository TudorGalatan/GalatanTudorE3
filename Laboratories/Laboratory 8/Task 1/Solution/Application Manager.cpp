/*
	This is the starting point of the application.
*/

#include <fstream>
#include <iostream>
#include <string>
#include <queue>
#include <map>
#include <vector>
#include <utility>


struct myPair
{
	std::string word;
	unsigned short int counter;
};


bool operator < (const myPair& pair1, const myPair& pair2)
{
	return (pair1.counter < pair2.counter) ? (pair1.counter < pair2.counter) : (pair1.word < pair2.word);
}


int main ()
{
	// Read the text from the file.
	std::string text;
	std::ifstream inputFile("Text.txt");
	getline(inputFile, text);
	inputFile.close();

	// Split the text into words.
	bool newWord = false;
	std::string word;
	std::vector<std::string> words;
	for (unsigned short int index = 0; index < text.size(); index++)
		if (text.at(index) == ' ' || text.at(index) == '.' || text.at(index) == ',' ||
			text.at(index) == '!' || text.at(index) == '?')
			{
				if (word != "")
					words.push_back(word);
				newWord = true;
				word = "";
			}
		else
		{
			newWord = false;
			word += text.at(index);
		}
			
	
	// Create the map.
	std::map <std::string, unsigned short int> map;
	
	for (unsigned short int index = 0; index < words.size(); index++)
	{
		std::pair <std::string, unsigned short int> pair;

		if (map.find(words[index]) == map.end())
		{
			pair = std::make_pair(words[index], 1);
			map.insert(pair);
		}
		else
			map[words[index]]++;
	}

	std::priority_queue <myPair> priorityQueue;

	for (auto element : map)
	{
		std::string string = element.first;
		unsigned short int integer = element.second;
		myPair pair;
		pair.word = string;
		pair.counter = integer;
		priorityQueue.push(pair);
	}

	// Print the elements on the screen.
	while (not priorityQueue.empty())
	{
		std::cout << priorityQueue.top().word << " => " << priorityQueue.top().counter << '\n';
		priorityQueue.pop();
	}
	return 0;
}