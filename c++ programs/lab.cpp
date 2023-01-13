#include<iostream>
using namespace std;
int main()
{
	int i,n,sum;
	cout<<"Enter n natural number :"<<endl;
	cin>>n;
	for(i=0;i<=n;i++)
	{
		sum+=i;
	}
	cout<<"sum is :"<<sum<<endl;
	return 0;
}
