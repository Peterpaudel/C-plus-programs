//wap a program that catch any type of exception.
//we use three dots in catch argument to catch any type of exception catch(...)

#include<iostream>
using namespace std;
void fun(int a)
{
	if (a == 0)
	 {
	 	throw 0;//throwing int
	 }
	if (a == 1)
	{
		throw 'one';//throwing string
	}
}
int main()
{
	try{
		fun(0);
		fun(1);
	}
	catch(...)//this is use to catch any exception either it is int or string
	{
		cout<<"Exception has occured"<<endl;
	}
	return 0;
}
