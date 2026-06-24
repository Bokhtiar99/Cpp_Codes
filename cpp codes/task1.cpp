#include <iostream>
using namespace std;

int main() {
    int arr1[] = {10, 20, 30, 40, 50};
    int arr2[] = {1, 2, 3, 4, 5, 6, 7, 8};

    int size1 = 5, size2 = 8;
    int merged[13], k = 0;

    // Merging two arrays
    for (int i = 0; i < size2; i++) merged[k++] = arr2[i];
    for (int i = 0; i < size1; i++) merged[k++] = arr1[i];

    // Printing in reverse order
    for (int i = k - 1; i >= 0; i--) cout << merged[i] << " ";

    return 0;
}

