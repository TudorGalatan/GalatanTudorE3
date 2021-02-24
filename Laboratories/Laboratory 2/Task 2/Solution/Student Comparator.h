/*
	This is the interface for the Student Comparator module.
*/

#pragma once

#include "Student.h"


/*
	Compares two students in terms of their names.
	Input:
		- "firstStudent": the first student
		- "secondStudent": the second student
	Output:
		- 0, if the students have the same name
		- 1, if the first student has a higher name (lexicograhically)
		- -1, if the second student has a higher name (lexicographically)
*/
short int compareStudentsNames (Student firstStudent, Student secondStudent);


/*
	Compares two students in terms of their Mathematics grades.
	Input:
		- "firstStudent": the first student
		- "secondStudent": the second student
	Output:
		- 0, if the students have the same grade
		- 1, if the first student has a higher grade
		- -1, if the second student has a higher grade
*/
short int compareStudentsMathematicsGrades (Student firstStudent, Student secondStudent);


/*
	Compares two students in terms of their English grades.
	Input:
		- "firstStudent": the first student
		- "secondStudent": the second student
	Output:
		- 0, if the students have the same grade
		- 1, if the first student has a higher grade
		- -1, if the second student has a higher grade
*/
short int compareStudentsEnglishGrades (Student firstStudent, Student secondStudent);


/*
	Compares two students in terms of their History grades.
	Input:
		- "firstStudent": the first student
		- "secondStudent": the second student
	Output:
		- 0, if the students have the same grade
		- 1, if the first student has a higher grade
		- -1, if the second student has a higher grade
*/
short int compareStudentsHistoryGrades (Student firstStudent, Student secondStudent);


/*
	Compares two students in terms of their average grades.
	Input:
		- "firstStudent": the first student
		- "secondStudent": the second student
	Output:
		- 0, if the students have the same grade
		- 1, if the first student has a higher grade
		- -1, if the second student has a higher grade
*/
short int compareStudentsAverageGrades (Student firstStudent, Student secondStudent);