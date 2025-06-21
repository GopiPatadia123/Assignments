#include<iostream>
using namespace std;
main()
{
	int a,b;
	cout<<"Enter A  :";
	cin>>a;
	
	cout<<"Enter B : ";
	cin>>b;
	
	while(1)
	{
		cout<<"\nPress 1 for Arithmatic Operation!!";
		cout<<"\nPress 2 for Relational Opration!!";
		cout<<"\nPress 3 for Logical Opration!!";
		cout<<"\nPress 4 for Exit!!";
		
		int ch;
		cout<<"\nEnter Choice : ";
		cin>>ch;
		
		if(ch==1)
		{
			cout<<"\n****Arithmatic Operation****\n";
			cout<<"\nAddition : "<<a+b<<endl;
			cout<<"\nSubtraction : "<<a-b<<endl;
			cout<<"\nMultiplication : "<<a*b<<endl;
			cout<<"\nDivison : "<<a/b<<endl;
		}
		else if(ch==2)
		{
			cout<<"\n****Relational Operation****\n";
			//cout<<"\nEquals to : "<<a==b<<endl;
			cout<<"\nLess than : "<<endl;
			cout<<"\nGreater than : "<<endl;
			cout<<"\nLess than equals to : "<<endl;
			cout<<"\nGreater than equals to : "<<endl;
			cout<<"\nNot equals to : "<<endl;
		}
		else if(ch==3)
		{
			cout<<"\n****Logical Operation****\n";
			cout<<"\nAnd : "<<endl;
			cout<<"\nOr : "<<endl;
			cout<<"\nNot : "<<endl;
			
		}
		else if(ch==3)
		{
			cout<<"Thank you!!";
			break;
		}
		else
		{
			cout<<"Invalid Choice!!";
			break;
		}
	}
}
