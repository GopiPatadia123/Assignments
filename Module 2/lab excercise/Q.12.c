#include<stdio.h>

struct students{
	char name[50];
	int rollno;
	float marks;
};

main()
{    
    struct students s1[3];
    int i;
    
    for (i=0;i<3;i++) 
	{
        printf("Enter details for student %d:\n", i + 1);

        printf("Enter Name: ");
        scanf("%s",&s1[i].name); 

        printf("Enter Roll Number: ");
        scanf("%d",&s1[i].rollno); 
        
        printf("Enter Marks: ");
        scanf("%f",&s1[i].marks);
        
        printf("\n");
    }

    printf("\nStudent Details:\n");
    for (i=0;i<3;i++) 
	{
        printf("Student %d:\n", i + 1);
        printf("Name Is : %s\n",s1[i].name); 
        printf("Roll Number Is : %d\n",s1[i].rollno); 
        printf("Marks Is : %.2f\n",s1[i].marks);
    }

}

