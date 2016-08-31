//Method Definations Of class SavingsAccount
#include<iostream>
#include "SavingsAccount.h"
#include "Account.h"
using namespace std;

SavingsAccount::SavingsAccount(int an, char *hn, double b, double mb)
	:Account(an, hn, b)
{

}

bool SavingsAccount::withdraw(double amount)
{
	cout<<"Savings Withdraw called"<<endl;
	if (balance-amount < 500)
		return false;
	balance-=amount;
	return true;
}