#include<iostream>
using namespace std;
int main(){
    float arr1[3][2];
    float arr2[3][2];
    float arr3[3][2];
    cout<<"Enter the elements of the first matrix:"<<endl;
    for(int row=0; row<3; row++){
        for(int col=0; col<2; col++){
            cin>>arr1[row][col];
        }
    }
    cout<<endl;
    cout<<"Enter the elements of the second matrix:"<<endl;
    for(int row=0; row<3; row++){
        for(int col=0; col<2; col++){
            cin>>arr2[row][col];
        }
    }

    for(int row=0; row<3; row++){
        for(int col=0; col<2; col++){
            arr3[row][col]=arr1[row][col]+arr2[row][col];
        }
    }

    cout<<"First Matrix"<<endl;
    for(int row=0; row<3; row++){
        for(int col=0; col<2; col++){
            cout<<arr1[row][col]<<" ";
        }
        cout<<endl;
    }

    cout<<"Second Matrix"<<endl;
    for(int row=0; row<3; row++){
        for(int col=0; col<2; col++){
            cout<<arr2[row][col]<<" ";
        }
        cout<<endl;
    }
    cout<<"Matrix Addition"<<endl;
    for(int row=0; row<3; row++){
        for(int col=0; col<2; col++){
            cout<<arr3[row][col]<<" ";
        }
        cout<<endl;
    }

}
