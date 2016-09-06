#pragma once
#include <iostream>

class Date
{
public:
	Date (int month, int day, int year);
	void setMonth(int month);
	int getMonth();
	void setDay(int day);
	int getDay();
	void setYear(int year);
	int getYear();
	void displayDate();

private:
	int myMonth;
	int myDay;
	int myYear;
};