//Declarations of class Account inside class
#pragma once
class Account
{
private:
	char holderName[80];
	int accountNumber;

protected:
	double balance;

public:
	Account(int an, char *hn, double b);

	bool deposit(double amount);
	bool withdraw(double amount);

	int getAccountNumber();
	double getBalance();
	char* getHoldersName();
};

