#include<iostream>
using namespace std;
class add{
	public:
	void addition(int*x,int*y)
	{
		int sum;
		sum=*x+*y;
		cout<<"Sum is : "<<sum<<endl;
	}
};
int main()
{
	add x;
	int a,b;
	cout<<"enter any two numbers : "<<endl;
	cin>>a>>b;
	cout<<"\n";
	x.addition(&a,&b);
	return 0;
}
