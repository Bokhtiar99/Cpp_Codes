#include<iostream>
using namespace std;
int main(){
    int A[4][4]={
        {1, 2, 3, 4},
        {4, 3, 7, 9},
        {2, 4, 6, 8},
        {1, 3, 5, 7}
    };
    int B[4][4]={
        {2, 5, 6, 9},
        {0, 4, 7, 5},
        {8, 4, 6, 1},
        {2, 3, 9, 6}
    };
    int sum[4][4];
    int transpose[4][4];
    cout<<"Sum Matrix: "<<endl;
    for (int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            sum[i][j]=A[i][j]+B[i][j];
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Transpose of Sum Matrix:"<<endl;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            transpose[j][i]=sum[i][j];
        }
    }
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

