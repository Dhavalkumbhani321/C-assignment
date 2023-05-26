#include <iostream>
using namespace std;
class overloading//make a class 
{
public://Access modifier
    void calculation(int a,int b)//Write a program to mathematic operation like addition,substraction,multiplication and divison of two number using different parameters and function overloading
    {
        cout<<"---------------------------------------------"<<endl;
        cout<<"Summation  is: " <<a+b<<endl;
    }
    void calculation(int a,int b, int c)
    {
        cout<<"--------------------------------------------"<<endl;
        cout<<"Substraction is : " <<(a+b)-c <<endl;
    }
    void calculation(double a,double b,double c,double d)
    {
        cout<<"---------------------------------------------"<<endl;
        cout<<"Divion  is : 1"<<(a*b)/(c*d)<<endl;
    }
    void calculation(int a,int b,int c,int e, int f ,int g)
    {
        cout<<"---------------------------------------------"<<endl;
        cout<<"Multiplication is : " <<(a+b+c)*(e+f+g)<<endl;
    }
};
int main()
{
    overloading obj;//create an object
    obj.calculation(16,18);
    obj.calculation(12,20,30);
    obj.calculation(25,5,50,10);
    obj.calculation(10,20,30,40,50,60);
    return 0;
}