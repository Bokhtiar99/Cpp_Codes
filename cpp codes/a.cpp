#include<iostream>
using namespace std;
int main(){
int arr1[5]={1,2,3,4,5};
int arr2[6]={2,4,6,8,9};
int arr3[11]={1,2,3,4,5,6,7,8,9,10,11};
cout<<"First array: "<<endl;
for(int i=0; i<5; i++){
    cout<<arr1[i]<<" ";
}
cout<<endl;
cout<<"Second array: "<<endl;
for(int i=0; i<6; i++){
    cout<<arr2[i]<<" ";
}
cout<<endl;
cout<<"Third array in normal order: "<<endl;
for(int i=0; i<11; i++){
    cout<<arr3[i]<<" ";
}
cout<<endl;
cout<<"Third array in reverse order: "<<endl;
for(int i=10; i>=0; i--){
    cout<<arr3[i]<<" ";
}
cout<<endl;
return 0;
}

