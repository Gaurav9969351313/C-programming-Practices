//Method Definations Of class Account
#include "Account.h"
#include "string.h"

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
