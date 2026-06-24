#include <iostream>
using namespace std;
int main() {
    int arr[] = {1, 4, 6, 3, 6, 9, 1};
    int size = 7;

    cout << "Unique elements: ";
    for (int i = 0; i < size; i++) {
        bool isDuplicate = false;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) isDuplicate = true;
        }
        if (!isDuplicate) cout << arr[i] << " ";
    }

    return 0;
}

