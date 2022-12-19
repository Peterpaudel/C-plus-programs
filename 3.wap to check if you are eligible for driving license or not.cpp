//wap to check if you are eligible for driving license or not
#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter your age : "<<endl;
	cin>>age;
	if(age>=18)
	{
		cout<<"You are eligible for driving license";
	}
	else
	{
		cout<<"You are not eligible for driving license";
	}
	return 0;
}
