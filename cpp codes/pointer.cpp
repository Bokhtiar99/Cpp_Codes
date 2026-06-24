#include <iostream>
using namespace std;

int main() {
    float first[] = {30.55, 3.66, 99.123, 45.66};
    float *ptr = first; //float *ptr=&first[0];

    // Printing elements using pointer arithmetic
    for(int i = 0; i < 4; i++) {
        cout << ptr[i] << " ";
    }

    // Changing the value of an element using a pointer
    ptr = &first[2];
    *ptr = 50.44;
    cout << endl;

    // Printing the modified array
    for(int i = 0; i < 4; i++) {
        cout << first[i] << " ";
    }

    // Working with character pointers
    char var = 'Z';
    char *varl = &var;
    char *var2;
    var2 = varl;
    *var2 = 'W';

    // Printing character values
    cout << endl << var << " " << *varl << " " << *var2;

    return 0;
}

