#include <algorithm>
#include <iostream>//library file
using namespace std;
  
void show(int a[], int array_size)//Write a program to sort the array using templates
{
    int i;
    for (i=0;i<array_size;++i)
        cout<<a[i] << "  ";
}
  int main()
{
    int a[]={ 1,3,5,2,7,9,4,6,8,10};
    
    // size of the array
    int asize = sizeof(a) / sizeof(a[0]);
    cout<<"The array before sorting is :"<<endl;
    
    show(a, asize);// print the array
  
    sort(a, a + asize);// sort the array
  
    cout<<"\nThe array after sorting is"<<endl;
    
    show(a, asize);
   return 0;
}  