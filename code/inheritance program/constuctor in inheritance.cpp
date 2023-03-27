//wap to demonstrante constructor in cpp
#include<iostream>
#include<conio.h>
using namespace std;
class A
{
private:
	int x;
public:
	A(int i) //parameterized constructor
	{
		x=i;
	}
void show_x()
{
	cout<<"x = "<<x<<endl;
}
};
class B:public A
{
private:
int y;
public:
B(int i, int j):A(i)//parameterized constructor with base class parameterized constructor
{ 
y=j;	
}
void show_y()
{
	cout<<"y = "<<y<<endl;
	}	
};
int main()
{
	B obj(5,3);
	obj.show_x();
	obj.show_y();
	return 0;
}


