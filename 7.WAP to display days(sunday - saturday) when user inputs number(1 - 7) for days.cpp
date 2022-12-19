//WAP to display days(sunday - saturday) when user inputs number(1 - 7) for days
#include<iostream>
using  namespace std;
int main()
{
	int day;
	cout<<"Select days from 1-7"<<endl;
	cin>>day;
	switch (day)
	{
		case 1:
			cout<<"sunday";
			break;
		case 2:
			cout<<"Monday";
			break;
		case 3:
			cout<<"Tuesday";
			break;
		case 4:
			cout<<"Thursday";
			break;
		case 5:
			cout<<"Wednesday";
			break;
		case 6:
			cout<<"Friday";
			break;
		case 7:
			cout<<"Saturday";
		default:
			cout<<"Invalid";
			}
			return 0;
}
