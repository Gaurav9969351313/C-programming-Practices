/*#include <stdio.h>

int main()
{
	int c = 181 & 254;
	int d = c | 1;
	printf("Off last Digit %d \n",c);
	printf("on last digit of c %d \n",d);

}*/

#include <stdio.h>

int main()
{
	int marks=0;
	printf("enter marks of subject=");
	scanf("%d", &marks);
	if (marks>=60)
		printf("First Class \n");
	else if (marks<60 || marks>=45)
		printf("pass \n");
	else printf("fail \n");

}