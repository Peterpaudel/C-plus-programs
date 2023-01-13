//create a class name swapping two number using concept of pass by reference in a function named as swap
#include<iostream>
using namespace std;
class swapping{
	public:
	swap(int &a, int &b)
	{
		int temp;
		temp=a;
		a=b;
		b=temp;
		cout<<"after swapping a and b are : "<<endl;
		cout<<a<<"  "<<b<<endl;
	}
	beforeswap(int a,int b)
	{
	cout<<"before swapping a and b are : "<<endl;
	cout<<a<<" "<<b<<endl;
	}
};
int main()
{
	swapping s;
	int a=10;
	int b=20;
	s.swap(a,b);
	s.beforeswap(a,b);
	return 0;
}
