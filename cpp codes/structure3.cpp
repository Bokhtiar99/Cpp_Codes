#include<iostream>
using namespace std;
struct Account
{
    string name;
    double balance;
    void inputinfo()
    {
        cout<<"Enter account holder name:";
        cin>>name;
        cout<<"Enter balance:";
        cin>>balance;
    }
    void printinfo()
    {
        cout<<"Account holder name:"<<name<<endl;
        cout<<"Account balance:"<<balance<<endl;
    }
    void transfer(Account *A,double ammount)
    {
        A->balance=A->balance+ammount;
        balance=balance-ammount;
    }
};
int main()
{
    Account A1;
    A1.inputinfo();
    A1.printinfo();
    Account A2;
    A2.inputinfo();
    A2.printinfo();
    A1.transfer(&A2,500);
    cout<<"After transfer operation"<<endl;
    A1.printinfo();
    A2.printinfo();
}
