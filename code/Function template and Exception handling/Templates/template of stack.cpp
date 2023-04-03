#include<iostream>
using namespace std;
template <class T>
class Stack
{
    private:
     int top;
     T arr[5];
    public:
     Stack()
     {
         top = -1;
         for (int i=0;i<5;i++)
         {
             arr[i] = "";
         }
     }
     void push(T val)
     {
         
        if (top == 4)
        {
        	cout<<"Stack overflow condition"<<endl;
		}
		else
		{ 
		top++;
		arr[top]=val;
		}
     }
     T pop()
     {
         if (top == -1)
         {
             cout<<"stack underflow condition";
         }
         else
         {
         	T popval = arr[top];
            arr[top] = "";
            top--;
            return popval;
		 }
     }
    void show()
    {
        cout<<"Stack is : "<<endl;
        for(int i=4;i>=0;i--)
        {
            cout<<arr[i]<<endl;
        }
    }
     

};
int main()
{
    Stack<string> s;
    s.push("hello");
    s.push("above hello");
    s.push("i am invisible");
    s.pop();
 
    s.show();
    return 0;
}
