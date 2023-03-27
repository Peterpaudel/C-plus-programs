//sample program for template function
#include<iostream>
using namespace std;
//template function for two different data type arg
template <class X, class Y>
Y max(X a, Y b)
{
if (a > b)
{
    return a;
}
else
{
    return b;
}
}
int main()
{
    cout<<max(7,7.7);//initiate max(int,double)
    return 0;
}
