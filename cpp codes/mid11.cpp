#include<iostream>
using namespace std;
 int main(){
 for(int i=1; i<=4; i++){
 for(int j=1; j<=6; j++){
    if((i+j)%2==0){
        cout<<"X";
    }
    else{
        cout<<"0";
    }
 }
 cout<<endl;
 }
 return 0;
 }
