//ambguity in multipath inheritance
#include<iostream>
using namespace std;

class A{
	public:
		void showa()
		{
			cout<<"From class A"<<endl;
		}
};
//using virtual function to solve ambguity
class B:virtual public A{
	public:
		void showb()
		{
			cout<<"From class B"<<endl;
		}
};
class C:virtual public A{
	public:
		void showc(){
			cout<<"From class C"<<endl;
		}
};
class D:public B,public C{
	public:
		void showd(){
			cout<<"From class D"<<endl;
		}
};
int main()
{
	D d;
	d.showa();
	d.A::showa();//using scope resolution to solve ambguity
	return 0;
}


