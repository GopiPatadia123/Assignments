#include<stdio.h>
main()
{
	FILE *fptr;
	fptr = fopen("myfile.txt","w");
	fprintf(fptr,"Hello World!!");
	
	//Read the file

	if(fopen==NULL)
	{
		printf("Error..");
	}
	fclose(fptr);
}
