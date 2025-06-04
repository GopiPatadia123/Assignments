#include<stdio.h>
factorial()
{
	int i=1,n,fact=1;
	printf("Enter Number  : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("Factorial is : %d",fact);
}
main()
{
	factorial();
}
