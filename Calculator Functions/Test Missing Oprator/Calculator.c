/*simple Function*/
#include <stdio.h>

int Add(int x,int y)
{
	return x+y;
}//add
int Sub(int x,int y)
{
	return x-y;
}//sub
int Mul(int x,int y)
{
	return x*y;
}//mul
int Div(int x,int y)
{
	if(y==0)
		return printf("divide by 0 error");
	else
		return x/y;
}//div

int main()
{
	int a,b,res,op=0;
	printf("Enter two numbers=");
	scanf_s("%d %d", &a, &b);

	printf("Enter 1 to add\n Enter 2 to sub\n enter 3 to mul\n Enter 4 to div\n");
	scanf_s("%d", &op);

	switch (op)
	{
	case 1:res=Add(a,b);printf("Addition= %d \n", res); break;
	case 2:res=Sub(a,b);printf("Substraction= %d \n", res); break;
	case 3:res=Mul(a,b);printf("Multiplication= %d \n", res); break;
	case 4:res=Div(a,b);printf("Division= %d \n", res); break;
	default:printf("invalid Entry \n");break;
	}
}