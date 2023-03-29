//reading from file
#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{
	ifstream fin;
	char ch;
	fin.open("file.txt");
	ch = fin.get();//get is used instead of exertion because get read whitespaces too
	while(!fin.eof())
	{
		cout<<ch;
		ch = fin.get();
	}
	fin.close();
	getch();
}
