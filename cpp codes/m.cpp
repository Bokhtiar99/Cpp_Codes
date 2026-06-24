#include<iostream>
using namespace std;

// Correct merge function
void Merge(int L[], int nL, int R[], int nR, int A[]) {
    int i = 0, j = 0, k = 0;

    while (i < nL && j < nR) {
        if (L[i] <= R[j]) {
            A[k++] = L[i++];
        } else {
            A[k++] = R[j++];
        }
    }

    // Remaining elements of L
    while (i < nL) {
        A[k++] = L[i++];
    }

    // Remaining elements of R
    while (j < nR) {
        A[k++] = R[j++];
    }
}

// Correct mergesort function
void Mergesort(int A[], int n) {
    if (n < 2) return;

    int mid = n / 2;

    int L[mid];
    int R[n - mid];

    for (int i = 0; i < mid; i++)
        L[i] = A[i];

    for (int i = mid; i < n; i++)
        R[i - mid] = A[i];

    Mergesort(L, mid);
    Mergesort(R, n - mid);
    Merge(L, mid, R, n - mid, A);
}

int main() {

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int A[n];

    cout << "Enter data for array:\n";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    Mergesort(A, n);

    cout << "Sorted array:\n";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
}

