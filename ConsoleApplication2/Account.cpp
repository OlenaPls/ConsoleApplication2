
//#include "stdafx.h"
#include <cstdlib>
#include "Account.h"
#include <iostream>

using namespace std;



Account::Account(int balance)
{
	setBalance(balance);
}


void Account::setBalance(int balance)
{
	if (balance >= 0)
	{
		myBalance = balance;
	}
	if (balance < 0)
	{
		myBalance = 0;
		cout << "Error! Your opening balance is invalid. Balance = 0\n";
	}
}

int Account::getBalance()
{
	return myBalance;
}

void Account::credit(int balance)
{
	cout << "Please, enter required amount\n";
	cin >> sum;
	myBalance = balance + sum;
	cout << "Your new balance = " << getBalance() << "\n\n";
}

void Account::debit(int balance)
{
	cout << "Please, enter required amount\n";
	cin >> sum;
	if (sum > balance)
	{
		cout << "Insufficient funds in your account! Please try again later!\nYour balance is " << getBalance() << "\n\n";
	}
	if (sum <= balance)
	{
		myBalance = balance - sum;
		cout << "Your new balance = " << getBalance() << "\n\n";
	}
}
