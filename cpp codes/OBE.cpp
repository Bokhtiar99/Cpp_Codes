#include<iostream>
using namespace std;
 int main (){
 double area;
 float base;
 float height;
 cout<<"Enter the base:";
 cin>>base;
 cout<<"Enter the height:";
 cin>>height;
 char letter;
 cout<<"Enter a letter:";
 cin>>letter;
 area=0.5*base*height;
 cout<<"Area of a triangle:"<<area<<endl;
 cout<<"Area of the tringle after type casting:"<<(int)area<<endl;
 area=base*height;
 cout<<"Area of a rectangle:"<<area<<endl;
 cout<<"Area of a rectangle after type casting:"<<(int)area<<endl;
 if(letter=='q'){
    cout<<"Quit";
 }
 else{
    cout<<"continue";
 }
 }
