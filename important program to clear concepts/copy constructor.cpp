#include<iostream>
using namespace std;
class copy{
	int a,b;
	public:
	copy(int x ,int y)
	{
		a=x;
		b=y;
	}
	copy(copy &obj1)
	{
		int c,d;
		c=obj1.a;
		d=obj1.b;
		cout<<"Copy const is executed : "<<endl;
		cout<<c<<" "<<d;
		
	}
};
int main()
{
	copy obj1(5,6);
	copy obj2(obj1);
	return 0;
}
