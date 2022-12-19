/*WAP where user inputs the number(0 - 100) to check grade of a student
hint:
num >= 90 A+ grade
num >= 80 A grade
num >= 70 B grade
num >= 60 C grade
num >= 50 D grade
num <50 && num >=0 Non Graded(NG)
num < 0 || num > 100 wrong number*/

#include<iostream>
using namespace std;
int main()
{
	int per;
	cout<<"Enter your percentage : "<<endl;
	cin>>per;
	if(per>100||per<0)
	{
		cout<<"wrong number";
	}
	else if(per>=90)
	{
		cout<<"A+ grade";
	}
	else if(per>=80)
	{
		cout<<"A grade";
	}
	else if(per>=70)
	{
		cout<<"B grade";
	}
	else if(per>=60)
	{
		cout<<"C grade";
	}
	else if(per>=50)
	{
		cout<<"D grade";
	}
	else if(per<50&&per>=0)
	{
		cout<<"Non graded";
	}
	return 0;
}
