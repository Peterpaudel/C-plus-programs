#include<iostream>
using namespace std;
class second;
class first;
class first{
	int data1;
	public:
		void setdata(int x)
		{
			data1=x;
		}
		friend sum(first a, second b);//declaration of friend fun
};
class second
{
	int data2;
	public:
		void setdata(int y)
		{
			data2=y;
		}
		friend sum(first a, second b);//declaration of friend fun
};
int sum(first a, second b)
{
	return(a.data1+b.data2);
}
int main()
{
	first a;
	second b;
	a.setdata(5);
	b.setdata(20);
	cout<<"Sum of two class is : "<<sum(a,b);
	return 0;
	
}
