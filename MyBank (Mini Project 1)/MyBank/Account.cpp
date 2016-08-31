//Method Definations Of class Account
#include<iostream>
#include "Account.h"
#include "string.h"
using namespace std;

Account::Account(int an, char *hn, double b)
{
	accountNumber=an;
	strcpy(holderName,hn);
	balance=b;
}

bool Account::deposit(double amount)
{
	balance+=amount;
	return true;
}

bool Account::withdraw(double amount)
{
	cout<<"Accounts Withdraw called"<<endl;
	balance-=amount;
	return true;
}

int Account:: getAccountNumber()
{
	return accountNumber;
}

double Account::getBalance()
{
	return balance;
}

char* Account:: getHoldersName()
{
	return holderName;
}

bool Account :: operator+=(double amount)
{
	balance += amount;
	return true;
}