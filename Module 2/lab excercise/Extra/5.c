#include<stdio.h>
Isprime()
{
	int n,count=0,i;
	
	printf("Enter Number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("Prime");
	}
	else
	{
		printf("Not Prime");
	}
}
main()
{
	Isprime();
}
