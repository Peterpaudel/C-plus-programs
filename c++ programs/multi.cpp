#include<iostream>
using namespace std;
int main()
{
	int n,i,multi;
	cout<<"Enter any number whos multiplication is req : "<<endl;
	cin>>n;
	for(i=1;i<=10;i++)
	{
		multi=n*i;
		cout<<n<<" * "<<i<<" = "<<multi<<endl;
	
	}
	return 0;
}
