/*#include<iostream>
using namespace std;
class account
{
public:
    string name;
private:
    double balance;
public:
    void inputinfo(string nm,double blc)
    {
        name=nm;
        balance=blc;
    }
    void printinfo()
    {
        cout<<"Account holder name:"<<name<<endl;
        cout<<"Account holder balance:"<<balance<<endl;
    }
    void transfer(account *A,double ammount)
    {
        if(ammount<=balance){
        A->balance=A->balance+ammount;
        balance=balance-ammount;
        cout<<"Transfer successful"<<endl;
        }
        else{
            cout<<"Transfer is not possible"<<endl;
        }
    }
};
int main()
{
    account a1,a2;
    cout<<"Account 1 info:"<<endl;
    a1.inputinfo("Bokhtiar",880);
    a1.printinfo();
    cout<<"Account 2 info:"<<endl;
    a2.inputinfo("Swachchho",430);
    a2.printinfo();
    a1.transfer(&a2,360);
    cout<<"After transfer:"<<endl;
    a1.printinfo();
    a2.printinfo();
    return 0;
}*/

#include<iostream>
using namespace std;
class account
{
public:
    string name;
private:
    double balance;
public:
    void inputinfo()
    {
        cout<<"Enter account holder name:";
        getline(cin,name);
        cout<<"Enter account holder balance:";
        cin>>balance;
        cin.ignore();
    }
    void printinfo()
    {
        cout<<"Account holder name:"<<name<<endl;
        cout<<"Account holder balance:"<<balance<<endl;
    }
    void transfer(account &A, double ammount)
    {
       A.balance=A.balance+ammount;
       balance=balance-ammount;
       if(ammount<=balance){
        cout<<"Transfer successful"<<endl;
       }
       else{
        cout<<"Transfer is not possible"<<endl;
       }
    }
};
int main()
{
    account a1,a2;
    cout<<"Account 1 info:"<<endl;
    a1.inputinfo();
    a1.printinfo();
    cout<<"Account 2 info:"<<endl;
    a2.inputinfo();
    a2.printinfo();
    a1.transfer(a2,990);
    cout<<"After transfer:"<<endl;
    a1.printinfo();
    a2.printinfo();
    return 0;
}
