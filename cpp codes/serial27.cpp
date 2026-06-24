#include <iostream>
using namespace std;
int main() {
    int m, n;
    cout << "Enter the number of rows m: ";
    cin >> m;
    cout << "Enter the number of columns n: ";
    cin >> n;
    int A[m][n];
    int B[m][n];
    int result[m][n];
    cout << "Enter elements of array A:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }
    cout << "Enter elements of array B:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> B[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
    cout<<endl;
    cout << "Result of addition:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
