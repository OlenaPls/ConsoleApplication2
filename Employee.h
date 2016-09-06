#pragma once
using namespace std;
using std::string;
using std::getline;

class Employee
{
public:
	Employee(string name, string surname, int salary);
		setName(string name);
		setSurname(string surname);
		setSalary(string salary);
		getName();
		getSurname();
		getSalary();
private:
	string myName;
	string mySurname;
	int mySalary;
	int myAnSalary;
	int myNewSalary;
	int myNewAnSalary;
};