#include <iostream>
using namespace std;
int main() {
    int arr1[] = {1, 4, 6, 3, 6, 9};
    int arr2[] = {5, 3, 7, 1, 2, 6};
    cout << "Common elements: ";
    bool found = false;

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                found = true;
                break;  // To avoid duplicates
            }
        }
    }

    if (!found) cout << "No common element!";

    return 0;
}

