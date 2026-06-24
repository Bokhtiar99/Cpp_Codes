/*#include<iostream>
using namespace std;
struct account
{
    string name;
    double balance;
    void inputinfo()
    {
        cout<<"Enter account holder name:";
        getline(cin,name);
        cout<<"Enter balance:";
        cin>>balance;
        cin.ignore();
    }
    void printinfo()
    {
        cout<<"Account holder name:"<<name<<endl;
        cout<<"Account balance:"<<balance<<endl;
    }
    void transfer(account *A, double ammount)
    {
       A->balance=A->balance+ammount;
       balance=balance-ammount;
    }
};
int main()
{
    account A1,A2;
    A1.inputinfo();
    A1.printinfo();
    A2.inputinfo();
    A2.printinfo();
    A1.transfer(&A2,500);
    cout<<"After transfer operation:"<<endl;
    A1.printinfo();
    A2.printinfo();
    return 0;

}*/

#include<iostream>
using namespace std;
struct account
{
    string name;
    double balance;
    void inpiutinfo()
    {
        cout<<"Enter account holder name:";
        getline(cin,name);
        cout<<"Enter account balace:";
        cin>>balance;
        cin.ignore();
    }
    void printinfo()
    {
        cout<<"Account holder name:"<<name<<endl;
        cout<<"Account holder balance:"<<balance<<endl;
    }
    void transfer(account &A, float ammount)
    {
        A.balance=A.balance + ammount;
        balance=balance - ammount;
    }
};
int main()
{
    account a1,a2;
    cout<<"Account 1 info:"<<endl;
    a1.inpiutinfo();
    a1.printinfo();
    cout<<"Account 2 info:"<<endl;
    a2.inpiutinfo();
    a2.printinfo();
    a1.transfer(a2,780);
    cout<<"After transfer:"<<endl;
    a1.printinfo();
    a2.printinfo();
    return 0;
}
