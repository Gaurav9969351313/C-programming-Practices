/*****************************************************************************
*
*Programme	:  MyBank based on OOPS Concept
*Auther		:  Gaurav And Vijay
*Date		:  28/08/2016
*
*
*
******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("Programme to explain typedef:");

	typedef int number;
	number myage = 22;
	printf("My age is %d\n", myage);

	typedef char *string;
    typedef int rollno;

    string name;
    rollno num;

	struct node
	{
        int data;
		struct node *next;
	};
    
    typedef struct node Node;
    typedef
}