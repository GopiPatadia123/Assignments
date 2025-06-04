#include<stdio.h>
main()
{
	int i,fact,n;
	
	printf("Enter Number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("Factorial = %d",fact);
}
