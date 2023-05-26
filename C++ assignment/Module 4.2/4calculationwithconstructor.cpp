#include <iostream>
using namespace std;
class calculator// user define class
{

    int a, b;//Write a program of addition, substraction,divison,multiplication using constructor
    public://Access modifier
    calculator(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()//function name
    {
        cout<<"---------------------------------------------"<<endl;
        cout<<"Value A is " << a << " and value B is " << b <<endl;
    }
    void addition()//function name
    {
        
        int sum = a+b;
        cout<<"Summation of " << a << " And " << b << " is : "<<sum<<endl;
    }
    void substraction()//function name
    {
        
        int sub = a-b;
        cout<<"Substraction of " << a << " And " << b << " is : "<<sub<<endl;
    }
    void multiplication()//function name
    {
        
        int mul = a*b;
        cout<<"Multiplication of " << a << " And " << b << " is : "<<mul<<endl;
    }
    void division()//function name
    {
        
        float div = (float)a / b;
        cout<<"Division of " << a << " And " << b << " is : "<< div <<endl;
        cout<<"---------------------------------------------"<<endl;
    }
};
int main()
{
    calculator obj(20, 50);//create an object
    obj.display();
    obj.addition();
    obj.substraction();
    obj.multiplication();
    obj.division();
    return 0;
}