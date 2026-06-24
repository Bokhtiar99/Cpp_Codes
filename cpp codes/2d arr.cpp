#include<iostream>
using namespace std;
int main(){
    float arr1[2][4];
    float arr2[2][4];
    float arr3[2][4];
    cout<<"Enter the elements of the first matrix:"<<endl;
    for(int row=0; row<2; row++){
        for(int col=0; col<4; col++){
            cin>>arr1[row][col];
        }
    }
    cout<<endl;
    cout<<"Enter the elements of the second matrix:"<<endl;
    for(int row=0; row<2; row++){
        for(int col=0; col<4; col++){
            cin>>arr2[row][col];
        }
    }

    for(int row=0; row<2-1; row++){
        for(int col=0; col<4; col++){
            arr3[row][col]=arr1[row][col]+arr2[row][col];
            cout<<"The resulting Matrix:"<<arr3[row][col];
        }
        cout<<endl;
    }



}
