#include <iostream>
#include <string>
using namespace std;

struct Patient {
    string name;
    int age;
    string medical_history[5];
    string prescriptions[10];
    int prescription_count;
};

void updateDiagnosis(Patient &patient, string new_diagnosis) {
    for (int i = 4; i > 0; i--) {
        patient.medical_history[i] = patient.medical_history[i - 1];
    }
    patient.medical_history[0] = new_diagnosis;
}

void displayPatientDetails(Patient patients[], int count) {
    for (int i = 0; i < count; i++) {
        cout << "\nPatient Name: " << patients[i].name << "\nAge: " << patients[i].age << "\nMedical History:\n";
        for (int j = 0; j < 5; j++) {
            cout << "- " << patients[i].medical_history[j] << endl;
        }
        cout << "Prescriptions:\n";
        for (int j = 0; j < patients[i].prescription_count; j++) {
            cout << "- " << patients[i].prescriptions[j] << endl;
        }
    }
}

int main() {
    int patientCount;
    cout << "Enter the number of patients (max 10): ";
    cin >> patientCount;
    if (patientCount > 10) patientCount = 10;

    Patient patients[10];
    for (int i = 0; i < patientCount; i++) {
        cout << "\nEnter details for patient " << i + 1 << ":\n";
        cout << "Name: ";
        cin >> patients[i].name;
        cout << "Age: ";
        cin >> patients[i].age;
        cout << "Enter 5 diagnoses:\n";
        for (int j = 0; j < 5; j++) {
            cin >> patients[i].medical_history[j];
        }
        cout << "Enter number of prescriptions (<=10): ";
        cin >> patients[i].prescription_count;
        for (int j = 0; j < patients[i].prescription_count; j++) {
            cin >> patients[i].prescriptions[j];
        }
    }

    displayPatientDetails(patients, patientCount);

    string newDiagnosis;
    cout << "\nUpdate diagnosis for first patient. Enter new diagnosis: ";
    cin >> newDiagnosis;
    updateDiagnosis(patients[0], newDiagnosis);
    displayPatientDetails(patients, patientCount);

    return 0;
}

