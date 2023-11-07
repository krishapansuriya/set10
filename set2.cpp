#include<iostream>
#include<string.h>
using namespace std;
main()
{
	int a,b,c;
	char data[100] = "can not devide by zero.";
	cout<<"Enter value A=";
	cin>>a;
	cout<<"Enter value B=";
	cin>>b;
	try{
		if(b>0)
		{
			c=a/b;
			cout<<"Ans = "<<c<<endl;
		}
		else 
		{
			throw a;
		}
	}
	catch(...)
	{
		cout<<data<<endl;
	}
}
