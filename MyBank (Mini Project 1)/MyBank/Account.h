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

	virtual bool deposit(double amount);
	virtual bool withdraw(double amount); 

	bool operator+=(double amount);//oprator overloading

	int getAccountNumber();
	double getBalance();
	char* getHoldersName();
	
};

