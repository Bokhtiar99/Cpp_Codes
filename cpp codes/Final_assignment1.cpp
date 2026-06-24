#include<iostream>
using namespace std;
void findMaxMinAndMultiply(float arr[2][4])
{
   float MaxFirstRow=arr[0][0];
   float MinSecondRow=arr[1][0];
   for(int i=0; i<4; i++){
    if(arr[0][i]>MaxFirstRow){
        MaxFirstRow=arr[0][i];
    }
   }
   for(int i=0; i<4; i++){
    if(arr[1][i]<MinSecondRow){
        MinSecondRow=arr[1][i];
    }
   }
   float result=MaxFirstRow*MinSecondRow;
   cout <<"Largest element in the first row:"<<MaxFirstRow <<endl;
   cout <<"Smallest element in the second row:"<<MinSecondRow <<endl;
   cout <<"Result of multiplying them:"<<result<<endl;

}

int main()
{
    float arr[2][4];
    cout <<"Enter floating-point numbers:"<<endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<4; j++){
            cin >>arr[i][j];
            cout<<" ";
        }
        cout<<endl;
    }
    findMaxMinAndMultiply(arr);
    return 0;
}
