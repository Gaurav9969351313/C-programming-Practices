//Declarations of class SavingsAccount
#pragma once
#include "account.h"

class SavingsAccount :
	public Account
{

public:
	SavingsAccount(int an, char *hn, double b);
	bool withdraw(double amount);
};

