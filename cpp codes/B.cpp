#include<iostream>
using namespace std;
int main (){
int ages[5];
float total,avg;
cout<<"Enter the ages of 5 students:"<<endl;
for(int i =0;i<5 ;i++){
    cout<<"student"<<i+1<<":";
    cin>>ages[i];
    total+=ages[i];
}
 avg=total/5;
cout<<"average age of the 5 students:"<<avg;
return 0;
}
