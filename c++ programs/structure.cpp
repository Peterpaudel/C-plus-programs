#include<iostream>
using namespace std;
struct first{
	int a,b,sum;
	void getdata()
	{
		cout<<"Enter any two numbers : "<<endl;
		cin>>a>>b;
	}
	void showdata()
	{
		cout<<"Entered numbers are : "<<endl;
		cout<<a<<b;
	}
	void add(first f1, first f2)
	{
		a=f1.a+f2.a;
		b=f1.b+f2.b;
	}
	void showadd()
	{
		cout<<"SUm is  : "<<a<<b;
	}
	
};
int main()
{
	first f1,f2,f3;
	cout<<"Enter the values of coordinate a and b : "<<endl;
	f1.getdata();
	f2.getdata();
	cout<<"The coordinated are : "<<endl;
	f1.showdata();
	f2.showdata();
	cout<<"THE sum is : "<<endl;
	f3.add(f1,f2);
	return 0;
	
	
}
