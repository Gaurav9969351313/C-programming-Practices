#include <iostream>
#include "Account.h"
#include "SavingsAccount.h"
#include "CurrentAccount.h"
#include "FixedDeposit.h"
#include "String.h"

using namespace std;

int main()
{
	Account as(1, "drm", 2000);
	as.withdraw(2000);
	cout<<as.getBalance()<<endl;
	cout<<endl;
	//---------------------------------end

	SavingsAccount ss(2, "rms", 2000);
	ss.withdraw(2000);
	cout<<ss.getBalance()<<endl;
	cout<<endl;
	//---------------------------------end

	SavingsAccount *sp=&ss;
	sp->withdraw(2000);
	cout<<sp->getBalance()<<endl;
	cout<<endl;

	Account *hp = &ss;
	hp->withdraw(2000);
	cout<<hp->getBalance()<<endl;
	cout<<endl;
	//---------------------------------end
	
	CurrentAccount ch(453, "yash", 1000);
	//ch.withdraw(3000);//balance should be as its is
	cout << "Balace=" << ch.getBalance() << endl;

	Account *ca = &ch;
	ca->withdraw(1500);//ha bhai kar le withdraw for 1500 
	//if 3500 no change in balance because overDraft limit set to 1000 only
	cout << "Balace within the limit=" << ca->getBalance() << endl;
	cout << endl;
	//overdraft not allowed if within the range balance is in negetive 
	//-----------------o/p confirmed----------------end

	FixedDeposit  fdgau(999, "vijay", 1000);
	cout << "vijay go to fixed deposit and withdraw" << fdgau.withdraw(1000) << endl;//not possible

	Account *ap = &fdgau;
	ap->withdraw(1000);//not possible
	cout << "Balace withdraw action from fixed account=" << ap->getBalance() << endl;
	ap->deposit(100);
	cout << "Balace deposit action from fixed account=" << ap->getBalance()<<endl;
	cout << endl;
	//----------------o/p confirmed-----------------end

	Account dmr(2, "abc", 2000);
	dmr.operator+=(100);// Operator Overloading
	cout << dmr.getBalance();
	cout << endl;
	dmr+=100;//another way to do the same
	cout << dmr.getBalance();
	cout << endl;
	//----------------o/p confirmed-----------------end

	String ken="gaurav";
	if(ken == "gaurav")
		cout << "Matched String"<< endl;
	else
		cout << "Un Matched String"<< endl;
	//----------------o/p confirmed-----------------end

	String ken1;//default const caled 
	String abc = "Ritchie";
	ken1="thomson";
	ken1=abc;

	String creator(abc);

	ken1.print();
	
}