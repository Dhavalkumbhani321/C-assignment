#include <iostream>//header file
using namespace std;
template<typename T>
void swapValues(T& value1, T& value2)//function name
{
    T temp = value1;//Write a program of to swap the two values using templates
    value1 = value2;
    value2 = temp;
}

int main() 
{
    int num1,num2;

    cout<<"enter the first number"<<endl;
    cin>>num1;
    cout<<"enter the second number"<<endl;
    cin>>num2;

     swapValues(num1,num2);//function
     cout<<"After swapping"<<endl;
     cout<<"First number is "<<num1<<endl;
     cout<<"Second number is "<<num2<<endl;
     return 0;

}
    
