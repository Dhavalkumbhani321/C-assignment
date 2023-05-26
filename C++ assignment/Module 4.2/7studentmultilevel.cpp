#include <iostream>//header file
using namespace std;
class student
{
    public://Access modifier
    int roll_no;// Data type

     public:
    void student_num()//Write a program to students are stored in three different types of class. class student stored roll number,class test stored marks obtained in two subjects and class result contain the total marks obtain in the test. the class result can inherit with multilevel inheritance.
    {
        cout<<"---------------------------"<<endl;
        cout<< "enter your roll number : ";
        cin>> roll_no;
    }
};
class test : public student
{
    public:
    int maths, science;

    public:
    void class_test()//function name
    {
        cout<< "-------------------------------------------"<<endl;
        cout<<"Enter the marks obtain in Maths"<<endl;
        cin>>maths;
        cout<<"Enter the marks obtain in Science"<<endl;
        cin>>science;
    }
};
class result : public test
{
    int total_marks;

public:
    void class_result()//function name
    {
        total_marks = maths + science;
    }
    void display()//function name
    {
        cout<<"---------------------------------------------"<<endl;
        cout<<"The given marks are the marks of Roll Number "<< roll_no  << "|||"<<endl;
        cout<<"The marks obtain in maths is "<< maths <<endl;
        cout<<"The marks obtain in science is "<< science << endl;
        cout<<"The test of total marks are "<< total_marks<<endl;
    }
};
int main()
{
    result obj;
    obj.student_num();
    obj.class_test();
    obj.class_result();
    obj.display();
    return 0;
}