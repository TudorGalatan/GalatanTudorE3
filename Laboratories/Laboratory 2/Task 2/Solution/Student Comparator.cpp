/*
	This is the implementation for the Student Comparator module.
*/

#include "Student Comparator.h"


short int compareStudentsNames (Student firstStudent, Student secondStudent)
{
	if (firstStudent.getName() == secondStudent.getName())
		return 0;

	if (firstStudent.getName() > secondStudent.getName())
		return 1;

	return -1;
}


short int compareStudentsMathematicsGrades (Student firstStudent, Student secondStudent)
{
	if (firstStudent.getMathematicsGrade() == secondStudent.getMathematicsGrade())
		return 0;

	if (firstStudent.getMathematicsGrade() > secondStudent.getMathematicsGrade())
		return 1;

	return -1;
}


short int compareStudentsEnglishGrades (Student firstStudent, Student secondStudent)
{
	if (firstStudent.getEnglishGrade() == secondStudent.getEnglishGrade())
		return 0;

	if (firstStudent.getEnglishGrade() > secondStudent.getEnglishGrade())
		return 1;

	return -1;
}


short int compareStudentsHistoryGrades (Student firstStudent, Student secondStudent)
{
	if (firstStudent.getHistoryGrade() == secondStudent.getHistoryGrade())
		return 0;

	if (firstStudent.getHistoryGrade() > secondStudent.getHistoryGrade())
		return 1;

	return -1;
}


short int compareStudentsAverageGrades (Student firstStudent, Student secondStudent)
{
	if (firstStudent.getAverageGrade() == secondStudent.getAverageGrade())
		return 0;

	if (firstStudent.getAverageGrade() > secondStudent.getAverageGrade())
		return 1;

	return -1;
}