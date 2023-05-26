#include<iostream>
using namespace std;
class friends//User deifne class
{
private://Access modifier
    int a,b;//Write a program to swap the two numbers using friend function without using third variable
    friend void f1(friends);// use the friend function name
};
void f1(friends x)
{
    cout<<"Enter the number A"<<endl;
    cin>>x.a;
    cout<<"Enter the number B"<<endl;
    cin>>x.b;
    cout<<"After swapping A is = "<<x.a*x.b/x.a<<endl;
    cout<<"After swappinf B is = "<<x.b*x.a/x.b<<endl;
    
}
int main()
{
    friends obj;// Create an object
    f1(obj);
    return 0;
}
   