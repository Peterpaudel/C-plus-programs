#include<iostream>
using namespace std;
class Example{
	public:
		int a;
	Example add(Example Ea,Example Eb)
	{
		Example Ec;
		Ec.a=E.a+Eb.a;
		return Ec;
	}
	
};
int main()
{
	Example E1,E2,E3;
	E1.a=1011;
	E2.a=20;
	E3.a=9;
	E3=E3.add(E1,E2);
	cout<<E3.a;
	return 0;
}
