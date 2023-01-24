#include<iostream>
using namespace std;
class student{
	int x,y,id;
	public:
		//default constructor
	student()
	{
		cout<<"Default constructor"<<endl;
		id=5;
	}
	//parametrized constructor
	student(int x)
	{
		cout<<"Parametrized constructor"<<endl;
		id=x;
 }
 //copy constructor
	student(student &s)
	{
		cout<<"Copy constructor "<<endl;
		id=s.id+5;
	}
	void showdata()
	{
		cout<<"Id is : "<<id<<endl;
		
	}
};
int  main()
{
	student obj1;
	obj1.showdata();
	
	//parametrized constructor
	student obj2(10);
	obj2.showdata();
	
	//copy constructor
	student obj3(obj2);
	obj3.showdata();
	
	return 0;
	
}
