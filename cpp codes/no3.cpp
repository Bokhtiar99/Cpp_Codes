#include <iostream>
using namespace std;
int main() {
    int sales[6] = {150, 200, 250, 300};
    int size = 4;
    int firstSale = 100;
    int secondSale = 400;
    for (int i = size; i > 0; i--){
        sales[i] = sales[i - 1];
    }
    sales[0] = firstSale;
    size++;
    sales[size] = secondSale;
    size++;
    for (int i = 1; i < size; i++){
        int key = sales[i];
        int j = i - 1;
        while (j >= 0 && sales[j] > key){
            sales[j + 1] = sales[j];
            j--;
        }
        sales[j + 1] = key;
    }
    cout << "Sorted Sales List:"<<endl;
    for (int i = 0; i < size; i++) {
        cout << sales[i] << " ";
    }
    cout << endl;
    return 0;
}
/*
#include <iostream>
#include <string>
using namespace std;
struct Student {
    string name;
    int roll;
    int marks;
};
void swap(Student &a, Student &b){
    Student s=a;
    a=b;
    b=s;
}
void sortStudents(Student students[], int n){
    for(int i=0; i< n-1; i++) {
        for(int j=0; j< n-i-1; j++) {
            if (students[j].marks > students[j+1].marks ||
               (students[j].marks == students[j+1].marks && students[j].name > students[j+1].name)) {
               swap(students[j], students[j+1]);
            }
        }
    }
}
int main(){
    const int size = 3;
    Student students[size];

    cout << "Enter data for 3 students (name, roll, marks):"<<endl;
    for (int i = 0; i < size; i++) {
        cout << "Student " << i+1 <<endl;
        cout << "Name: ";
        cin >> students[i].name;
        cout << "Roll: ";
        cin >> students[i].roll;
        cout << "Marks: ";
        cin >> students[i].marks;
    }

    sortStudents(students, size);

    cout << "Sorted Students (by marks and name):"<<endl;
    for (int i = 0; i < size; i++) {
        cout << students[i].name << " (Roll: " << students[i].roll << ") - Marks: " << students[i].marks << " ";
    }

    return 0;
}*/
