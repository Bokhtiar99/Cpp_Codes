#include <iostream>
using namespace std;

void merge(int leftArr[], int rightArr[], int array[], int leftSize, int rightSize) {

    int i = 0, l = 0, r = 0;

    while (l < leftSize && r < rightSize) {
        if (leftArr[l] < rightArr[r]) {
            array[i++] = leftArr[l++];
        } else {
            array[i++] = rightArr[r++];
        }
    }

    while (l < leftSize) {
        array[i++] = leftArr[l++];
    }

    while (r < rightSize) {
        array[i++] = rightArr[r++];
    }
}

void mergeSort(int array[], int length) {

    if (length <= 1) return;

    int middle = length / 2;

    int* leftArr  = new int[middle];
    int* rightArr = new int[length - middle];

    for (int i = 0; i < middle; i++) {
        leftArr[i] = array[i];
    }
    for (int i = middle; i < length; i++) {
        rightArr[i - middle] = array[i];
    }

    mergeSort(leftArr, middle);
    mergeSort(rightArr, length - middle);

    merge(leftArr, rightArr, array, middle, length - middle);

    delete[] leftArr;
    delete[] rightArr;
}

int main() {

    int array[] = {8, 2, 5, 3, 4, 7, 6, 1};
    int length = sizeof(array) / sizeof(array[0]);

    mergeSort(array, length);

    for (int i = 0; i < length; i++) {
        cout << array[i] << " ";
    }

    return 0;
}

