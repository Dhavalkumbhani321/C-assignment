#include<iostream>
using namespace std;
class person//base class
{
    public://Write a program to create a class person having members name and age. derive a class student having member percentage. derive another class teacher having member salary.write necessary member function to initialize read and write data. using multiple inheritance
    int age;
    string name;
    void persondetails()//function name
    {
        cout<<"enter your name"<<endl;
        cin>>name;
        cout<<"enter you age"<<endl;
        cin>>age;
    }
    void printpersondetails()//function name
    {
        cout<<"your name is"<<name<<endl;
        cout<<"your age is"<<age<<endl;
    }
};
class student//derive class
{ 
    public:
    double percentage;
    void personpercentage()
    {
        cout<<"enterr your percentage"<<endl;
        cin>>percentage;
    }
    void printpercentage()
    {
        cout<<"your percentage is"<<percentage<<endl;
    }
};
class teacher :public person,public student//derive class
{ 
    public:
    int value;
    void salary()
    {
        cout<<"enter your salary"<<endl;
        cin>>value;
    }
    void printsalary()
    {
    cout<<"your salary is"<<value<<endl;

    }
};
int main()
{
    teacher Teacher;//call the object
    Teacher.persondetails();
    Teacher.personpercentage();
    Teacher.salary();
    Teacher.printpersondetails();
    Teacher.printpercentage();
    Teacher.printsalary();
    return 0;
}
 

 
    