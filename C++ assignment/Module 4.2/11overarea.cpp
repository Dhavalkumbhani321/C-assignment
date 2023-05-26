#include<iostream>
#define PI 3.14;// define the pi value
using namespace std;//Write a program to calculate the area of circle, rectangle and triangle using function overloading
class areaofshape
{
    double area;//data type
    public://Access modifier

    void rectangle(int length,int breath)//function name
    {
        cout<<"--------------------------"<<endl;
        area=length*breath;
        cout<<"<the area of rectangle is " <<area<<endl;
    }

    void triangle(double length_triangle, double base)//function name
    {
        cout<<"-------------------------"<<endl;
        area=0.5*length_triangle*base;
        cout<<"the area of triangle is "<<area<<endl;
   }
   void  circle(double radius)//function name
   {
    cout<<"---------------------------"<<endl;
    area=radius*radius*PI;
    cout<<"the area of circle "<<area<<endl;
   }
  
};
int main()
{
      areaofshape obj;//Create the object
      obj.rectangle(4,5);
      obj.triangle(4.2,5.4);
      obj.circle(14.2);
      return 0;
      
}

