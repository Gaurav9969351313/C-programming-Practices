//Method Definations Of class SavingsAccount
#include "SavingsAccount.h"
#include "Account.h"

SavingsAccount::SavingsAccount(int an, char *hn, double b)
	:Account(an, hn, b)
{

}

bool SavingsAccount::withdraw(double amount)
{
	if (balance-amount < 500)
		return false;
	balance-=amount;
	return true;
}