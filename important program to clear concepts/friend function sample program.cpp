//friend function
#include<iostream>
using namespace std;

class sample{
	int x=10;
	int y=20;
	public:
	friend fun(sample);
	
	
};
fun(sample s)
	{
		cout<<s.x<<" "<<s.y;
	}
int main()
{
	sample s1;
	fun(s1);
	return 0;
}
