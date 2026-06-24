#include <iostream>
using namespace std;

int main() {
    char name[3][50];
    int roll[3], marks[3];


    cout << "Enter name, roll, and marks for 3 students:";
    for (int i = 0; i < 3; i++) {
        cout << "Student " << i + 1 << ": ";
        cin >> name[i] >> roll[i] >> marks[i];
    }


    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2 - i; j++) {
            if (marks[j] > marks[j + 1]) {

                int tempMark = marks[j];
                marks[j] = marks[j + 1];
                marks[j + 1] = tempMark;


                int tempRoll = roll[j];
                roll[j] = roll[j + 1];
                roll[j + 1] = tempRoll;


                char tempName[50];
                strcpy(tempName, name[j]);
                strcpy(name[j], name[j + 1]);
                strcpy(name[j + 1], tempName);
            }
        }
    }


    cout << " Sorted Students by Marks: ";
    for (int i = 0; i < 3; i++) {
        cout << name[i] << " " << roll[i] << " " << marks[i] << endl;
    }
