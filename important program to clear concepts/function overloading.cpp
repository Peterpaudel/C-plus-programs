#include<iostream>
using namespace std;

float area(double x)
{ 
cout<<"area of circle"<<endl;
	return 3.14*x*x;
}
int area(int l,int b)
{
	cout<<"area of rectangle : "<<endl;
	return l*b;
}
int area(int b,double h)
{
	cout<<"area of triangle : "<<endl;
	return 0.5*b*h;
}

int main()
{
cout<<area(5.6)<<endl;
cout<<area(5,4)<<endl;
cout<<area(6,3.8);
}
