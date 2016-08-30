#include <stdio.h>

int main()
{
	int *p;
	int a[3];
	int i;

	p=a;/*in this statement we are saying that the starting address 
	(a is assigned to p where a is of data type array and [] means address ) 
	which means p is holding the address of starting element address
	*/
	for(i=0; i<3;i++)
		scanf("%d",&p[i]);

	/*in the above scanf statement their is
	&sign signifies the address And the main rule reagrding this 
	that always we have to remember is ( [] and * is working on address )*/

	/* so in this case the monkey first opens the bracket 
	and goes inside the box get the address 
	and return out of box and tell that store the coming value in this location */

	for (i = 0; i < 3; i++)
		printf("a[%d]=%d\n",i,p[i]);

}