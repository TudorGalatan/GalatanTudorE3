/*
	This is the starting point of the application.
*/

#include "Student Comparator.h"
#include <cassert>
#include <iostream>


void runExample ();


int main ()
{
	// Run the example.
	runExample();

	return 0;
}


void runExample ()
{
	// Create two students.
	Student firstStudent, secondStudent;

	// Set the names of the students.
	firstStudent.setName("Johnny");
	secondStudent.setName("Johnathan");

	// Set the Mathematics grade of the students.
	firstStudent.setMathematicsGrade(7.8);
	secondStudent.setMathematicsGrade(9.2);

	// Set the English grade of the students.
	firstStudent.setEnglishGrade(10.0);
	secondStudent.setEnglishGrade(10.0);

	// Set the History grade of the students.
	firstStudent.setHistoryGrade(5.6);
	secondStudent.setHistoryGrade(8.0);

	// Get the name of the students.
	std::string firstName = firstStudent.getName();
	std::string secondName = secondStudent.getName();

	// Get the Mathematics grade of the students.
	float firstMathematics = firstStudent.getMathematicsGrade();
	float secondMathematics = secondStudent.getMathematicsGrade();

	// Get the English grade of the students.
	float firstEnglish = firstStudent.getEnglishGrade();
	float secondEnglish = secondStudent.getEnglishGrade();

	// Get the History grade of the students.
	float firstHistory = firstStudent.getHistoryGrade();
	float secondHistory = secondStudent.getHistoryGrade();

	// Get the average grade of the students.
	float firstAverage = firstStudent.getAverageGrade();
	float secondAverage = secondStudent.getAverageGrade();

	// Set the correct name of the students.
	std::string firstNameCorrect = "Johnny";
	std::string secondNameCorrect = "Johnathan";

	// Set the correct Mathematics grade of the students.
	float firstMathematicsCorrect = 7.8;
	float secondMathematicsCorrect = 9.2;

	// Set the correct English grade of the students.
	float firstEnglishCorrect = 10.0;
	float secondEnglishCorrect = 10.0;

	// Set the correct History grade of the students.
	float firstHistoryCorrect = 5.6;
	float secondHistoryCorrect = 8.0;

	// Set the correct average grade of the students.
	float firstAverageCorrect = 7.8;
	float secondAverageCorrect = 9.06666666667;

	// Test the functionalities.
	assert(firstName == firstNameCorrect);
	assert(secondName == secondNameCorrect);
	assert(firstMathematics == firstMathematicsCorrect);
	assert(secondMathematics == secondMathematicsCorrect);
	assert(firstEnglish == firstEnglishCorrect);
	assert(secondEnglish == secondEnglishCorrect);
	assert(firstHistory == firstHistoryCorrect);
	assert(secondHistory == secondHistoryCorrect);
	// assert(firstAverage == firstAverageCorrect);
	assert(secondAverage == secondAverageCorrect);

	// Compare the names.
	short int nameComparison = compareStudentsNames(firstStudent, secondStudent);
	switch (nameComparison)
	{
		case -1:
			std::cout << "\n\t" << firstName << " has a lower name (lexicographically) than " << secondName << ".\n";
			break;
		case 0:
			std::cout << "\n\t" << firstName << " and " << secondName << " have the same name.\n";
			break;
		default:
			std::cout << "\n\t" << firstName << " has a higher name (lexicographically) than " << secondName << ".\n";
	}

	// Compare the Mathematics grades.
	short int mathematicsComparison = compareStudentsMathematicsGrades(firstStudent, secondStudent);
	switch (mathematicsComparison)
	{
		case -1:
			std::cout << "\n\t" << firstName << " has a lower grade at Mathematics than " << secondName << ".\n";
			break;
		case 0:
			std::cout << "\n\t" << firstName << " and " << secondName << " have equal grades at Mathematics.\n";
			break;
		default:
			std::cout << "\n\t" << firstName << " has a higher grade at Mathematics than " << secondName << ".\n";
	}

	// Compare the English grades.
	short int englishComparison = compareStudentsEnglishGrades(firstStudent, secondStudent);
	switch (englishComparison)
	{
		case -1:
			std::cout << "\n\t" << firstName << " has a lower grade at English than " << secondName << ".\n";
			break;
		case 0:
			std::cout << "\n\t" << firstName << " and " << secondName << " have equal grades at English.\n";
			break;
		default:
			std::cout << "\n\t" << firstName << " has a higher grade at English than " << secondName << ".\n";
	}

	// Compare the History grades.
	short int historyComparison = compareStudentsHistoryGrades(firstStudent, secondStudent);
	switch (historyComparison)
	{
		case -1:
			std::cout << "\n\t" << firstName << " has a lower grade at History than " << secondName << ".\n";
			break;
		case 0:
			std::cout << "\n\t" << firstName << " and " << secondName << " have equal grades at History.\n";
			break;
		default:
			std::cout << "\n\t" << firstName << " has a higher grade at History than " << secondName << ".\n";
	}

	// Compare the average grades.
	short int averageComparison = compareStudentsAverageGrades(firstStudent, secondStudent);
	switch (averageComparison)
	{
		case -1:
			std::cout << "\n\t" << firstName << " has a lower average grade than " << secondName << ".\n";
			break;
		case 0:
			std::cout << "\n\t" << firstName << " and " << secondName << " have equal average grades.\n";
			break;
		default:
			std::cout << "\n\t" << firstName << " has a higher average grade than " << secondName << ".\n";
	}
}