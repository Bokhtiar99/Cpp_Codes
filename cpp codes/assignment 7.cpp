#include <iostream>
using namespace std;
    int main() {
    int number;
    int sum;
    cout << "Enter a number: ";
    cin >> number;
    for (int i = 1; i <= number; i++) {
      if(i%2!=0){
        sum += i*i;
      }
    }
    cout << "Sum of squares of odd numbers between 1 and " << number << ":"<< sum << endl;
    return 0;
}

