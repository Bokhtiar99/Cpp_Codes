#include<iostream>
using namespace std;
class A
{
private:
    int a;
public:
    A()
    {
        cout<<"Constructor called"<<endl;
    }
    A(int b)
    {
        a=b;
        cout<<a<<"Parameterized constructor called"<<endl;
    }
    void method_A()
    {
        cout<<"Method called"<<endl;
    }
    ~A()
    {
        cout<<a<<" Destructor called"<<endl;
    }
};
int main()
{
    A a1(5);
    a1.method_A();
    A a2(10);
    A a3(7);
}
