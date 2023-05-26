#include <iostream>
using namespace std;
class concatenate//An class
{
private:
    string a, b, c;// Write a program to concatenate the two string using operator overloading

public://Access modifier
    void data()//function name
    {
        
        cout<<"Enter you name :"<<endl;
        cin>>a;
        cout << "enter your surname :"<<endl;
        cin>>b;
        
    }
    void operator+();
    void display();
};
void concatenate::operator+()//operator sign
{
    c = a + b;
}
void concatenate::display()
{
    
    cout <<"Your full name is :"<< c <<endl;
}
int main()
{
    concatenate obj;
    obj.data();
    +obj;
    obj.display();
    return 0;
}