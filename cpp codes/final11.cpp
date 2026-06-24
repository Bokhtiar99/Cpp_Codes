#include<iostream>
using namespace std;
int main()
{
    int arr[4][5];
    cout<<"enter array:\n";
    for(int r=0;r<4;r++){
        for(int c=0;c<5;c++){
            cin>>arr[r][c];
        }
    }
    cout<<"the array:\n";
    for(int r=0;r<4;r++){
        for(int c=0;c<5;c++){
            cout<<arr[r][c]<<"\t";
        }
        cout<<endl;
    }
    int max=arr[0][0];
    int min=arr[1][0];
    int even=arr[2][0];
    for(int c=0;c<5;c++){
        if(arr[0][c]>max){
            max=arr[0][c];
        }
    }
    for(int c=0;c<5;c++){
        if(arr[1][c]<min){
            min=arr[1][c];
        }
    }
    for(int c=0; c<5; c++){
        if(arr[2][c]%2==0){
            even=arr[2][c];
        }
    }
    cout<<"max="<<max<<endl;
    cout<<"min="<<min<<endl;
    cout<<"Even="<<even<<endl;
}

