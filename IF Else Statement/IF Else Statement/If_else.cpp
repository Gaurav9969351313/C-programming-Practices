/*****************************************************************************
*
*Programme:If Else Structure(If_else.cpp)
*Auther:Gaurav Talele
*Date:
*
*Description:A simple nested if else structure based on grading system.
*
******************************************************************************/
#include <iostream>
using namespace std;

int main ()
{
	int grade;
	
	cout << "Enter your grade : ";
	cin >> grade;
	if (grade >= 90)
		cout << "A\n";
	else if (grade >= 80)
		cout << "B\n";
	else if (grade >= 70)
		cout << "C\n";
	else if (grade >= 60)
		cout << "D\n";
	else
	{
		cout << "F : Fail.\n";
		cout << "You must take this course again.\n";
	}
	if(grade)
		cout << "Your grade wasn't zero." << endl;
	else
		cout << "Your grade was zero." << endl;

	return 0;
}//main ends here