#include<stdio.h>
main()
{
	int i;
	
	for(i=0;i<=10;i++)
	{
		if(i==3)
		{
			continue;
		}
		else if(i==5)
		{
			break;
		}
		else
		{
			printf("\n%d",i);
		}
	}
}
