#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	int *p;
	int size;

	scanf_s("%d",&size);

	p = (int *)calloc(sizeof(int), size);
	/*in colloc function we have to provide size and requirement by user 
	which can be converted into bytes internally 
	whereas in malloc we have to provide byte size requirement in sigle argument.*/

	//p=malloc(size*4);//should be size * datatype space requirement
	//p = (int *)malloc(size*sizeof(int));

	for (i = 0; i < size; i++)
		scanf("%d", &p[i]);
	
	for (i = 0; i < size; i++)
		printf("%d", p[i]);

	free(p);
	return 0;

}                                                                                                                                       