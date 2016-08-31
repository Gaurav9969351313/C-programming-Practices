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

#define MAXIMUMLENGTH (20)
#define MAXSUBJECTS (5)

struct Record
{
	char name[MAXIMUMLENGTH];
	int rollno;
	int marks[MAXSUBJECTS];
	int total;
	float average;
};

int main()
{
	struct Record student;
	int i;
	printf("Enterthe students details \n");
	printf("Name:");
	gets(student.name);
	fflush(stdin);

	printf("Roll Number:");
	scanf("%d", &student.rollno);
	fflush(stdin);

	student.total = 0;

	for (i = 0; i < MAXSUBJECTS; i++)
	{
		printf("Marks in Subject %d=", i+1);
		scanf("%d", &student.marks[i]);
		fflush(stdin);
		student.total+=student.marks[i];		  
	}

	student.average  = (float)student.total/MAXSUBJECTS;

	printf("----------------------------------------------------------------------------\n");
	printf("Roll Number %d:\n",student.rollno);
	printf("Name:%s \n", student.name);
	printf("----------------------------------------------------------------------------\n");
	printf("Subject %d\t\t\t\t Marks\n");
	for (i = 0; i < MAXSUBJECTS; i++)
	{
		printf("%d\t\t\t\t %5d \n",i+1,student.marks[i]);
	}
	printf("----------------------------------------------------------------------------\n");
	printf("Total \t\t\t\t %5d \n", student.total);
	printf("Average \t\t\t\t %6.2f \n", student.average);
	printf("----------------------------------------------------------------------------\n");

	return 0;
}

