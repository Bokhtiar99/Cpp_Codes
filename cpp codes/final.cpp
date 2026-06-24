#include<iostream>
using namespace std;

int main()
{
    int rows=2;
    int cols=2;
    float arr1[rows][cols];
    float arr2[rows][cols];
    float arr3[rows][cols];
    float arr4[rows][cols];
    float arr5[rows][cols];
    cout<<"Enter the elements of first array:"<<endl;
    for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
        cin>>arr1[i][j];
     }
     cout<<endl;
    }
    cout<<"Enter the elements of second array:"<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>>arr2[i][j];
        }
        cout<<endl;
    }
        for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
            for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            arr4[i][j]=arr1[i][j]-arr2[i][j];
        }
    }        for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
                arr5[i][j]=0;
        for(int k=0; i<rows; i++){
            arr5[i][j]+=arr1[i][k]*arr2[k][j];
        }
        }
    }
    cout<<"First Matrix:"<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
           cout<<arr1[i][j]<<"\t";
        }
        cout<<endl;
    }
        cout<<"Second Matrix:"<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
           cout<<arr2[i][j]<<"\t";
        }
        cout<<endl;
    }

        cout<<"Summation:"<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<arr3[i][j]<<"\t";
        }
        cout<<endl;
    }
        cout<<"Subtraction:"<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<arr4[i][j]<<"\t";
        }
        cout<<endl;
    }    cout<<"Multiplication:"<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<arr5[i][j]<<"\t";
        }
        cout<<endl;

    return 0;
    }
}

