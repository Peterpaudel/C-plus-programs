//object as return type
//find the greatest number among two values entered.
#include<iostream>
using namespace std;
class number{
	public:
		int x,y;
		void getdata()
		{
			cout<<"Enter any two numbers : "<<endl;
			cin>>x;
			cin>>y;
		}
	number greatest(number n)
	{
		if(n.x>n.y)
		{
			cout<<n.x<<" is greatest .";
		}
		else
		{
			cout<<n.y<<" is greatest .";
		}
	}
	
};
int main()
{
	number n,n2;
	n.getdata();
	n2.greatest(n);
	
	return 0;
}

