#include<stdio.h>
main()
{
	int a[]={10,9,25,63,56,45,34,22,11,6};
	int i;
	int max=a[10];
	int min=a[10];

	for(i=1;i<10;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		if(a[i]<min)
		{
			min=a[i];
		}
	}

}
