#include<stdio.h>
main()
{
	int i,n,a=0,b=1,fibo;
	
	printf("Enter The Number : ");
	scanf("%d",&n);
	
	printf("Fibonanci series is : %d %d",a,b);
	
	for(i=2;i<n;i++)
	{
		fibo=a+b;
		printf(" %d",fibo);
		a=b;
		b=fibo;
	}
	printf("\n");
}
