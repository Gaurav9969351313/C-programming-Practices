#include <stdio.h>

int main()
{
	int a=5, b=7, c=0;
	int d=1, f=2, g=3, h=4,i=0,j=0;

	c= - a+++b;//   -(a++) + b
	printf("c value= %d \n", c);

	//oprators

	c=0;
	g= d || f;
	h= d && f;
	i= d^f;
	printf("%d \t %d \t %d \t %d \n", g, h,i,j);

	c= ++a || ++b && j++ && ++d;

	/* (5 || 7 && 1 && 1)
	the output of the programme 77011 This is just beacause if the first value is true 
	then second never be checked independant of their opration
	neverthe less its same for &&.*/

	printf("%d%d%d%d", a,b,j,d);

}//main