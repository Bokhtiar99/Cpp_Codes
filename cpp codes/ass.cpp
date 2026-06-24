#include<bits/stdc++.h>
using namespace std;

struct Employee {
    int id;
    string name, dept;
    stack<string> tasks;
};

class TaskSystem {
    deque<Employee> employees;
    queue<string> clientTasks;
    set<int> idList;

    struct Department {
        string name;
        Department *left, *right;
        Department(string n) {
            name = n;
            left = right = NULL;
        }
    };

    Department* root;

public:
    TaskSystem() {
        buildDepartmentTree();
    }

    void addEmployee(int id, string name, string dept) {
        Employee emp;
        emp.id = id;
        emp.name = name;
        emp.dept = dept;
        employees.push_back(emp);
        idList.insert(id);
    }

    void displayEmployees() {
        cout << "Employees:\n";
        for (auto e : employees) {
            cout << "ID: " << e.id << ", Name: " << e.name << ", Dept: " << e.dept << "\n";
        }
    }

    void assignIndividualTask(int id, string task) {
        for (auto &e : employees) {
            if (e.id == id) {
                e.tasks.push(task);
            }
        }
    }

    void showTaskStackFor(int id) {
        for (auto &e : employees) {
            if (e.id == id) {
                cout << "## Task Stack for " << e.name << " ##\n";
                stack<string> copy = e.tasks;
                while (!copy.empty()) {
                    cout << "Pushed Task: " << copy.top() << "\n";
                    copy.pop();
                }

                if (!e.tasks.empty()) {
                    cout << "First Employee's Top Task: " << e.tasks.top() << "\n";
                    e.tasks.pop();
                    if (!e.tasks.empty()) {
                        cout << "After Completing One Task: " << e.tasks.top() << "\n";
                    }
                }
            }
        }
    }

    void enqueueTask(string task) {
        clientTasks.push(task);
        cout << "Task Added: " << task << "\n";
    }

    void distributeTasks() {
        cout << "## Assigning Tasks to Employees ##\n";
        int index = 0;
        while (!clientTasks.empty()) {
            employees[index].tasks.push(clientTasks.front());
            cout << "Assigning to " << employees[index].name << ": " << clientTasks.front() << "\n";
            clientTasks.pop();
            index = (index + 1) % employees.size();
        }
    }

    void showAllEmployeeTasks() {
        cout << "## Employee Task Review ##\n";
        for (auto e : employees) {
            cout << "Tasks for " << e.name << ":\n";
            if (!e.tasks.empty()) {
                cout << "Latest Task: " << e.tasks.top() << "\n";
            }
        }
    }

    void buildDepartmentTree() {
        root = new Department("CEO");
        root->left = new Department("CTO");
        root->right = new Department("CFO");
        root->left->left = new Department("Dev");
        root->left->right = new Department("QA");
        root->left->left->left = new Department("Lead");
        root->left->left->right = new Department("QA Lead");
    }

    void preorderDept(Department* node) {
        if (node == NULL) return;
        cout << node->name << " ";
        preorderDept(node->left);
        preorderDept(node->right);
    }

    void showDepartmentTree() {
        cout << "## Department Hierarchy (Preorder Traversal) ##\n";
        preorderDept(root);
        cout << "\n";
    }

    void showSortedIDs() {
        cout << "## Employee IDs in Sorted Order ##\n";
        cout << "Inserted IDs: ";
        for (int id : idList) {
            cout << id << ", ";
        }
        cout << "\nInorder Traversal (Sorted): ";
        for (int id : idList) {
            cout << id << " ";
        }
        cout << "\n";
    }

    void searchEmployeeID(int id) {
        cout << "## ID Search Results ##\n";
        if (idList.count(id)) {
            cout << "Searching for " << id << ": Found\n";
        } else {
            cout << "Searching for " << id << ": Not Found\n";
        }
    }
};

int main() {
    TaskSystem company;

    company.addEmployee(101, "Rafi", "Dev");
    company.addEmployee(102, "Mariya", "QA");
    company.addEmployee(103, "Jamil", "HR");

    company.displayEmployees();

    company.assignIndividualTask(101, "Fix Login Bug");
    company.assignIndividualTask(101, "Code Review");

    company.showTaskStackFor(101);

    cout << "\n## Enqueuing Client Tasks ##\n";
    company.enqueueTask("Client Task 1");
    company.enqueueTask("Client Task 2");
    company.enqueueTask("Client Task 3");
    company.enqueueTask("Client Task 4");
    company.enqueueTask("Client Task 5");

    company.distributeTasks();

    company.showAllEmployeeTasks();

    company.showDepartmentTree();

    // Adding more IDs for sorting and search
    company.addEmployee(100, "TestEmp1", "DummyDept");
    company.addEmployee(105, "TestEmp2", "TestDept");

    company.showSortedIDs();

    company.searchEmployeeID(102);
    company.searchEmployeeID(104);

  
}
