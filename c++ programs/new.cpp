#include<iostream>
using namespace std;
class student {
	public:
		int rollno;
		char name[20];
		void getdata();
		void showdata();
	
};
	void student::getdata()
		{
			cout<<"enter rollno"<<endl;
			cin>>rollno;
			cout<<"enter name"<<endl;
			cin>>name;
		}
			void student::showdata()
			{
				cout<<"rollno is "<<rollno<<endl;
				cout<<"name is"<<name<<endl;
			}
		

int main()
{
	student s;
	s.getdata();
	s.showdata();
	return 0;
}
