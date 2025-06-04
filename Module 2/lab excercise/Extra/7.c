#include<stdio.h>
main()
{
	int num,sum=0,i;
	
	printf("Enter Numbers : ");
	scanf("%d",&num);
	
	while(num!=0)
	{
		i=num%10;
		sum=sum+i;
		num=num/10;
	}
	printf("Sum Of Digits of the number is %d",sum);
}
