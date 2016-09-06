//#include "stdafx.h"
#include "Date.h"

using namespace std;

Date::Date(int month, int day, int year)
{
	setMonth(month);
	setDay(day);
	setYear(year);

}

void Date::setMonth(int month)
{
	myMonth = month;

	if (month > 12)
	{
		myMonth = 1;
	}
	if (month < 0)
	{
		myMonth = 1;
	}
}
int Date::getMonth()
{
	return myMonth;
}
void Date::setDay(int day)
{
	myDay = day;

}
int Date::getDay()
{
	return myDay;
}
void Date::setYear(int year)
{
	myYear = year;

}
int Date::getYear()
{
	return myYear;
}

void Date::displayDate()
{
	cout << "today is " << getMonth() << "/" << getDay() << "/" << getYear() << "\n";
}