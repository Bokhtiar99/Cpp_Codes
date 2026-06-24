#include<iostream>
using namespace std;
class account
{
private:
    string name, type;
    int accno;
    double balance;
public:
    void inputinfo (string nm, int acn, float bal, string typ )
    {
        name=nm;
        accno=acn;
        balance=bal;
        type=typ;
    }
    void deposit(int amount)
    {
        balance+=amount;
    }
    void withdraw(int amount)
    {
        if(amount<=balance){
            balance-=amount;
            cout<<"Withdraw successful"<<balance<<endl;
        }
        else{cout<<"not possible\n";}
    }
    void transfer(int amount,account *receiver)
    {
        if(amount<=balance){
            balance-=amount;
            receiver->balance+=amount;
        }
        else{cout<<"error\n";}
    }
    void printinfo()
    {
        cout<<name<<endl;
        cout<<accno<<endl;
        cout<<type<<endl;
        cout<<balance<<endl;
    }
};
int main()
{
    account sender;
    sender.inputinfo("a",2635,1000,"current");
    account receiver;
    receiver.inputinfo("b",85824,1100,"savings");
    sender.transfer(1000,&receiver);
    receiver.printinfo();

}


