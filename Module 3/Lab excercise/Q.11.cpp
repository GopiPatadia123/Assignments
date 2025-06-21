#include<iostream>
using namespace std;
main()
{
	int i,j;
	for(i=1;i<=5;i++)		//row
	{
		for(j=1;j<=i;j++)		//column
		{
			cout<<"*";
		}
		cout<<"\n";
	}
}
