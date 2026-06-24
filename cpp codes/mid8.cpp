#include<iostream>
using namespace std;
 int main(){
 int num;
 for(int i=1; i<=5; i++){
    cout<<"Enter number"<<i<<":";
    cin>>num;
    if(num>=0){
    cout<<num<<" is a positive number"<<endl;
    }
    else{
    cout<<" is a negative number"<<num<<endl;
    }
 }
 }
