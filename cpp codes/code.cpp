#include<iostream>
using namespace std;

int main() {
    float first[] = {30.55, 3.66, 99.123, 45.66};
    float *ptr = first;

    // Print the original array elements
    for(int i = 0; i < 4; i++) {
        cout << ptr[i] << " ";
    }

    // Update the third element and print the array again
    ptr = &first[2];
    *ptr = 50.44;
    cout << endl;
    for(int i = 0; i < 4; i++) {
        cout << first[i] << " ";
    }

    // Work with char variables and pointers
    char var = 'Z';
    char *varl = &var;
    char *var2;
    var2 = varl;
    *var2 = 'W';

    // Corrected: Use 'varl' instead of 'var1'
    cout << endl << var << " " << *varl << " " << *var2;
    return 0;
}
