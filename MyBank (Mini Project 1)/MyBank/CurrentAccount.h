#pragma once
#include "Account.h"

class CurrentAccount :
	public Account
{
private:
	double overDraft;

public:
	CurrentAccount(int an, char *hn, double b, double od);
	CurrentAccount(int an, char *hn, double b);
	virtual bool withdraw(double amount);
};

