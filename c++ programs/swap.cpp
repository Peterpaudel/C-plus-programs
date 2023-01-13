#include<iostream>
using namespace std;
void max(int a, int b)
{
	(a>b)?cout<<"greatest is "<<a :cout<<"greatest is "<<b;
}
void max(int a, int b, int c)
{
	if(a>b && a>c)
	{ 
	cout<<" Greatest is "<<a;
	}
	else if(b>a && b>c)
	{
		cout<<"Greatest is "<<b;
	}
	else
	{ 
	cout<<"Greatest is "<<c;
	}
}
int main()
{
	max(9,6);
	max(6,89,5);
}
