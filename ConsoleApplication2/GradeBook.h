#pragma once
#include <string>
using std::string;

class GradeBook
{
public:
	GradeBook(string nameOfBook);
	void setCourseName(string nameOfCource);
	//void setTeacherName(string name);
	string getCourseName();
	//string getTeacherName();
	void displayMessage();
	void inputGrades();
	void displayGradeReport();
	string getLetterRezult(double result);
	double getResult();

private:
	string courseName;
	//string teacherName;
    int aCount;
	int bCount;
	int cCount;
	int dCount;
	int fCount;
	double rez;
	string letterRez;


};