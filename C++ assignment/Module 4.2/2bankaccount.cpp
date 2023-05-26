#include <iostream>
using namespace std;
class bankaccount// user define function
{
private://Access modifier
        string name, account_type;// this is a data member
        int acno;
        int deposit;
        int withdrawcash;
        char name1[50],acctype[50];// define the represent a bank account details
        float bal; 
    
    public:
    void assign_details()//function name
    {
        cout<<"---------------------------------------------"<<endl;
        cout <<"Enter the name of account Holder : ";
        cin>>name;
        cout<<"Enter the account Number : ";
        cin>>name1;
        cout<<"Enter the account Type : ";
        cin>>account_type;
        cout<<"Enter the balance in the account : ";
        cin>>bal;
        cout<<"---------------------------------------------"<<endl;
    }
    void deposite_amount()//function
    {
        cout<<"---------------------------------------------"<<endl;
        cout<< "Enter the amount to deposite : ";
        cin>>deposit;
        bal = bal + deposit;
        cout<<"---------------------------------------------"<<endl;
    }
    void withdraw()//function
    {
        cout<<"---------------------------------------------"<<endl;
        cout<<"The balance in the Account is : " << bal << endl;
        cout<<"Enter the amount to withdraw : ";
        cin>> withdrawcash;
        bal = bal - withdrawcash;
        cout<<"---------------------------------------------"<<endl;
    }
    void dispaly()//functon
    {
        cout<<"---------------------------------------------"<<endl;
        cout<<"Your name in the Account is : " << name <<endl;
        cout<<"Your Account Number is : " << acno <<endl;
        cout<<"Your Account type is : " << account_type <<endl;
        cout<<"Your balance is : " << bal <<endl;
        cout<<"---------------------------------------------"<<endl;
    }
};
int main()
{
    bankaccount obj;// call the object
    obj.assign_details();
    obj.deposite_amount();
    obj.withdraw();
    obj.dispaly();

    return 0;
}