#pragma once
#include <string>


using namespace std;
using std::string;
using std::getline;

class Employee
{
public:
	Employee(string name, string surname, int salary);
    void setName(string name);
	void setSurname(string surname);
	void setSalary(int salary);
	string getName();
	string getSurname();
	int getSalary();
	void setIncrease(int salary);
	int getAnSalary();
	void setAnSalary();
private:
	string myName;
	string mySurname;
	int mySalary;
	int myAnSalary;
	
};