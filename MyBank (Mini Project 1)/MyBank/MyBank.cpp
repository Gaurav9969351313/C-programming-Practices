/*****************************************************************************
*
*Programme:MyBank based on OOPS Concept
*Auther:Gaurav And Vijay
*Date:28/08/2016
*
*
*
******************************************************************************/


#include "SavingsAccount.h"
#include "Account.h"
#include <iostream>

using namespace std;

int main()
{
	SavingsAccount ambani(420, "Mukesh", 0);

	cout<<"Account No"<<ambani.getAccountNumber()<<endl;
	ambani.deposit(1000);
	cout<<"Holder Name"<<ambani.getHoldersName()<<endl;
	ambani.withdraw(700);
	cout<<"Account Balance"<<ambani.getBalance()<<endl;
	
	return 0;
}
//main ends Here