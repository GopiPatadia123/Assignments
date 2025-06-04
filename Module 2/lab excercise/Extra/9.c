#include<stdio.h>
main()
{
	int a[2][2];
	int b[2][2];
	int i,j;
	
	printf("*******A********\n");
	for(i=0;i<2;i++)//row
	{
		for(j=0;j<2;j++)//cols
		{
			printf("Enter Elements : ");
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<2;i++)//row
	{
		for(j=0;j<2;j++)//cols
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	
	printf("*******B********\n");
	for(i=0;i<2;i++)//row
	{
		for(j=0;j<2;j++)//cols
		{
			printf("Enter Elements : ");
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<2;i++)//row
	{
		for(j=0;j<2;j++)//cols
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	
	printf("*******Addition********\n");
	
	for(i=0;i<2;i++)//row
	{
		for(j=0;j<2;j++)//cols
		{
			printf("%d\t",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
	
}
