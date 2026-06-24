#include <iostream>
#include <string>
using namespace std;
struct Patient{
    string name;
    int age;
    string medical_history[5];
    string prescriptions[10];
    int prescription_count;
};
void updateDiagnosis(Patient &p,string new_diagnosis){
    for (int i=4; i>0; i--){
        p.medical_history[i]=p.medical_history[i - 1];
    }
    p.medical_history[0]=new_diagnosis;
}
