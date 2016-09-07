#include <iostream>
#include "GradeBook.h"
#include <iomanip>



using namespace std;

GradeBook::GradeBook(string name)
{
	setCourseName(name);
	aCount = 0;
	bCount = 0;
	cCount = 0;
	dCount = 0;
	fCount = 0;

}

void GradeBook::setCourseName(string name)
{
	if (name.length() <= 25)
	{
		courseName = name;
	}
	else {
		courseName = name.substr(0, 25);
		cout << "Name \"" << name << "\" exeeds maximum length (25).\n"
			<< "Limiting courseName to first 25 characters. \n\n";
	}
}
/*void GradeBook::setTeacherName(string sName)
{
	teacherName = sName;
}
*/
string GradeBook::getCourseName()
{
	return courseName;
}

/*string GradeBook::getTeacherName()
{
	return teacherName;
}*/

void GradeBook::displayMessage()
{
	cout << "Wellcome to the grade book for\n" << getCourseName() << "!\n";
}
void GradeBook::inputGrades()
{
	int grade;
	cout << "Enter the letter grade \n" << "Enter the EOF character to end input\n";
	while ((grade = cin.get()) != EOF)
	{
		switch (grade)
		{
		case 'A':
		case 'a':
			aCount++;
			break;
		case 'B':
		case 'b':
			bCount++;
			break;
		case 'C':
		case 'c':
			cCount++;
			break;
		case 'D':
		case 'd':
			dCount++;
			break;
		case 'F':
		case 'f':
			fCount++;
			break;
		case '\n':
		case '\t':
		case ' ':
			break;
		default:
			cout << "Incorrect letter grade entered." << " Enter a new grade.\n";
			break;
		}
	}
}
double GradeBook::getResult()
{
	rez = (double)(4 * aCount + 3 * bCount + 2 * cCount + dCount) / (aCount + bCount + cCount + dCount + fCount);
	return rez;
}

string GradeBook::getLetterRezult(double rez)
{
	
	if (rez >= 3.5)
	{
		letterRez = "A";
	}
	else {
		if (rez >= 2.5)
		{
			letterRez = "B";
		}
		else {
			if (rez >= 1.5)
			{
				letterRez = "C";
			}
			else {
				if (rez >= 0.5)
				{
					letterRez = "D";
				}
				else {
					letterRez = "F";
				}
			}
		}
	}
	return letterRez;
}
void GradeBook::displayGradeReport()
{
	cout << "\nNumber of students who received each letter grade:"
		<< "\nA: " << aCount
		<< "\nB: " << bCount
		<< "\nC: " << cCount
		<< "\nD: " << dCount
		<< "\nF: " << fCount << "\n";
	
	cout << "\nThe average rating is " << setiosflags (ios::fixed | ios::showpoint) << setprecision (1) << getResult() << "\n";
	cout << "\nThe average letter grade is '" << getLetterRezult(rez) << "'\n";

}