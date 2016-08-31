#include "FixedDeposit.h"
#include<iostream>
#include "Account.h"
using namespace std;


FixedDeposit::FixedDeposit(int an, char *hn, double b)
	: Account(an, hn, b)
{

}


bool FixedDeposit:: withdraw(double amount)
{
	cout<<"Sorry withdrawl not allowed"<<endl;
	return true;
}

bool FixedDeposit:: deposit(double amount)
{
	cout<<"Sorry deposit not allowed"<<endl;
	return true;
}