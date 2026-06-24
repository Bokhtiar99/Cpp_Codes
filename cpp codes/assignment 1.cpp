#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, num4, num5;

    cout << "Enter five integer numbers: "<<endl;
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    int thirdLargest;

    if (num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5) {
        if (num2 > num3 && num2 > num4 && num2 > num5) {
            thirdLargest = num2;
        } else if (num3 > num4) {
            thirdLargest = num3;
        } else if (num4 > num5) {
            thirdLargest = num4;
        } else {
            thirdLargest = num5;
        }
    } else if (num2 > num3 && num2 > num4 && num2 > num5) {
        if (num1 > num3 && num1 > num4 && num1 > num5) {
            thirdLargest = num1;
        } else if (num3 > num4 && num3 > num5) {
            thirdLargest = num3;
        } else if (num4 > num5) {
            thirdLargest = num4;
        } else {
            thirdLargest = num5;
        }
    } else if (num3 > num4 && num3 > num5) {
        if (num1 > num2 && num1 > num4 && num1 > num5) {
            thirdLargest = num1;
        } else if (num2 > num4 && num2 > num5) {
            thirdLargest = num2;
        } else if (num4 > num5) {
            thirdLargest = num4;
        } else {
            thirdLargest = num5;
        }
    } else if (num4 > num5) {
        if (num1 > num2 && num1 > num3 && num1 > num5) {
            thirdLargest = num1;
        } else if (num2 > num3 && num2 > num5) {
            thirdLargest = num2;
        } else if (num3 > num5) {
            thirdLargest = num3;
        } else {
            thirdLargest = num5;
        }
    } else {
        if (num1 > num2 && num1 > num3 && num1 > num4) {
            thirdLargest = num1;
       } else if (num2 > num3 && num2 > num4) {
           thirdLargest = num2;
    } else if (num3 > num4) {
            thirdLargest = num3;
        } else if(num4>num5){
           thirdLargest = num4;
       }else{
       thirdLargest=num3;}
   }

    cout << "The 3rd largest number is: " << thirdLargest << endl;

    return 0;
}

