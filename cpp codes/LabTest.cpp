//take input an n*n array and sort the boundary elements using selection sort algorithm

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n][n];

    // input
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }

    int b[100], k = 0;

    // extract boundary
    for(int j=0;j<n;j++) b[k++] = a[0][j];         // top row
    for(int i=1;i<n;i++) b[k++] = a[i][n-1];       // right column
    for(int j=n-2;j>=0;j--) b[k++] = a[n-1][j];    // bottom row
    for(int i=n-2;i>0;i--) b[k++] = a[i][0];       // left column

    // selection sort
    for(int i=0;i<k-1;i++){
        int minIndex = i;
        for(int j=i+1;j<k;j++){
            if(b[j] < b[minIndex])
                minIndex = j;
        }
        swap(b[i], b[minIndex]);
    }

    // put back boundary
    int x = 0;

    for(int j=0;j<n;j++) a[0][j] = b[x++];         // top row
    for(int i=1;i<n;i++) a[i][n-1] = b[x++];       // right column
    for(int j=n-2;j>=0;j--) a[n-1][j] = b[x++];    // bottom row
    for(int i=n-2;i>0;i--) a[i][0] = b[x++];       // left
    // output
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}



// Selection sort in C++

#include <iostream>
using namespace std;

// function to swap the position of two elements
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

// function to print an array
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

// selection sort function
void selectionSort(int array[], int size) {
  for (int step = 0; step < size - 1; step++) {
    int min_idx = step;

    for (int i = step + 1; i < size; i++) {
      if (array[i] < array[min_idx])
        min_idx = i;
    }

    swap(&array[min_idx], &array[step]);
  }
}

int main() {

  int n = 3;
  int a[3][3];

  cout << "Enter 3x3 matrix:\n";

  // input
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }

  int boundary[20];
  int k = 0;

  // extract boundary
  for (int j = 0; j < n; j++)
    boundary[k++] = a[0][j];          // top row

  for (int i = 1; i < n; i++)
    boundary[k++] = a[i][n - 1];      // right column

  for (int j = n - 2; j >= 0; j--)
    boundary[k++] = a[n - 1][j];      // bottom row

  for (int i = n - 2; i > 0; i--)
    boundary[k++] = a[i][0];          // left column

  // sort boundary using your selectionSort function
  selectionSort(boundary, k);

  // put sorted values back
  int x = 0;

  for (int j = 0; j < n; j++)
    a[0][j] = boundary[x++];

  for (int i = 1; i < n; i++)
    a[i][n - 1] = boundary[x++];

  for (int j = n - 2; j >= 0; j--)
    a[n - 1][j] = boundary[x++];

  for (int i = n - 2; i > 0; i--)
    a[i][0] = boundary[x++];

  // output matrix
  cout << "\nMatrix after sorting boundary:\n";
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
//


// Selection sort in C++

#include <iostream>
using namespace std;

// function to swap the position of two elements
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

// selection sort
void selectionSort(int array[], int size) {
  for (int step = 0; step < size - 1; step++) {
    int min_idx = step;

    for (int i = step + 1; i < size; i++) {
      if (array[i] < array[min_idx])
        min_idx = i;
    }

    swap(&array[min_idx], &array[step]);
  }
}

int main() {

  int n = 4;
  int a[4][4];

  cout << "Enter 4x4 matrix:\n";

  // input
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }

  int boundary[50];
  int k = 0;

  // extract boundary
  for (int j = 0; j < n; j++)
    boundary[k++] = a[0][j];          // top row

  for (int i = 1; i < n; i++)
    boundary[k++] = a[i][n - 1];      // right column

  for (int j = n - 2; j >= 0; j--)
    boundary[k++] = a[n - 1][j];      // bottom row

  for (int i = n - 2; i > 0; i--)
    boundary[k++] = a[i][0];          // left column

  // sort boundary using your selectionSort function
  selectionSort(boundary, k);

  // put sorted values back
  int x = 0;

  for (int j = 0; j < n; j++)
    a[0][j] = boundary[x++];

  for (int i = 1; i < n; i++)
    a[i][n - 1] = boundary[x++];

  for (int j = n - 2; j >= 0; j--)
    a[n - 1][j] = boundary[x++];

  for (int i = n - 2; i > 0; i--)
    a[i][0] = boundary[x++];

  // output matrix
  cout << "\nMatrix after sorting boundary:\n";
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
