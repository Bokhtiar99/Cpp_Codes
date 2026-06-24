#include<iostream>
using namespace std;
 int main(){
 int sell[6];
 float total,avg;
 cout<<"Enter 6 month of selling price"<<endl;
 for(int i=0; i<6; i++){
    cout<<"month"<<i+1<<":";
    cin>>sell[i];
    total+=sell[i];
 }
  avg=total/6;
  if(avg>5000){
    cout<<"sale increasing";
  }
  else{
    cout<<"sale decreasing";
  }
  return 0;
 }


