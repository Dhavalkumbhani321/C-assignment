#include<iostream>
using namespace std;
class cricketer
{
    public://Access modifier
    int total_runs;
    int avg_run;
    int best_run=300;
    string best_performance;//Write a program to cricket is declared.makke a class batsman from cricketer.data member of batsman. total runs,average runs and best performance.member function input data, calculate average runs,display data using single inheritance.
    string name_batsman;

    public://Access modifier
      void name()//function name
      {
        cout<<"the name of batsman"<<endl;
        cin>>name_batsman;
      }
      
};
  class batsman :public cricketer//class name
  {
    public:
    int first_run;
    int second_run;
    int third_run;
    string best_performance;

    public:
    void value()//function name
    {
        cout<<"enter the run you made first run"<<endl;
        cin>>first_run;
        cout<<"enter the run you made second run"<<endl;
        cin>>second_run;
        cout<<"enter the run you made third run"<<endl;
        cin>>third_run;
    }
    void totalruns()//function name
    {
        cout<<"-------------------------------"<<endl;
         total_runs=first_run+second_run+third_run;
         cout<<"The total run made is "<<total_runs<<endl;
    }

       void aveeragerun()//function name
       {
           cout<<"---------------------------"<<endl;
           avg_run=first_run+second_run+third_run;
           cout<<"The aveg run is "<<avg_run<<endl;
      }
      void details()//functiion name
      {
         cout<<"-------------------------------"<<endl;
         cout<<"The name of the batsman"<<name_batsman<<endl;
         cout<<"The total run is "<<total_runs<<endl;
         cout<<"The average run is "<<avg_run<<endl;
         cout<<"The best perform batsman is "<<best_performance<<"with "<<best_run<<endl;
      }
  };
  int main()
  {
      batsman obj;// create an object
      obj.name();
      obj.value();
      obj.totalruns();
      obj.aveeragerun();
      obj.details();
      return 0;

  }