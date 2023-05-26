#include <iostream>
using namespace std;
class matrix// user define class
{
private:
    int a[4], b[4], c[4];//Write a program of two ID Matrix addition using operator overloading
    int i;

public://Access modifier
    void values()//function name
    {
        
        cout<<"Enter 4 value to store in matrix A : ";
        for (i=0;i<4;i++)
        {
            cin>>a[i];
        }
    
        cout<<"Enter 4 value to store in matrix B : ";
        for (i=0;i<4;i++)
        {
            cin>>b[i];
        }
    }
    void display();
    void operator+();
};
void matrix::operator+()// function with operator
{
    for (i =0;i<4;i++)
    {
        c[i] = a[i]+b[i];
    }
}
void matrix::display()//function
{
    cout<<"---------------------------------------------"<<endl;
    cout<<"The matrix A is : ";
    for (i=0;i<4;i++)
    {
        cout<< " "<< a[i];
    }
    cout<<endl
         <<"---------------------------------------------"<<endl;
    cout<<endl
         << "The matrix B is : ";
    for (i=0;i<4;i++)
    {
        cout<< " "<< b[i];
    }
    cout<<endl
         <<"---------------------------------------------"<<endl;
    cout<<endl
         <<"The Addition of Matrix A and B is :";
    for (i=0;i<4;i++)
    {
        cout << " "<<c[i];
    }
    cout <<endl
         <<"---------------------------------------------"<<endl;
}
int main()
{
    matrix obj;
    obj.values();
    +obj;
    obj.display();
    return 0;
}