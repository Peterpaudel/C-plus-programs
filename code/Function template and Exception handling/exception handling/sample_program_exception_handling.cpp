//program which handle exception
#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter number for factorial"<<endl;
cin>>n;
int facto=1;
//when user enter 0 program throw exception
try{
    if (n==0)
    {
        throw 1;
    }
    else
    {
        for (int i=1;i<=n;i++)
        {
            facto = facto*i;
        }
        cout<<"Factorial is: "<<facto;
        return 0;
    }
}
//catching excetion
catch(int e)
{
cout<<"Factorial is : "<<e;
}

}
