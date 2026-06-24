#include<iostream>
using namespace std;
void Triangle(float b,float h)
{
    float area;
    area=0.5*b*h;
    cout<<"The area of the triangle:"<<area<<endl;
}
void Circle(float r)
{
    float area;
    area=3.1416*r*r;
    cout<<"The area of the circle:"<<area<<endl;
}
int main()
{
    Triangle(2.8,44.7);
    Circle(22.4);
    return 0;
}
