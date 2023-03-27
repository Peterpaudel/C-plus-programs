//wap using multiple catch statement


#include<iostream>
#include<string>
using namespace std;
void fun(int a)
{
try
	{
	
	if (a == 0)
	 {
	 	throw 0;//int
	 }
	if (a == 1)
	{
		throw "hello";//string
	}
    }
catch(int e)//catching int 
	{
		cout<<"Exception has occured "<<e<<endl;
	}
catch(const char* e)//catching string
	{
		cout<<e<<endl;
	}

}
int main()
{
	fun(0);
	fun(1);
	
	return 0;
}
