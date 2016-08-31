#include "CurrentAccount.h"

CurrentAccount::CurrentAccount(int an, char *hn, double b, double od)
	:Account(an, hn, b)
{
	overDraft=od;
}

CurrentAccount::CurrentAccount(int an, char *hn, double b)
	:Account(an, hn, b)
{
	overDraft=1000;
}

bool CurrentAccount::withdraw(double amount)
{
	if (amount > (overDraft+balance))
		return false;
	balance-=amount;
	return true;
}