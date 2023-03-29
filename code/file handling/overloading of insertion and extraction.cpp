//wap to overload insertion and extraction function
#include<iostream>
using namespace std;
class Complex{
	int real,imag;
	public:
	Complex(int r=0,int i=0)//const that initializes
	{
		real = r;
		imag = i;
	}
	//overloading as global
	friend istream &operator >>(istream &in, Complex &c);
	friend ostream &operator <<(ostream &out, Complex &c);
};
//defining of overloading function
istream &operator >>(istream &in, Complex &c)
{
	cout<<"Enter the real part"<<endl;
	in>>c.real;
	cout<<"Enter the imaginary part"<<endl;
	in>>c.imag;
	return in;
}

ostream &operator <<(ostream &out, Complex &c)
{
	out<<c.real;
	out<<" + i"<<c.imag<<endl;
	return out;
}

int main()
{
	Complex c1;
	cin>>c1;//overloading of extraction get called
	cout<<c1;//overloading of insertion get called
	return 0;
	
	
}

