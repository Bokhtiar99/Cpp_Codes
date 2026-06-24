#include<iostream>
using namespace std;
void transposeMatrix(int arr[20][20],int rows,int cols)
{
    int transposed[cols][rows];
    for(int i=0; i<cols; i++){
        for(int j=0; j<rows; j++){
            transposed[i][j]=arr[j][i];
        }
    }
    cout<<"Orginal matrix:"<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Transposed Matrix:"<<endl;
    for(int i=0; i<cols; i++){
        for(int j=0; j<rows; j++){
            cout<<transposed[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
   int rows,cols,arr[20][20];
   cout<<"Enter the number of rows:";
   cin>>rows;
   cout<<"Enter the number of cols:";
   cin>>cols;
   cout<<"Enter the elements of the matrix:"<<endl;
   for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
        cin>>arr[i][j];
        }
    }
    transposeMatrix(arr,rows,cols);
    return 0;
}

/*#include <iostream>
using namespace std;
void multiplyByScalar(int arr[][20],int rows,int cols,int scalar)
 {
    for (int i=0; i<rows; i++) {
        for (int j=0; j<cols; j++) {
            arr[i][j] *=scalar;
        }
    }
}
void displayArray(int arr[][20],int rows,int cols)
 {
    for (int i=0; i<rows; i++) {
        for (int j=0; j<cols; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main() {
    int rows,cols,scalar;

    cout<<"Enter the number of rows: ";
    cin>>rows;
    cout<<"Enter the number of columns: ";
    cin>>cols;

    int myArray[20][20];

    cout<<"Enter the elements of the matrix:"<<endl;
    for (int i=0; i<rows; i++) {
        for (int j=0; j<cols; j++) {
            cin>>myArray[i][j];
        }
    }
    cout<<"Enter the scalar value: ";
    cin>>scalar;

    multiplyByScalar(myArray, rows, cols, scalar);
    cout<<"Resulting matrix after scalar multiplication:"<<endl;
    displayArray(myArray,rows,cols);
    return 0;
}*/

