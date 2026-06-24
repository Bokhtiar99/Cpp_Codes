#include <iostream>
using namespace std;

int DifferentElements(int arr[]) {
    int Count = 0;

    for (int i =0; i<9; i++) {
        int j;
        for (j =0; j<i; j++) {
            if (arr[i] == arr[j]) {
              break;
            }
        }

        if (j == i) {
            Count++;
        }
    }
    return Count;
}

int main() {
    cout<<"Original array: ";
    int arr[9] = {1,2,3,2,4,6,9,8,1};
    for(int r=0;r<9;r++){
        cout<<arr[r]<<" ";
    }
    cout<<endl;
    int disC = DifferentElements(arr);
    cout << "Number of different elements: " << disC << endl;
    return 0;
}


