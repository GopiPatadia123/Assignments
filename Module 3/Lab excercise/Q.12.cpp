#include<iostream>
using namespace std;

class Calculator{
	public: 
		int a,b;
		add()
		{
			cout<<"Enter A : ";
			cin>>a;
			cout<<"Enter B : ";
			cin>>b;
			
			cout<<"Addition :"<<a+b<<endl;
		}
		sub()
		{
			cout<<"Enter A : ";
			cin>>a;
			cout<<"Enter B : ";
			cin>>b;
			
			cout<<"Subtraction :"<<a-b<<endl;
		}
		mul()
		{
			cout<<"Enter A : ";
			cin>>a;
			cout<<"Enter B : ";
			cin>>b;
			
			cout<<"Multiplication :"<<a*b<<endl;
		}
		div()
		{
			cout<<"Enter A : ";
			cin>>a;
			cout<<"Enter B : ";
			cin>>b;
			
			cout<<"Division :"<<a/b<<endl;
		}
};
main()
{
	Calculator obj;
	obj.add();
	obj.sub();
	obj.mul();
	obj.div();
}
