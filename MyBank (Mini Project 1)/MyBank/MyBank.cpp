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
#include "CurrentAccount.h"
#include "FixedDeposit.h"
#include "Account.h"
#include <iostream>

using namespace std;

int main()
{
	/*CurrentAccount *pointertoclas;
	pointertoclas=new CurrentAccount(423, "Steave", 0);
	(*pointertoclas).withdraw(100);*/
	//FixedDeposit jobs(423, "Steave", 0);

	
	Account *ap;
	ap = new Account(900,"Gaurav",10000);
	(*ap).withdraw(1000);  //we can also write the same by writing ap->withdraw(100);

	SavingsAccount ambani(420, "Mukesh", 0);
	CurrentAccount tata(421,"ratan", 0);
	
	cout<<"Account No="<<ambani.getAccountNumber()<<endl;
	ambani.deposit(1000);
	cout<<"Holder Name="<<ambani.getHoldersName()<<endl;
	ambani.withdraw(700);
	cout<<"Account Balance="<<ambani.getBalance()<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;

	cout<<"Account No="<<(*ap).getAccountNumber()<<endl;
	(*ap).deposit(1000);
	cout<<"Holder Name="<<(*ap).getHoldersName()<<endl;
	(*ap).withdraw(700);
	cout<<"Account Balance="<<(*ap).getBalance()<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;

	delete ap;

	return 0;
}
//main ends Here