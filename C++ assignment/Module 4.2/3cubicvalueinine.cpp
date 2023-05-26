#include<iostream>
using namespace std;
inline void multiplication()//class name
{
    int a,b,mul;
    cout<<"enter the two values"<<endl;// Write a program to find the multiplication values and the cubic values using inline function
    cin>>a>>b;
    mul=a*b;
    cout<<"The multiplication is "<<mul<<endl;
    
};
   
        void cube()//function name
{
       int x,y;
       cout<<"enter the one value to find cube"<<endl;
       cin>>x;
       cout<<"the cube of "<<x<<" is "<<y<<endl;
}
int main()
{
      multiplication();
      cube();
      return 0;
}



