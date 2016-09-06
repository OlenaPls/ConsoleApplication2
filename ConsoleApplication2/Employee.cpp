
//#include "stdafx.h"
#include "Employee.h"
#include <string>
#include <iostream>
#include <cstdlib>

using namespace std;

using std::getline;

Employee::Employee(string name, string surname, int salary)
{
	setName(name);
	setSurname(surname);
	setSalary(salary);
	setAnSalary();
}
void Employee::setName(string name)
{
	myName = name;
}
string Employee::getName()
{
	return myName;
}

void Employee::setSurname(string surname)
{
	mySurname = surname;
}
string Employee::getSurname()
{
	return mySurname;
}

void Employee::setSalary(int salary)
{
	if (salary < 0)
	{
		cout << "Error! Your salary = 0\n";
		mySalary = 0;
		
	}
	
	if (salary >= 0)
	{
		mySalary = salary;
	}
	
}
int Employee::getSalary()
{
	return mySalary;
}
void Employee::setAnSalary()
{
	myAnSalary = mySalary * 12;
}
int Employee::getAnSalary()
{
	return myAnSalary;
}
void Employee::setIncrease(int salary)
{
	mySalary = salary * 110 / 100;
	cout << "\nYour salary is increased on 10%\n";
	myAnSalary = 12 * mySalary;
}