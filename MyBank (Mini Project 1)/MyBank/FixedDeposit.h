#pragma once
#include "account.h"

class FixedDeposit :
	public Account
{
public:
	FixedDeposit(int an, char *hn, double b);
	bool withdraw(double amount);
	bool deposit(double amount);
	
};

