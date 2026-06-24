#include<iostream>
using namespace std;
void EvenOdd(int arr[2][2])
{
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            if(arr[i][j]%2==0){
                cout<<arr[i][j]<<" is even number"<<endl;
            }
            else{
                cout<<arr[i][j]<<" is odd number"<<endl;
            }
        }
    }
}
int main()
{
    int arr[2][2]={2 , 5, 8, 4};
    EvenOdd(arr);
    return 0;
}
