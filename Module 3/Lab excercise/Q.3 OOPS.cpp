#include<iostream>
using namespace std;
class Ractangle{
	public: 
		int height,width,area;
		Displayarea()
		{
			cout<<"Enter Height";
			cin>>height;
			
			cout<<"Enter Width";
			cin>>width;
		}
		Calculatearea()
		{
			area=height*width;
		}
};
main()
{
	Ractangle ract;
	ract.Displayarea();
	ract.Calculatearea();
}
