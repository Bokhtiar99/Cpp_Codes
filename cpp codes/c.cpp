/*
init array[50]
insert 0 to 50;
1.print only odd number;
2.print prime number
*/

#include<iostream>
using namespace std;
int main() {
    int arr[50];
    int n;
    cout<<"Enter the number of elements (up to 50): ";
    cin>>n;
    if(n>50 || n<=0) {
        cout << "Invalid number of elements"<<endl;
        return 0;
    }

    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    cout << "The elements and their types: " << endl;
    for (int i=0; i<n; i++) {
        if (arr[i] % 2 !=0) {
            cout << arr[i] << " is odd." << endl;
        } else {
            cout << arr[i] << " is even." << endl;
        }
    }

    return 0;
}


