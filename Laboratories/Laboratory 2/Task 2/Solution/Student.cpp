/*
	This is the implementation for the Student module.
*/

#include "Student.h"


Student::Student ()
{
	// Set the name of the student to an empty string.
	this->name = "";

	// Set the grades of the student.
	this->mathematicsGrade = 0.0;
	this->englishGrade = 0.0;
	this->historyGrade = 0.0;
}


std::string Student::getName ()
{
	return this->name;
}


void Student::setName (std::string name)
{
	this->name = name;
}


float Student::getMathematicsGrade ()
{
	return this->mathematicsGrade;
}


void Student::setMathematicsGrade (float mathematicsGrade)
{
	this->mathematicsGrade = mathematicsGrade;
}


float Student::getEnglishGrade ()
{
	return this->englishGrade;
}


void Student::setEnglishGrade (float englishGrade)
{
	this->englishGrade = englishGrade;
}


float Student::getHistoryGrade ()
{
	return this->historyGrade;
}


void Student::setHistoryGrade (float historyGrade)
{
	this->historyGrade = historyGrade;
}


float Student::getAverageGrade ()
{
	// Calculate the average grade of the student.
	float averageGrade = this->mathematicsGrade + this->englishGrade + this->historyGrade;
	averageGrade /= 3.0;

	return averageGrade;
}