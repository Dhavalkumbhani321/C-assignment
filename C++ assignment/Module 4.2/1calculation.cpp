#include<iostream>
using namespace std;
class demo
{
    public://Access modifier
    int a,b,total;//Write a program to simple calculation for addition,substraction,multiplication and divison
    void sum()//function name
    {
    cout<<"enter the number of 1"<<endl;
    cin>>a;
    cout<<"enter the number of 2"<<endl;
    cin>>b;
    total=a+b;
    cout<<"enter the total is "<<total<<endl;
    }
    void substraction()//function name
    {
    cout<<"enter the number of 1"<<endl;
    cin>>a;
    cout<<"enter the number of 2"<<endl;
    cin>>b;
    total=a-b;
    cout<<"The total is "<<total<<endl;
    
    }

    void multiplication()//function name
    {
    cout<<"enter the number of 1"<<endl;
    cin>>a;
    cout<<"enter the number of 2"<<endl;
    cin>>b;
    total=a*b;
    cout<<"enter the total is "<<total<<endl;
    
    }

    void divison()//function name
    {
    cout<<"enter the number of 1"<<endl;
    cin>>a;
    cout<<"enter the number of 2"<<endl;
    cin>>b;
    total=a/b;
    cout<<"enter the total is"<<total<<endl;
    
    }

};

int main()
{
    int num;
    demo obj;
    dhaval:
   cout<<"press 1 for addition"<<endl<<"press 2 for substraction "<<endl<<"press 3 for multiplication"<<endl<<"press 4 for divison"<<endl;
    cin>>num;
    switch(num)//using switch case
    {
        case 1:
        obj.sum();
        break;

        case 2:
        obj.substraction();
        break;

        case 3:
        obj.multiplication();
        break;

        case 4:
        obj.divison();
        break;

        default:
        cout<<"please enter the valid number"<<endl;
        goto dhaval;
        break;
}    
       return 0;
    
    }
