#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{
	ofstream fout; //creating ofstream obj to write
	fout.open("file.txt");
	fout<<"Hello world";
	fout.close();
	getch();
}
