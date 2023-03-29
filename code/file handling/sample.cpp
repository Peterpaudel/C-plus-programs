#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{
	ifstream fin;
	char ch;
	fin.open("file.txt");
	ch = fin.get();
	while(!fin.eof())
	{
		cout<<ch;
		ch = fin.get();
	}
	fin.close();
	getch();
}
