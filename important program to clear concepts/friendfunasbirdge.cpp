// wap to show friend function as bridge between two class
//define second class
//create first class   getdata funciton and create another friend functions showdata and pass object as (class obj)argument 
//create second class

#include<iostream>
using namespace std;
class newest_one;
class newone{
public:	
int x,y;

void getdata()
{
	cout<<"Enter x and y coordinate of x and y of first class : "<<endl;
	cin>>x>>y;
	
}
friend showdata(newone a, newest_one b);
		

};
// second class
class newest_one{

public:
void getdata(newone &a)
{
	cout<<"Enter x and y coordinate of x and y of second class : "<<endl;
	cin>>a.x>>a.y;
	
}
friend showdata(newone a, newest_one b);


// show data functin outside two class that coordinate of both class
void showdata(newone &b)
{
	cout<<"Coordinate after sum is : "<<b.x+b.y;
}
};

int main()
{
	newone l;
	newest_one m;
	l.getdata();
	m.getdata();
	m.showdata();
	return 0;
}

