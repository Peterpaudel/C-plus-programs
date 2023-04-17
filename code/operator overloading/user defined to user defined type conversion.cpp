#include<iostream>
using namespace std;
class Destinationtype;
class Sourcetype
{
	public:
	int x,y;

		operator Destinationtype()
		{
			Destinationtype d;
			d.m = x;
			d.n = y;
			return d;
		}
};
class Destinationtype
{
	public:
	int m,n;
	
		operator Sourcetype()
		{
			Sourcetype s;
			s.x = m;
			s.y = n;
			return s;
		}
		
	
};
void Destinationtype::setdata(int a,int b)
{
	m=a;
	n=b;
}
void Desintationtype::showdata()
{
	cout<<m<<" "<<n;
}
int main()
{
	Destinationtype a1;
	Sourcetype a2;
	a1.setdata(4,5);
	return 0;
}
