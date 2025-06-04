#include<stdio.h>
main()
{
	int marks,grade;
	
	printf("\nEnter Marks : ");
	scanf("%d",&marks);
	
	if(marks>90)
	{
		printf("GRADE A");
	}
	else if(marks>75 && marks<=90)
	{
		printf("GRADE B");
	}
	else if(marks>50 && marks<=75)
	{
		printf("GRADE C");
	}
	else if(marks<=50)
	{
		printf("GRADE D");
	}
	else
	{
		printf("FAIL");
	}
}
