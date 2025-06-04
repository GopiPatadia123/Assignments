#include<stdio.h>
main()
{
	char a[10];
	char b[10];
	
	printf("Enter name 1 : ");
	gets(a);
	printf("Enter Name 2 : ");
	gets(b);
	
	strcat(a,b);
	
	printf("Merge String is : %s\n",a);	
	printf("Length Of Concatnated String is : %d",strlen(a));
}
