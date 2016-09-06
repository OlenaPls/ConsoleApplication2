#pragma once


class Account
{
public:
	Account(int balance);
	
	void setBalance(int balance);
	int getBalance();
	void credit(int balance);
	void debit(int balance);
private:
	int myBalance;
	int sum;
};