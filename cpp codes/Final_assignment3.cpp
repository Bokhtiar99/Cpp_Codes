/*#include <iostream>
using namespace std;

int main() {
    int a[2][2], b[2][2], p[2][2], s[2][2], t[2][2];
    cout <<"Array 1:"<< endl;
    for (int r =0; r<2; r++) {
        for (int c=0; c<2; c++) {
            cin>>a[r][c];
        }
        cout<<endl;
    }

    cout <<"Array 2:"<< endl;
    for (int r=0; r<2; r++) {
        for (int c=0; c<2; c++) {
            cin>>b[r][c];
        }
        cout<<endl;
    }
    cout << "Array 1:" << endl;
    for (int r=0; r<2; r++) {
        for (int c=0; c<2; c++) {
            cout<<a[r][c]<<" ";
        }
        cout << endl;
    }

    cout << "Array 2:" << endl;
    for (int r=0; r<2; r++) {
        for (int c=0; c<2; c++) {
            cout<<b[r][c]<<" ";
        }
        cout<<endl;
    }

    cout << "Addition:" << endl;
    for (int r = 0; r < 2; r++) {
        for (int c = 0; c < 2; c++) {
            p[r][c] = a[r][c] + b[r][c];
            cout << p[r][c]<<" ";
        }
        cout << endl;
    }

    cout << "Subtraction:" << endl;
    for (int r = 0; r < 2; r++) {
        for (int c = 0; c < 2; c++) {
            s[r][c] = a[r][c] - b[r][c];
            cout << s[r][c] <<" ";
        }
        cout << endl;
    }

    cout << "Matrix multiplication:" << endl;
    for (int r = 0; r < 2; r++) {
        for (int c = 0; c < 2; c++) {
            t[r][c] = 0;
            for (int k=0; k<2; k++) {
                t[r][c] += a[r][k] * b[k][c];
            }
            cout << t[r][c] <<" ";
        }
        cout << endl;
    }

    return 0;
}*/

#include <iostream>
using namespace std;

int main() {
  int matrix1[2][2], matrix2[2][2];

  cout << "Enter elements for matrix 1:"<< endl;
  for (int i = 0; i < 2 ; i++) {
    for (int j = 0; j < 2; j++) {
      cin >> matrix1[i][j];
    }
  }

  cout << "Enter elements for matrix 2:"<<endl;
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      cin >> matrix2[i][j];
    }
  }

  cout << "Matrix 1: "<< endl;
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      cout << matrix1[i][j] << " ";
    }
    cout << endl;
  }

  cout << "Matrix 2: "<< endl;
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      cout << matrix2[i][j] << " ";
    }
    cout << endl;
  }

  cout << "Additon of matrices: "<<endl;
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      cout << matrix1[i][j] + matrix2[i][j] << " ";
    }
    cout << endl;
  }

  cout << "Subtraction of matrices: "<<endl;
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      cout << matrix1[i][j] - matrix2[i][j] << " ";
    }
    cout << endl;
  }
    int result [2][2];
    cout << "Result of matrices: "<<endl;
    for (int i = 0; i < 2; i++) {
      for (int j = 0; j < 2; j++) {
        result[i][j] = 0;

        for (int k = 0; k < 2; k++) {
          result[i][j] += matrix1[i][k] * matrix2[k][j];
        }
        cout << result[i][j] << " ";
      }
      cout << endl;
    }

  return 0;
}
