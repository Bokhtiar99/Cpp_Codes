/*#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
struct Employee {
    int id;
    string name;
    string jobTitle;
    double salary;
};
void addNewEmployee(Employee employees[], int& numEmployees);
void showAllEmployees(Employee employees[], int numEmployees);
void calculatePayroll(Employee employees[], int numEmployees);
void generatePayslip(Employee employees[], int numEmployees);
void generatePayrollReport(Employee employees[], int numEmployees);

int main() {
    const int MAX_EMPLOYEES = 100;
    Employee employees[MAX_EMPLOYEES];
    int numEmployees = 0;

    int choice;
    do {
        cout << "Employee Management System" << endl;
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
                addNewEmployee(employees, numEmployees);
                break;
            case 2:
                showAllEmployees(employees, numEmployees);
                break;
            case 3:
                calculatePayroll(employees, numEmployees);
                break;
            case 4:
                generatePayslip(employees, numEmployees);
                break;
            case 5:
                generatePayrollReport(employees, numEmployees);
                break;
            case 6:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 6);

    return 0;
}

void addNewEmployee(Employee employees[], int& numEmployees) {
    if (numEmployees >= 100) {
        cout << "Maximum number of employees reached." << endl;
        return;
    }

    cout << "Enter ID: ";
    cin >> employees[numEmployees].id;
    cout << "Enter name: ";
    cin.ignore();
    getline(cin, employees[numEmployees].name);
    cout << "Enter job title: ";
    getline(cin, employees[numEmployees].jobTitle);
    cout << "Enter salary: ";
    cin >> employees[numEmployees].salary;

    numEmployees++;
}

void showAllEmployees(Employee employees[], int numEmployees) {
    if (numEmployees == 0) {
        cout << "No employees found." << endl;
        return;
    }

    cout << "ID\tName\t\tJob Title\tSalary" << endl;
    for (int i = 0; i < numEmployees; i++) {
        cout << employees[i].id << "\t" << setw(20) << left << employees[i].name << "\t"
             << setw(10) << left << employees[i].jobTitle << "\t" << employees[i].salary << endl;
    }
}

void calculatePayroll(Employee employees[], int numEmployees) {
    double totalPayroll = 0;
    for (int i = 0; i < numEmployees; i++) {
        totalPayroll += employees[i].salary;
    }
    cout << "Total monthly payroll expenses: $" << totalPayroll << endl;
}

void generatePayslip(Employee employees[], int numEmployees) {
    int id;
    cout << "Enter employee ID: ";
    cin >> id;

    bool found = false;
    for (int i = 0; i < numEmployees; i++) {
        if (employees[i].id == id) {
            cout << "Name: " << employees[i].name << endl;
            cout << "Job Title: " << employees[i].jobTitle << endl;
            cout << "Gross Salary: $" << employees[i].salary << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Employee not found." << endl;
    }
}

void generatePayrollReport(Employee employees[], int numEmployees) {
    if (numEmployees == 0) {
        cout << "No employees found." << endl;
        return;
    }

    calculatePayroll(employees, numEmployees);
    }*/

#include <iostream>
#include <string>
using namespace std;

void addEmp(string ids[], string names[], string titles[], double salaries[], double netpay[], int& numEmps);
void showEmps(string ids[], string names[], string titles[], double salaries[], double netpay[], int numEmps);
void calcPay(double salaries[], double netpay[], int numEmps);
void genPayslip(string ids[], string names[], string titles[], double salaries[], double netpay[], int numEmps);
void genPayReport(double salaries[], int numEmps);

int main() {
    const int MAX_EMPLOYEES = 100;
    string ids[MAX_EMPLOYEES];
    string names[MAX_EMPLOYEES];
    string titles[MAX_EMPLOYEES];
    double salaries[MAX_EMPLOYEES];
    double netpay[MAX_EMPLOYEES];
    int numEmps = 0;
    int choice;

    do {
        cout << "Employee Management System:\n";
        cout << "1. Add New Employee\n";
        cout << "2. Show All Employees\n";
        cout << "3. Calculate Payroll\n";
        cout << "4. Generate Payslip\n";
        cout << "5. Generate Payroll Report\n";
        cout << "6. Exit\n";
        cout << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addEmp(ids, names, titles, salaries, netpay, numEmps);
                break;
            case 2:
                showEmps(ids, names, titles, salaries, netpay, numEmps);
                break;
            case 3:
                calcPay(salaries, netpay, numEmps);
                break;
            case 4:
                genPayslip(ids, names, titles, salaries, netpay, numEmps);
                break;
            case 5:
                genPayReport(salaries, numEmps);
                break;
            case 6:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice.\n";
        }
    } while (choice != 6);

    return 0;
}

void addEmp(string ids[], string names[], string titles[], double salaries[], double netpay[], int& numEmps) {
    cout << "Enter employee ID: ";
    cin >> ids[numEmps];
    cout << "Enter employee name: ";
    cin.ignore();
    getline(cin, names[numEmps]);
    cout << "Enter employee job title: ";
    getline(cin, titles[numEmps]);
    cout << "Enter employee salary: ";
    cin >> salaries[numEmps];

    netpay[numEmps] = salaries[numEmps];

    numEmps++;

    cout << "Employee added successfully." << endl << endl;
}

void showEmps(string ids[], string names[], string titles[], double salaries[], double netpay[], int numEmps) {
    if (numEmps == 0) {
        cout << "No employees to display." << endl;
        return;
    }

    for (int i = 0; i < numEmps; ++i) {
        cout << "Employee ID: " << ids[i] << endl;
        cout << "Employee Name: " << names[i] << endl;
        cout << "Employee Job Title: " << titles[i] << endl;
        cout << "Employee Salary: $" << salaries[i] << endl;
        cout << "Employee Net Pay: $" << netpay[i] << endl;
        cout << endl;
    }
    cout << endl;
}

void calcPay(double salaries[], double netpay[], int numEmps) {
    if (numEmps == 0) {
        cout << "No employees to calculate payroll." << endl;
        return;
    }

    for (int i = 0; i < numEmps; ++i) {
        netpay[i] = salaries[i];
    }

    double totalPayroll = 0.0;
    for (int i = 0; i < numEmps; ++i) {
        totalPayroll += netpay[i];
    }

    cout << "Total Monthly Payroll Expenses: $" << totalPayroll << endl;
    cout << endl;
}

void genPayslip(string ids[], string names[], string titles[], double salaries[], double netpay[], int numEmps) {
    if (numEmps == 0) {
        cout << "No employees available to generate payslip." << endl;
        return;
    }

    string id;
    cout << "Enter employee ID: ";
    cin >> id;

    bool found = false;
    for (int i = 0; i < numEmps; ++i) {
        if (ids[i] == id) {
            cout << "Payslip for Employee ID: " << id << endl;
            cout << "Name: " << names[i] << endl;
            cout << "Job Title: " << titles[i] << endl;
            cout << "Gross Salary: $" << salaries[i] << endl;
            cout << "Net Pay: $" << netpay[i] << endl;

            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Employee not found." << endl;
    }
    cout << endl;
}

void genPayReport(double salaries[], int numEmps) {
    if (numEmps == 0) {
        cout << "No employees available to generate payroll report." << endl;
        return;
    }

    double totalPayroll = 0.0;
    for (int i = 0; i < numEmps; ++i) {
        totalPayroll += salaries[i];
    }

    cout << "Total Payroll Expenses for the Month: $" << totalPayroll << endl;
    cout << endl;

}

