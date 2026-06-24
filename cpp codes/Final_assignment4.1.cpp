#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;
class Employee {
private:
    string name;
    int id;
    string jobTitle;
    float salary;
public:
    Employee(string name, int id, string jobTitle, float salary) : name(name), id(id), jobTitle(jobTitle), salary(salary) {}

    string getName() const { return name; }
    int getId() const { return id; }
    string getJobTitle() const { return jobTitle; }
    float getSalary() const { return salary; }

    void setSalary(float newSalary) { salary = newSalary; }

    void display() const {
        cout << "ID: " << id << " | Name: " << name << " | Job Title: " << jobTitle << " | Salary: $" << fixed << setprecision(2) << salary << endl;
    }
};

class EmployeeManagementSystem {
private:
    vector<Employee> employees;
    const int MAX_EMPLOYEES = 100;
public:
    void addEmployee() {
        if (employees.size() >= MAX_EMPLOYEES) {
            cout << "Maximum number of employees reached." << endl;
            return;
        }
        string name, jobTitle;
        int id;
        float salary;
        cout << "Enter employee name: ";
        getline(cin >> ws, name);
        cout << "Enter employee ID: ";
        cin >> id;
        cout << "Enter employee job title: ";
        getline(cin >> ws, jobTitle);
        cout << "Enter employee salary: ";
        cin >> salary;
        employees.push_back(Employee(name, id, jobTitle, salary));
        cout << "Employee added successfully." << endl;
    }
    void showAllEmployees() const {
        if (employees.empty()) {
          cout << "No employees found." << endl;
            return;
        }
        cout << "Employees List:" << endl;
        for (const auto &emp : employees) {
            emp.display();
        }
    }
    float calculatePayroll() const {
        float totalPayroll = 0;
        for (const auto &emp : employees) {
            totalPayroll += emp.getSalary();
        }
        return totalPayroll;
    }
    void generatePayslip(int employeeId) const {
        for (const auto &emp : employees) {
            if (emp.getId() == employeeId) {
                cout << "Payslip for Employee ID " << employeeId << ":" << endl;
                cout << "Name: " << emp.getName() << endl;
                cout << "Job Title: " << emp.getJobTitle() << endl;
                cout << "Gross Salary: $" << fixed << setprecision(2) << emp.getSalary() << endl;
                float netPay = emp.getSalary();
                cout << "Net Pay: $" << netPay << endl;
                return;
            }
        }
        cout << "Employee with ID " << employeeId << " not found." << endl;
    }
    void generatePayrollReport() const {
        if (employees.empty()) {
            cout << "No employees found." << endl;
            return;
        }
        cout << "Payroll Report:" << endl;
        cout << "Total Monthly Payroll Expenses: $" << fixed << setprecision(2) << calculatePayroll() << endl;
    }
};
int main() {
    EmployeeManagementSystem EMS;
    int choice;
    int employeeId;
    do {
        cout << "\nEmployee Management System Menu:" << endl;
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
                cin.ignore();
                EMS.addEmployee();
                break;
            case 2:
                EMS.showAllEmployees();
                break;
            case 3:
                cout << "Total Monthly Payroll Expenses: $" << EMS.calculatePayroll() << endl;
                break;
            case 4:
                cout << "Enter employee ID to generate payslip: ";
                cin >> employeeId;
                EMS.generatePayslip(employeeId);
                break;
            case 5:
                EMS.generatePayrollReport();
                break;
            case 6:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 6." << endl;
        }
    } while (choice != 6);

    return 0;
}
