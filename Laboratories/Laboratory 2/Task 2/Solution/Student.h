/*
	This is the interface for the Student module.
*/

#pragma once

#include <string>


class Student
{
	private:

		std::string name;
		float mathematicsGrade;
		float englishGrade;
		float historyGrade;

	public:

		/*
			This is the default constructor for the class.
			Input:
				- none
			Output:
				- the instance of the class is being initialized
		*/
		Student ();

		/*
			Gets the name of the student.
			Input:
				- none
			Output:
				- the name of the student
		*/
		std::string getName ();

		/*
			Sets the name of the student.
			Input:
				- "name": the name of the student
			Output:
				- the name of the student is being set
		*/
		void setName (std::string name);

		/*
			Gets the Mathematics grade of the student.
			Input:
				- none
			Output:
				- the student's grade at Mathematics
		*/
		float getMathematicsGrade ();

		/*
			Sets the Mathematics grade of the student.
			Input:
				- "mathematicsGrade": the student's grade at Mathematics
			Output:
				- the student's grade at Mathematics is being set
		*/
		void setMathematicsGrade (float mathematicsGrade);

		/*
			Gets the English grade of the student.
			Input:
				- none
			Output:
				- the student's grade at English
		*/
		float getEnglishGrade ();

		/*
			Sets the English grade of the student.
			Input:
				- "englishGrade": the student's grade at English
			Output:
				- the student's grade at English is being set
		*/
		void setEnglishGrade (float englishGrade);

		/*
			Gets the History grade of the student.
			Input:
				- none
			Output:
				- the student's grade at History
		*/
		float getHistoryGrade ();

		/*
			Sets the History grade of the student.
			Input:
				- "historyGrade": the student's grade at History
			Output:
				- the student's grade at History is being set
		*/
		void setHistoryGrade (float historyGrade);

		/*
			Gets the average grade of the student.
			Input:
				- none
			Output:
				- the student's average grade
		*/
		float getAverageGrade ();
};