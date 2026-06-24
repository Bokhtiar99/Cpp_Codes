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
