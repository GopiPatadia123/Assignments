#include<stdio.h>
main()
{
	int a[5];
	int i,sum=0,n,avg=0;
	
	printf("Enter The number of Elements : ");
	scanf("%d",&n);
	
	printf("Enter %d numbers : \n",n);
			
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum += a[i];
	}	
	
	printf("\nSum of array %d",sum);
	
	avg=sum/n;
	printf("\nAvarage of number %d",avg);
}

