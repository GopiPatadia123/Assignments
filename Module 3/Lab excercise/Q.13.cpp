#include<iostream>
using namespace std;

class Bank{
	public:
		
		int balance=5000;
		int de,we;
		
		deposite()
		{
			cout<<"Enter Amount for Deposite : ";
			cin>>de;
			
			balance = balance+de;
			
			cout<<"Your deposite amount is : "<<de<<endl;
		}
		withdraw()
		{
			cout<<"Enter Amount for Withdraw : ";
			cin>>we;
			if(we>balance)
			{
				
				cout<<"Insufficient Balance"<<endl;
				balance=we-balance;
				cout<<"Missing amount is "<<balance<<endl;
			}
			
			else
			{
				balance = balance-we;
				cout<<"Your withdraw amount is : "<<we<<endl;
			}
		}
		check_balance()
		{
			cout<<"Your Balance is : "<<balance<<endl;
		}
};

main()
{
	Bank obj;
	int ch;
	cout<<"Enter Choice : ";
	cin>>ch;
	
	if(ch==1)
	{
		while(1)
		{
			cout<<"press 1 for Deposite"<<endl;
			cout<<"press 2 for Withdraw"<<endl;
			cout<<"press 3 for Check Balance"<<endl;
			cout<<"press 4 for Exit"<<endl;
			
			int ch1;
			cout<<"Enter Choice : ";
			cin>>ch1;
			if(ch1==1)
			{
				obj.deposite();
			}
			else if(ch1==2)
			{
				obj.withdraw();
			}
			else if(ch1==3)
			{
				obj.check_balance();
			}
			else if(ch1==4)
			{
				cout<<"Thank you!!";
				break;
			}
			else
			{
				cout<<"Invalid Choice";
				break;
			}
		}
	}
	else
	{
		cout<<"Thnk you!!";
	}
}
