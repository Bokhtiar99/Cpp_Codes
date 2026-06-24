#include<iostream>
using namespace std;
int a=9;//Global Variable
void incrementer(){
    //int a=10;//Local Variable of incrementer function
    a++;
    cout<<"a:"<<a<<endl;
}
int main(){
    //int a=5; //Local variable of main function
    incrementer();
    cout<<"a:"<<a<<endl;
}
