#include<iostream>
using namespace std;
int main()
{
    int arr[2][3];
    cout<<"Enter elements of the array:"<<endl;
    for(int row=0; row<2; row++){
        for(int col=0; col<3; col++){
         cin>>arr[row][col];
        }
    }
    cout<<"Matrix:"<<endl;
    for(int row=0; row<2; row++){
        for(int col=0; col<3; col++){
            cout<<arr[row][col]<<"\t";
        }
        cout<<endl;
    }
    for(int row=0; row<2; row++){
        for(int col=0; col<3; col++){
            if(arr[row][col]%2==0){
                cout<<arr[row][col]<<" is an even"<<endl;
            }
            else{
                cout<<arr[row][col]<<" is odd"<<endl;
            }
        }
    }
    return 0;

}
