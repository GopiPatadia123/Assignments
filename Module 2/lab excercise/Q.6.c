#include<stdio.h>
main()
{
	int n;
	printf("***Using for Loop***");
	for(n=1;n<=10;n++)
	{
		printf("\n%d",n);
	}
	printf("\n***Using while Loop***\n");
	n=1;
	while(n<=10)
	{
		printf("\n%d",n);
		n++;
	}
	printf("\n***Using Do-while Loop***\n");
	n=1;
	do
	{
		printf("\n%d",n);
		n++;
	}while(n<=10);
}
