//wap to display your name,address and age
#include<iostream>
using namespace std;
int main()
{
	char name[50];
	char address[50];
	int age;
	cout<<"Enter your name : "<<endl;
	cin>>name;
	cout<<"Enter your address :"<<endl;
	cin>>address;
	cout<<"Enter your age : "<<endl;
	cin>>age;
	cout<<name<<endl<<address<<endl<<age;
	return 0;
}
