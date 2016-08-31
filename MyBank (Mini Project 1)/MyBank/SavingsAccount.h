//Declarations of class SavingsAccount
#pragma once
#include "account.h"

class SavingsAccount :
	public Account
{
public:
	SavingsAccount(int an, char *hn, double b, double mb=500);
	virtual bool withdraw(double amount);
};

