#include<iostream>
using namespace std;
main()
{
	int marks;
	char name;
	
	cout<<"Enter marks : ";
	cin>>marks;

	
	if(marks>=90)
	{
		cout<<"GRADE A";
	}
	else if(marks<=90 && marks>=75)
	{
		cout<<"GADE B";
	}
	else if(marks<=75 && marks>=65)
	{
		cout<<"GRADE C";
	}
	else 
	{
		cout<<"GRADE D";
	}
}
