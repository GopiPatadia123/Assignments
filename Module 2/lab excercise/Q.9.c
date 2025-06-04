#include<stdio.h>
main()
{
	int a[5],i,j;
	int b[3][3],sum=0;
	printf("****ARRAY****");
	for(i=0;i<5;i++)
	{
		printf("\nEnter Elements : ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\nArray Elements Are : %d",a[i]);
	}
	printf("\n\n****ARRAY MATRIX****");
	for(i=0;i<3;i++)//row
	{
		for(j=0;j<2;j++)//cols
		{
			printf("\nEnter Elements : ");
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<3;i++)//row
	{
		for(j=0;j<2;j++)//cols
		{
			printf("\nElements Are : %d",b[i][j]);
		}
	}
	printf("\n\n****SUM OF ARRAY****");
	for(i=0;i<3;i++)
	{	
		sum=sum+a[i];
	}
	printf("\nSum of array %d",sum);	
}
