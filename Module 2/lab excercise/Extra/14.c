#include<stdio.h>

reverseString(char str[])
{
	int i,j,temp;
	int length=strlen(str);	
	for(i = 0, j = length - 1; i < j; i++, j--)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
	}
}

main()
{
	char str[100];
	printf("Enter String : ");
	scanf("%s",str);
	reverseString(str);
	printf("Reversed String : %s\n",str);
}
