#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Employee {
    int id;
    string name;
    string jobTitle;
    double salary;
};

const int MAX_EMPLOYEES = 100;
Employee employees[MAX_EMPLOYEES];
int numEmployees = 0;

void addNewEmployee() {
    if (numEmployees >= MAX_EMPLOYEES) {
        cout << "Cannot add more employees. Maximum capacity reached." << endl;
        return;
    }
    Employee newEmployee;
    cout << "Enter Employee ID: ";
    cin >> newEmployee.id;
    cin.ignore();

    cout << "Enter Employee Name: ";
    getline(cin, newEmployee.name);

    cout << "Enter Employee Job Title: ";
    getline(cin, newEmployee.jobTitle);

    cout << "Enter Employee Salary: ";
    cin >> newEmployee.salary;

    employees[numEmployees++] = newEmployee;
}

void showAllEmployees() {
    cout << setw(5) << "ID" << setw(20) << "Name" << setw(20) << "Job Title" << setw(10) << "Salary" << endl;
    for (int i = 0; i < numEmployees; ++i) {
        cout << setw(5) << employees[i].id << setw(20) << employees[i].name << setw(20) << employees[i].jobTitle << setw(10) << employees[i].salary << endl;
    }
}

double calculatePayroll() {
    double totalPayroll = 0.0;
    for (int i = 0; i < numEmployees; ++i) {
        totalPayroll += employees[i].salary;
    }
    return totalPayroll;
}

void generatePayslip(int id) {
    for (int i = 0; i < numEmployees; ++i) {
        if (employees[i].id == id) {
            cout << "Name: " << employees[i].name << endl;
            cout << "Job Title: " << employees[i].jobTitle << endl;
            cout << "Gross Salary: " << employees[i].salary << endl;
            cout << "Net Pay: " << employees[i].salary << endl;
            return;
        }
    }
    cout << "Employee not found." << endl;
}

void generatePayrollReport() {
    double totalPayroll = calculatePayroll();
    cout << "Total Payroll Expenses for the Month: $" << totalPayroll << endl;
}

int main() {
    int choice;
    do {
        cout << "Employee Management System Menu" << endl;
        cout << "1. Add New Employee" << endl;
        cout << "2. Show All Employees" << endl;
        cout << "3. Calculate Payroll" << endl;
        cout << "4. Generate Payslip" << endl;
        cout << "5. Generate Payroll Report" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addNewEmployee();
                cout << "Employee added successfully!" << endl;
                break;
            case 2:
                showAllEmployees();
                break;
            case 3:
                cout << "Total Payroll Expenses for the Month: $" << calculatePayroll() << endl;
                break;
            case 4:
                int id;
                cout << "Enter Employee ID: ";
                cin >> id;
                generatePayslip(id);
                break;
            case 5:
                generatePayrollReport();
                break;
            case 6:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 6);

    return 0;
}
