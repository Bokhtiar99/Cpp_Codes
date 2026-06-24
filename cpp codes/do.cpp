#include<iostream>
using namespace std;

int main() {
    int sell[6];
    float total = 0, avg;
    int i = 0;

    cout << "Enter 6 months of selling prices:";
    do {
        cin >> sell[i];
        total += sell[i];
        i++;
    } while (i < 6);

    avg = total / 6;

    if (avg > 5000) {
        cout << "Sales increasing.";
    } else {
        cout << "Sales decreasing.";
    }

    return 0;
}

