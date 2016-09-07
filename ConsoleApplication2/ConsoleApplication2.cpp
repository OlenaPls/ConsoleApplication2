// ConsoleApplication2.cpp: определяет точку входа для консольного приложения.
//

//#include "stdafx.h"
#include <iostream>
#include <string>
#include "GradeBook.h"
#include "Employee.h"
#include "Account.h"
#include "Date.h"
#include "Analisys.h"
#include <cstdlib>
#include <iomanip>
#include<limits>

using namespace std;


			//4.35 функція n!

int factorial(int n)
{
    //test msc
	int rez = 1;
	int i = 0;
	
	while (i < n)
	{
		rez *= (n - i);
		i++;
	}
	return rez;
}

int stepin(int x, int y)
{
	int i = 1;
	int rez = 1;

	while (i <= y)
	{
		rez *= x;
		i++;
	}
	return rez;
}
/*
			// 4.25 функція для завдання
string getSymbol(int x, int y, int lenght)
{

	if (x == 1)
	{
		return "* ";
	}
	else {
		if (x == lenght)
		{
			return "*\n";
		}
		if (y == 1)
		{
			
			return "* ";
		}
		else {
			if (y == lenght)
			{
				
				return "* ";
			}

			return "  ";

		}
	}
}


			//4.26 функція для перевірки числа на політропність

string checkNumber(int n)
{
	int a;
	int b;
	int d;
	int e;
	int c;
	
	a = n / 10000;
	b = (n - a * 10000) / 1000;
	c = (n - a * 10000 - b * 1000) / 100;
	d = (n - a * 10000 - b * 1000 - c * 100) / 10;
	e = (n - a * 10000 - b * 1000 - c * 100) % 10;
	if (a == e)
	{
		if (b == d)
		{
			return "Your number is polindrom!\n";
		}
		return "Your number is not polindrom!\n";
	}
	else {
		return "Your number is not polindrom!\n";
	}
}


			//4.27 функція переводу числа в десятичне

int  transferNumber(int n)
{
	int i = 1;
	int zalishok;
	int newNumber = 0;

	while (n != 0)
	{
		zalishok = n % 10;
		n /= 10;
		newNumber += zalishok * i;
		i *= 2;	
	}
	return newNumber;
}
*/
			

int main()
{


	/* 
			// підрахунок зарплати двох робітників з підвищенням


	string newName1;
	string newName2;
	string newSurname1;
	string newSurname2;
	int newSalary1;
	int newSalary2;
	int newAnSalary1;
	int newAnSalary2;


	

	cout << "Hello! Please enter the names of employee 1 and 2: \n"; cin >> newName1 >> newName2;
	cout << "Please enter the surnames of employee 1 and 2: \n"; cin >> newSurname1 >> newSurname2;
	cout << "Please enter the salaryes of employee 1 and 2: \n"; cin >> newSalary1 >> newSalary2;

	Employee employee1(newName1, newSurname1, newSalary1);
	Employee employee2(newName2, newSurname2, newSalary2);

	cout << "employee1:\n\t" << employee1.getName() << " " << employee1.getSurname() << "\n\t" << "salary = " << employee1.getSalary() << "\n\t" << "annual salary = " << employee1.getAnSalary() << "\n";
	cout << "employee2:\n\t" << employee2.getName() << " " << employee2.getSurname() << "\n\t" << "salary = " << employee2.getSalary() << "\n\t" << "annual salary = " << employee2.getAnSalary() << "\n\n";
	
	employee1.setIncrease(employee1.getSalary());
	employee2.setIncrease(employee2.getSalary());
			
	cout << "\n\n\n";
	cout << "employee1:\n\t" << employee1.getName() << " " << employee1.getSurname() << "\n\t" << "new salary = " << employee1.getSalary() << "\n\t" << "new annual salary = " << employee1.getAnSalary() << "\n";
	cout << "employee2:\n\t" << employee2.getName() << " " << employee2.getSurname() << "\n\t" << "new salary = " << employee2.getSalary() << "\n\t" << "new annual salary = " << employee2.getAnSalary() << "\n\n";

			// виведення поточної дати


	int tMonth;
	int tDay;
	int tYear;
		
	cout << " Hello! Please enter date: \nmonth\n";
	cin >> tMonth;
	cout << "day\n";
	cin >> tDay;
	cout << "year\n";
	cin >> tYear;

	Date todayDate(tMonth, tDay, tYear);
	todayDate.displayDate();
	
			// робота з двома рахунками


	int newBalance1 = 200;
	int newBalance2 = -300;
	int accountNumber;
	int operation;
	Account myAccount1(newBalance1);
	Account myAccount2(newBalance2);
	
	cout << "Hello! Please enter your account (1) or (2)\n\n";
	cin >> accountNumber;
	if (accountNumber == 1)
	{
		cout << "Your balance is " << myAccount1.getBalance() << "\n\n";
	}
		
        if (accountNumber == 2)
	{
		cout << "Your balance is " << myAccount2.getBalance() << "\n\n";
	}

	cout << "Please, enter your operation: credit (1) or debit (2)\n";
	cin >> operation;
	if (operation == 1)
	{
		if (accountNumber == 1)
		{
			myAccount1.credit(myAccount1.getBalance());
		}
		if (accountNumber == 2)
		{
			myAccount2.credit(myAccount2.getBalance());
		}
	}
	if (operation == 2)
	{
		if (accountNumber == 1)
		{
			myAccount1.debit(myAccount1.getBalance());
		}
		if (accountNumber == 2)
		{
			myAccount2.debit(myAccount2.getBalance());
		}
	}
	
			// 4.14 кредит
	
	int number;
	int balance;
	int costs;
	int completions;
	int newBalance;
	int credit;

	cout << "Please, enter the number of your account (or '0' for break) \n";
	cin >> number;
	while (number != 0)
	{
		cout << "Please enter your balance \n";
		cin >> balance;
		cout << "Please enter your completions \n";
		cin >> completions;
		cout << "Please enter your costs \n";
		cin >> costs;
		cout << "Please enter your credit \n";
		cin >> credit;

		newBalance = balance - completions + costs;

		if (newBalance > credit)
		{
			cout << "\n\nThe number of account " << number << "\nYour new balance is " << newBalance << "\nThe credit is " << credit << "\nSorry! Your credit exceeded!\n" << "\n\nPlease, enter the number of your account (or '0' for break) \n";
			cin >> number;
		}
		else
		{
			cout << "\n\nThe number of account " << number << "\nYour new balance is " << newBalance << "\n\nPlease, enter the number of your account (or '0' for break) \n";
			cin >> number;
		}
	}

			//4.15 підрахунок заробітка


int p;
int salary;

cout << "Please enter your weekly sales volume in dollars or (-1 for the quit): \n";
cin >> p;

while (p != -1)
{
	salary = 200 + 9 * p / 100;
	cout << "Your weekly income is   $" << salary << "\n\n";
		cout << "Please enter your weekly sales volume in dollars or (-1 for the quit): \n";
		cin >> p;
		
}
if (p == -1)
{
	cout << "\nDo not enter data!!!\n\n\n";
}

			// 4.18


int N = 1;

cout << "N\t10*N\t100*N\t1000*N\n\n";

while (N <= 5)
{
	cout << N << "\t" << N * 10 << "\t" << N * 100 << "\t" << N * 1000 << "\n";
	N++;
}

			//4.17 та 4.19 знаходження двох найбільших чисел з 10


int counter = 1;
int number;
int largest1 = 0;
int largest2 = 0;


while (counter <=10)
{
	cout << "Enter the integer number \n";
	cin >> number;
	if (number > largest2)
	{
		if (number > largest1)
		{
			largest2 = largest1;
			largest1 = number; 
		}
		else {
			largest2 = number;
		}
	}
	
	counter++;
}
	
	
cout << "\n\nThe two largest numbers are " << largest1 << " and " << largest2 << "\n\n\n";

			//4.16 розрахунок заробітної плати

string name;
double time;
double price;
double salary;

cout << "Enter your name or '0' to finish...\n";
cin.ignore(numeric_limits<streamsize>::max(), '\n');
cin.clear();
getline (cin, name);

while (name != "0")
{
	cout << "Enter your hours worked \n";
	cin >> time;
	cout << "Enter your weekly price in dollars for hour \n";
	cin >> price;
	if (time <= 40)
	{
		salary = price * time;
	}
	else {
		salary = price * (3 * time - 40) / 2; // or salary = static_cast<double>(price) * (3 * time - 40) / 2;
	}
	cout << "\nDear Mr(Ms) " << name << ",\nyour weekly salary is $" << setprecision(2) << fixed << salary << "\n\n";
	cout << "Enter your name or '0' to finish...\n";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.clear();
	getline(cin, name);
	
}
			//4.20 Обробка результатів іспиту

Analisys application;
application.processExamResults();


			//4.21 true/false
int count = 1;
while (count <= 10)
{
	cout << (count % 2 ? "****" : "++++++++") << endl;
	count++;
}

			//4.22 true/false
int row = 10;
int column;
while (row >= 1)
{
	column = 1;
	while (column <= 10)
	{
		cout << (column % 2 ? "<" : ">");
		column++;
	}
	row--;
	cout << endl;
}


			//4.23 the ELSE problem
int x = 11;
int y = 9;
if (x < 10)
	if (y > 10)
		cout << "*****" << endl;
	else cout << "#####" << endl;
	cout << "$$$$$" << endl;
	

int z = 11;
int k = 9;
if (z < 10) {
	if (k > 10)
		cout << "*****" << endl;
}
else {
	cout << "#####" << endl;
	cout << "$$$$$" << endl;
}
			//4.24 the ELSE problem

int x = 5;
int y = 7;
if (y == 8) {
	if (x == 5) {
		cout << "@@@@@" << endl;
	}
}
else {
	cout << "#####" << endl;
	cout << "$$$$$" << endl;
	cout << "&&&&&" << endl;
}

			//4.25 Вивести квадрат

int a;
int s = 1;
int r = 1;

cout << "Enter the lenth of the square from 1 to 20: \n";
cin >> a;

if (a <= 20)
{
	if (a >= 1)
	{
		while (r <= a)
		{
			while (s <= a)
			{
				cout << getSymbol(s, r, a);
				s++;
			}
			s = 1;
			r++;
		} cout << "\n";
	}
}
else {
	cout << "Error! Length is invalid. \n";
}


			//4.27 переведення у десятичне число
int number;

cout << "Enter the number of 1 and 0: ";
cin >> number;
cout << transferNumber(number) << "\n";



			//4.28 створення шахової дошки
int length = 8;

int x = 1;
int y = 1;
while (y <= length)
{
	if (y % 2 == 0)
	{
		cout << " ";
	}
	while (x <= length)
	{
		cout << "* ";
		x++;
	}
	cout << "\n";
	x = 1;
	y++;
}


			//4.29 степені числа 2 нескінченний цикл
int s = 1;
int x = 2;
while (s >= 0)
{
	cout << x << "\n";
	x *= 2;
	s++;
}

			//4.30 параметри кола

double r;
double D;
double length;
double S;
const double pi = 3.14159;

cout << "Please, enter the radius of the circle: \n\n";
cin >> r;
D = 2 * r;
length = 2 * pi * r;
S = pi * r * r;
cout << "The diametr of the circle = " << D << "\nThe length of the circle = " << length << "\nThe square of the circle = " << S << "\n";


			//4.31
int x = 1;
int y = 2;

cout << ++x + y;


			//4.32 та 4. 33 нерівність трикутника та властивість прямокутного трикутника
double number;
double max = 0;
double s1 = 0;
double s2 = 0;
int counter = 1;

while (counter <= 3)
{
	cout << "Enter the integer number \n";
	cin >> number;

	if (number > s2)
	{
		if (number > s1)
		{
			if (number > max)
			{		s2 = s1;
			s1 = max;
			max = number;
		}
		else {
			s2 = s1;
			s1 = number;
		}
	}
		else {
			s2 = number;
		}
	}

	counter++;
}
if (max <= s1 + s2)
{
	cout << "These numbers could be sides of the triangle!\n";
}
else {
	cout << "These numbers could not be sides of the triangle!\n";
}

if (max * max == s1 * s1 + s2 * s2)
{
	cout << "These numbers could be sides of the angled triangle!\n";
}
else {
	cout << "These numbers could not be sides of the angled triangle!\n";
}



			//4.34 
			
int number;
int newNumber = 0;
int i = 1;
cout << "Please, enter the four digit number: \n";
cin >> number;
			//а) шифрування числа

while (i <= 4)
{
	if (i == 1)
	{
		newNumber += (number % 10 + 7) % 10 * 100;
	}
	if (i == 2)
	{
		newNumber += (number % 10 + 7) % 10 * 1000;
	}
	if (i == 3)
	{
		newNumber += (number % 10 + 7) % 10;
	}
	if (i == 4)
	{
		newNumber += (number % 10 + 7) % 10 * 10;
	}
	number /= 10;
	i++;
}

cout << "Your coded number is " << newNumber << "\n";

			//б) дешифрування числа

while (i <= 4)
{
	if (i == 1)
	{
		newNumber += (number % 10 + 3) % 10 * 100;
	}
	if (i == 2)
	{
		newNumber += (number % 10 + 3) % 10 * 1000;
	}
	if (i == 3)
	{
		newNumber += (number % 10 + 3) % 10;
	}
	if (i == 4)
	{
		newNumber += (number % 10 + 3) % 10 * 10;
	}
	number /= 10;
	i++;
}

cout << "Your decoded number is " << newNumber << "\n";

*/
			//4.35 Факторіал
			/*			//а) n!
int n;
int rez = 1;
int i = 0;
cout << "Please, enter the number >= 0: \n";
cin >> n;


cout << "The factorial of the number " << n << " is " << factorial (n) << "\n";

			//б) наближене значення "e"

int n;
double e = 1;
int i = 0;
cout << "Please, enter the degree approach: \n";
cin >> n;

while (i < n)
{
	e += 1 / factorial(i);
	i++;
}

cout << "The 'e' in " << n << " approach is " << e << "\n";


			//в) "е" в степені 'x'

int n;
double z = 1;
int i = 0;
int x;
cout << "Please, enter the degree approach: \n";
cin >> n;
cout << "Please, enter the number of required power: \n";
cin >> x;

while (i < n)
{
	z += stepin(x, i) / factorial(i);
	i++;
}

cout << "The 'e' of required power " << x << " in " << n << " approach is " << z << "\n";


			//5.5 сума послідовних чисел

int k;
int number;
int sum = 0;
cout << "enter the k: number of numbers \n";
cin >> k;
for (int i = 1; i <= k; i++)
{
	cout << "enter the number \n";
	cin >> number;
	sum += number;
}
cout << "\nThe sum of all " << k << " numbers is " << sum << "\n";

			//5.6 середнє значення послідовності чисел

int number;
int sum = 0;
int i = 1;

cout << "Please enter the number or '9999' to quit \n";
cin >> number;
while (number != 9999)
{
	sum += number;
	i++;
	cout << "Please enter the number or '9999' to quit \n";
	cin >> number;
}

cout << "\nThe average value of all numbers is " << sum /--i << "\n";


			//5.7 

int x;
int y;
cout << "Enter two integers in the range 1-20: \n";
cin >> x >> y;
for (int j = 1; j <= y; j++)
{
	for (int i = 1; i <= x; i++)
	{
		cout << '@';
		
	}
	cout << "\n";
}


			//5.8 знаходження найменшого з послідовності

int number;
int min;
int k;
cout << "Enter the number of members in order \n";
cin >> k;
cout << "Enter the number \n";
cin >> number;
min = number;
for (int i = 1; i < k; i++)
{
	cout << "Enter the number \n";
	cin >> number;
	if (number < min)
	{
		min = number;
	}
	}
cout << "\nThe minimum of all numbers is " << min << "\n";


			//5.9 добуток непарних чисел послідовності

int i = 1;
int product = 1;
while (i <= 15)
{
	if (i % 2 != 0)
	{
		product *= i;
	}
	i++;
}
cout << "The product of odd numbers in range 1-15 is   " << product << "\n\n";


			//5.10 факторіал
int rez = 1;
cout << "n\tfuctorial(n)\n";
for (int i = 1; i <= 5; i++)
{
	for (int k = 1; k <= i; k++)
	{
		rez *= i;
	}
	cout << i << "\t" << rez << "\n";
}



			//5.11 складні відсотки

double a;
const double p = 1000;
for (int r = 5; r <= 10; r++)
{
	cout << "\nFor the year deposit rate " << r << " %:\n\n";
	cout << setw (10) << setiosflags(ios::left) << "Year" << "\t" << "Amount on deposit\n";
	for (int i = 1; i <= 10; i++)
	{
		a = p * pow((1 + 0.01 * r), i);
		cout << setw(10) << i << "\t" << setiosflags (ios::fixed) << setprecision(2) << a << "\n";
	}
}


			//5.12 виведення трикутників на екран

for (int i = 1; i <= 10; i++)
{
	for (int j = 1; j <= i; j++)
	{
		cout << "*";
	}
	cout << "\n";
}
cout << "\n";
for (int i = 1; i <= 10; i++)
{
	for (int j = 10; j >= i; j--)
	{
		cout << "*";
	}
	cout << "\n";
}
cout << "\n";
for (int i = 1; i <= 10; i++)
{
	for (int j = 2; j <= i; j++)
	{
		cout << " ";
	}
	for (int j = 10; j >= i; j--)
	{
			cout << "*";
	}
	cout << "\n";
	}
cout << "\n";
for (int i = 1; i <= 10; i++)
{
	for (int j = 9; j >= i; j--)
	{
		cout << " ";
	}
	for (int j = 1; j <= i; j++)
	{
		cout << "*";
	}
	cout << "\n";
}

			//факультативне завдання

	for (int i = 1; i <= 10; i++)
	{
			for (int k = 1; k <= i; k++)
			{
				cout << "*";
			}
			for (int k = 9; k >= i; k--)
			{
				cout << " ";
			}
			cout << "\t";
			for (int k = 10; k >= i; k--)
			{
				cout << "*";
			}
			for (int k = 2; k <= i; k++)
			{
				cout << " ";
			}
			cout << "\t";
			for (int k = 2; k <= i; k++)
			{
				cout << " ";
			}
			for (int k = 10; k >= i; k--)
			{
				cout << "*";
			}
			cout << "\t";
			for (int k = 9; k >= i; k--)
			{
				cout << " ";
			}
			for (int k = 1; k <= i; k++)
			{
				cout << "*";
			}
			cout << "\n";
	}
	
			//5.13 діаграми

int a, b, c, d, e;
cout << "Enter five numbers in rate 1-30: \n";
cin >> a >> b >> c >> d >> e;
int i;
for (i = 1; i <= a; i++)
{
	cout << "*";
}
cout << "\n";
for (i = 1; i <= b; i++)
{
	cout << "*";
}
cout << "\n";
for (i = 1; i <= c; i++)
{
	cout << "*";
}
cout << "\n";
for (i = 1; i <= d; i++)
{
	cout << "*";
}
cout << "\n";
for (i = 1; i <= e; i++)
{
	cout << "*";
}
cout << "\n";


			//5.14 ціна продуктів
int product;
int sales;
double rez = 0;


for (int i = 1; i <= 5; i++)
{
	cout << "Enter the number of the product and the sales per day \n";
	cin >> product >> sales;
	switch (product)
	{
	case 1: rez += 7 * 2.98 * sales;
		break;
	case 2: rez += 7 * 4.50 * sales;
		break;
	case 3: rez += 7 * 9.98 * sales;
		break;
	case 4: rez += 7 * 4.49 * sales;
		break;
	case 5: rez += 7 * 6.87 * sales;
		break;
	}
}
cout << "\nThe profit for the week is " << fixed << setprecision (2) << rez << " $\n";
*/

			//5.15 GradeBook продовження


GradeBook myGradeBook = GradeBook("The programming C++");
myGradeBook.displayMessage();
myGradeBook.inputGrades();
myGradeBook.displayGradeReport();

system("pause");
	return 0;

}
