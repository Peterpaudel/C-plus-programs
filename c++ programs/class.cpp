#include<iostream>
using namespace std;
class time{
	public:
		int hr,min,sec;
		void gettime();
		void addtime();
		void showtime();
};
void time::gettime()
{
cout<<"Enter time in hrs,min,sec"<<endl;
cin>>hr>>min>>sec;
}
void time::addtime(time t1,time t2)
{
	sec=t1.sec+t2.sec;
	min+=sec/60;
	sec=sec%60;
	min=t1.min+t2.min;
	hr+=min/60;
	min=min%60;
	hr=t1.hr+t2.hr;
	
	
}
void time::showtime(int hr,int min,int sec)
{
	cout<<"/n";
	cout<<"Added time is : "<<endl;
	cout<<hr<<":"<<min<<":"<<sec;
}
int main()
{
	time t1,t2,t3;
	t1.gettime();
	t2.gettime();
	t3.addtime();
	t3.showtime();
	return 0;
	
	
	
}
