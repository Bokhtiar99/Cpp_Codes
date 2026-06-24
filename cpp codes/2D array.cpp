#include<iostream>
using namespace std;
 int main() {
 int arr1[2][3];
 int arr2[2][3];
 int arr3[2][3];
 int result;
 float avg;
 cout<<"Enter the elements of the first matrix:"<<endl;
 for(int row=0; row<2; row++){
    for(int col=0; col<3; col++){
     cin>>arr1[row][col];
    }
 }
 cout<<"Enter the elements of the second matrix:"<<endl;
 for(int row=0; row<2; row++){
    for(int col=0; col<3; col++){
     cin>>arr2[row][col];
    }
 }

 for(int row=0; row<2; row++){
    for(int col=0; col<3; col++){
     arr3[2][3]=arr1[2][3]+arr2[2][3];
     result+=arr3[row][col];
    }
 }
 avg=result/6;
 cout<<"The first matrix is:"<<endl;
 for(int row=0; row<2; row++){
    for(int col=0; col<3; col++){
     cout<<arr1[row][col]<<" ";
    }
    cout<<endl;
 }
 cout<<"The second matrix is:"<<endl;
 for(int row=0; row<2; row++){
    for(int col=0; col<3; col++){
     cout<<arr2[row][col]<<" ";
    }
    cout<<endl;
 }
 cout<<"The summation is:"<<endl;
 for(int row=0; row<2; row++){
    for(int col=0; col<3; col++){
     cout<<arr3[row][col]<<" ";
    }
    cout<<endl;
 }
 cout<<"The average of elements in the resultant matrix is:"<<avg<<endl;
 return 0;
 }
