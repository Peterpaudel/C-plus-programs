/*WAP that asks an arithmetic operator & performs the corresponding operation
on the operand (extra)*/
#include<iostream>
using namespace std;
int main()
{
	float a,b;
	int sum,diff,multi;
	float div;
	char op;
	cout<<"Enter any two numbers:"<<endl;
	cin>>a>>b;
	cout<<"Enter the operation to be performed"<<endl;
	cin>>op;
	switch (op)
	{
		case '+':
			sum=a+b;
			cout<<"The sum is "<<sum;
			break;
		case '-':
			diff=a-b;
			cout<<"The difference is "<<diff;
			break;
		case '*':
			multi=a*b;
			cout<<"The multiplication is "<<multi;
			break;
		case '/':
			div=a/b;
			cout<<"The divison is "<<div;
			break;
		default:
			cout<<"Invalid choice";
			break;
			
	}
	return 0;
}
