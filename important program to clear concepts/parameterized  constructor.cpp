#include<iostream>
using namespace std;
class bank{
	int a;
	int b;
	public:
		bank(int x,int y)
		{
			a=x;
			b=y;
		}
    showdata();
};
bank::showdata()
{
	cout<<"x ="<<a<<endl;
	cout<<"y ="<<b;
}
int main()
{
	bank u1(6,7);
	u1.showdata();
	return 0;
}
