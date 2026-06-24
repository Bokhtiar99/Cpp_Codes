#include<iostream>
using namespace std;
class Employee
{
public:
    string name;
    int joining_year;
    string adress;
private:
    double salary;
public:
    void inputinfo()
    {
        cout<<"Enter name of the employee:";
        getline(cin,name);
        cout<<"Enter joining year:";
        cin>>joining_year;
        cout<<"Enter the adress of the employee:";
        cin>>adress;
        cout<<"Enter the employee salary:";
        cin>>salary;
        cin.ignore();
    }
    void printinfo()
    {
        cout<<"Name of the employee:"<<name<<endl;
        cout<<"Joining Year:"<<joining_year<<endl;
        cout<<"Adress of the employee:"<<adress<<endl;
        cout<<"Salary of the employee:"<<salary<<endl;
    }
};
int main()
{
    Employee N1,N2,N3;
    cout<<"Number 1 employee info:"<<endl;
    N1.inputinfo();
    N1.printinfo();
    cout<<"Number 2 employee info:"<<endl;
    N2.inputinfo();
    N2.printinfo();
    cout<<"Number 3 employee info:"<<endl;
    N3.inputinfo();
    N3.printinfo();
    return 0;
}
