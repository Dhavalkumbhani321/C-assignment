#include<iostream>
using namespace std;
class friends// User define class
{
private://Access modifier
 int a,b;// Write a program to find the max number from given two number using friend function
 friend int f1(friends);// use the friend function name
};


int f1(friends x)
{
    cout<<"Enter the number A"<<endl;
    cin>>x.a;
    cout<<"Enter the number B"<<endl;
    cin>>x.b;
    if (x.a>x.b)
    {
        cout<<"A is max number"<<endl;
    }
    else
    {
        cout<<"B is max number"<<endl;
    }
    
}
int main()
{
    friends obj;// An object
    cout<<f1(obj);
    return 0;
}