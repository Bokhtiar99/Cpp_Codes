#include<iostream>
using namespace std;
struct employee
{
    string name, id;
    int jyear;
    float salary;
    float bonus;
    void setemployeeinfo(string nm,string Id,float sal,int year)
    {
        name=nm;
        id=Id;
        jyear=year;
        salary=sal;

    }
    float setbonus()
    {
        if(salary>25000&&jyear<2016){
           bonus=salary*0.3;
           salary+=bonus;
        }
        else if (salary>20000&&jyear<2018){
            bonus=salary*0.2;
            salary+=bonus;
        }
        else{bonus=salary*0.05;
             salary+=bonus;}
             return bonus;
             return salary;
    }
    void displayinfo()
    {
        cout<<name<<endl;
        cout<<id<<endl;
        cout<<jyear<<endl;
        cout<<bonus<<endl;
        cout<<salary<<endl;
    }
};
int main()
{
    employee im1;
    im1.setemployeeinfo("a","47",26000,2014);
    im1.setbonus();
    im1.displayinfo();
}

