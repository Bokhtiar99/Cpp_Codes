#include <iostream>
using namespace std;
int main() {
 int rows = 2;
 int cols = 2;
 float num;
    float arr[rows][cols];
    cout << "Enter "<<rows * cols<<" floating_point numbers:" <<endl;
    for (int i=0; i<rows; i++){
        for (int j=0; j<cols; j++){
            cin>>arr[i][j];
        }
    }
    cout << "Enter the number you want to search for?: ";
    cin >> num;
    for (int i=0; i<rows; i++){
        for (int j=0; j<cols; j++){
            if (arr[i][j] == num){
            cout <<"The number "<<num<< " is present in the array."<<endl;
            return 0;
            }
        }
    }

        cout <<"The number "<<num<< " is not present in the array."<<endl;

return 0;
}

