/*#include<iostream>
using namespace std;
float balance;
void deposit(int amount)
{
    balance+=amount;
    cout<<"balance after deposit="<<balance<<endl;
}
void withdraw(int amount)
{
    balance-=amount;
    cout<<"balance after withdraw="<<balance<<endl;
}

int main()
{
    deposit(1000);
    withdraw(500);

}*/

#include<iostream>
using namespace std;

void marks(float mark)
{
   if(mark<=100&&mark>=91){
    cout<<"grade AA\n";
   }
   else if(mark<=90&&mark>=81){
    cout<<"grade: ab\n";
   }
   else{cout<<"fail";}
}
int main()
{
    cout  <<"enter mark:";
    float mark;
    cin>>mark;
    marks(mark);
}


