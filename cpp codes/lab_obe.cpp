/*#include<iostream>>
using namespace std;
int main()
{
    int rows,cols;
    cout<<"Enter the number of rows:";
    cin>>rows;
    cout<<"Enter the number of cols:";
    cin>>cols;
    int arr[rows][cols];
    cout<<"Enter the elements of the matrix:"<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>>arr[i][j];
        }
    }
           cout<<"Orginal Matrix:"<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
        cout<<"Transpose Matrix:"<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/

#include<iostream>
using namespace std;
void transposed(int arr[][5],int rows,int cols)
{
    cout << "Enter the elements of the matrix:" << endl;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cin >> arr[i][j];
        }
    }

    cout << "Original matrix:" << endl;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Transposed matrix:" << endl;
    for(int i = 0; i < cols; i++){
        for(int j = 0; j < rows; j++){
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int rows,cols;
    int arr[rows][5];
    transposed(arr,3,2);
    return 0;
}






