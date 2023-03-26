//destructor in inheritance
#include<iostream>
#include<conio.h>
using namespace std;
class A{
	public:
		A()
		{
			cout<<"constructor from A"<<endl;
		}
		~A()
		{
			cout<<"Destructor from A"<<endl;
		}
};
class B:public A
 {
	public:
		B()//:A() this line is defaultly executed by complier
		{
			cout<<"consturcor from B"<<endl;
		}
		~B()
		{
			cout<<"Destructor from B"<<endl;
			//~A() this line is executed by complier so derived class destructor got first execution
		}	
};
int main()
{
	B obj;
	
	return 0;
}
