#include<stdio.h>
main()
{
	int a,b;
	printf("Enter A : ");
	scanf("%d",&a);
	printf("Enter B : ");
	scanf("%d",&b);
	
	while(1)
	{
		printf("\nPress 1 for Arithmatic Operation!!");
		printf("\nPress 2 for Relational Opration!!");
		printf("\nPress 3 for Logical Opration!!");
		printf("\nPress 4 for Exit!!");
		
		int ch;
		printf("\nEnter Choice : ");
		scanf("%d",&ch);
		
		if(ch==1)
		{
			printf("\n****Arithmatic Operation****\n");
			printf("\nAddition : %d",a+b);
			printf("\nSubtraction : %d",a-b);
			printf("\nMultiplication : %d",a*b);
			printf("\nDivison : %d",a/b);
		}
		else if(ch==2)
		{
			printf("\n****Relational Operation****\n");
			printf("\nEquals to : %d",a==b);
			printf("\nLess than : %d",a<b);
			printf("\nGreater than : %d",a>b);
			printf("\nLess than equals to : %d",a<=b);
			printf("\nGreater than equals to : %d",a>=b);
			printf("\nNot equals to : %d",a!=b);
		}
		else if(ch==3)
		{
			printf("\n****Logical Operation****\n");
			printf("\nAnd : %d",a&&b);
			printf("\nOr : %d",a||b);
			printf("\nNot : %d",a!=b);
			
		}
		else if(ch==3)
		{
			printf("Thank you!!");
			break;
		}
		else
		{
			printf("Invalid Choice!!");
			break;
		}
	}
}
