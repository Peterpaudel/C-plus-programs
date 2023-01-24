//constructor 
#include<iostream>
using namespace std;
class bank{
	double money;
	char name[30];
	public:
	//defining constructor
	bank();
	void showdata();
	
};

bank::bank(){
	money=0;
	cout<<"Enter your  name"<<endl;
	cin>>name;
}
void bank:: showdata(){
	cout<<"Account creation success"<<endl;
	cout<<"Name : "<<name<<endl;
	cout<<"Balance : "<<money<<endl;
}


int main()
{
	bank user1; //constructor will get initialized automatically
	user1.showdata();
	return 0;
}
