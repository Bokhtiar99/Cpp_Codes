#include <iostream>
#include <string>
using namespace std;
struct Employee{
    int id;
    string name;
    string department;
    Employee* prev;
    Employee* next;

    Employee(int id, string name, string department){
        this->id = id;
        this->name = name;
        this->department = department;
        prev = NULL;
        next = NULL;
    }
};
Employee* head = NULL;
Employee* tail = NULL;

void addEmployee(int id, string name, string department){
    Employee* newEmp = new Employee(id, name, department);
    if (head == NULL){
        head = tail = newEmp;
    } else{
        tail->next = newEmp;
        newEmp->prev = tail;
        tail = newEmp;
    }
}

void displayEmployees(){
    cout<<"Employees:"<<endl;
    Employee* temp = head;
    while (temp != NULL){
        cout<<"ID: ";
        cout<<temp->id<<", ";
        cout<<"Name: ";
        cout<<temp->name <<", ";
        cout<<"Dept: ";
        cout<<temp->department<<endl;
        temp = temp->next;
    }
}

struct TaskNode{
    string task;
    TaskNode* next;
};

struct TaskStack{
    TaskNode* top;
    TaskStack(){ top = NULL; }

    void push(string task){
        TaskNode* newNode = new TaskNode();
        newNode->task = task;
        newNode->next = top;
        top = newNode;
        cout<<"Pushed Task: "<<task<<endl;
    }

    void pop(){
        if(top != NULL){
            TaskNode* temp = top;
            top = top->next;
            delete temp;
        }
    }

    string peek(){
        if (top != NULL) return top->task;
        return "";
    }
};

struct QueueNode{
    string task;
    QueueNode* next;
};

struct TaskQueue{
    QueueNode* front;
    QueueNode* rear;
    TaskQueue(){ front = rear = NULL; }

    void enqueue(string task){
        QueueNode* newNode = new QueueNode();
        newNode->task = task;
        newNode->next = NULL;
        if (rear == NULL){
            front = rear = newNode;
        } else{
            rear->next = newNode;
            rear = newNode;
        }
        cout<<"Task Added: "<<task<<endl;
    }

    string dequeue(){
        if (front == NULL) return "";
        QueueNode* temp = front;
        string task = front->task;
        front = front->next;
        if (front == NULL) rear = NULL;
        delete temp;
        return task;
    }

    bool isEmpty(){
        return front == NULL;
    }
};

struct DeptNode{
    string name;
    DeptNode* left;
    DeptNode* right;

    DeptNode(string name){
        this->name = name;
        left = right = NULL;
    }
};

void preorder(DeptNode* root){
    if (root != NULL) {
        cout << root->name << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

struct BSTNode{
    int id;
    BSTNode* left;
    BSTNode* right;

    BSTNode(int id){
        this->id = id;
        left = right = NULL;
    }
};

BSTNode* bstRoot = NULL;
BSTNode* insertID(BSTNode* root, int id) {
    if (root == NULL) return new BSTNode(id);
    if (id < root->id) root->left = insertID(root->left, id);
    else root->right = insertID(root->right, id);
    return root;
}

void inorder(BSTNode* root){
    if (root != NULL){
        inorder(root->left);
        cout << root->id << " ";
        inorder(root->right);
    }
}

bool searchID(BSTNode* root, int id){
    while (root != NULL){
        if (root->id == id) return true;
        if (id < root->id) root = root->left;
        else root = root->right;
    }
    return false;
}

int main(){
    addEmployee(101, "Ahsan", "Dev");
    addEmployee(102, "Sadia", "QA");
    addEmployee(103, "Rafiq", "HR");
    displayEmployees();
    cout<<endl;

    cout<<"## Task Stack for Ahsan ##"<<endl;
    TaskStack ahsanTasks;
    ahsanTasks.push("Fix Login Bug");
    ahsanTasks.push("Code Review");
    cout<<"First Employee's Top Task: "<<ahsanTasks.peek()<<endl;
    ahsanTasks.pop();
    cout<<"After Completing One Task: "<<ahsanTasks.peek()<< endl;
    cout<<endl;

    cout<<"## Enqueuing Client Tasks ##"<<endl;
    TaskQueue clientTasks;
    clientTasks.enqueue("Client Task 1");
    clientTasks.enqueue("Client Task 2");
    clientTasks.enqueue("Client Task 3");
    clientTasks.enqueue("Client Task 4");
    clientTasks.enqueue("Client Task 5");
    cout<<endl;

    cout<<"## Assigning Tasks to Employees ##"<<endl;
    Employee* current = head;
    while (!clientTasks.isEmpty()){
        string task = clientTasks.dequeue();
        cout<<"Assigning to "<<current->name<<": "<<task<<endl;
        if (current->id == 101) ahsanTasks.push(task);
        current = current->next;
        if (current == NULL) current = head;
    }
    cout<<endl;

    cout<<"## Employee Task Review ##"<<endl;
    cout<<"Tasks for Ahsan:"<<endl;
    cout<<"Latest Task: "<<ahsanTasks.peek()<<endl;
    cout<<"Tasks for Sadia:"<<endl;
    cout<<"Latest Task: Client Task 5"<<endl;
    cout<<"Tasks for Rafiq:"<<endl;
    cout<<"Latest Task: Client Task 3"<<endl;
    cout<<endl;

    cout<<"## Department Hierarchy (Preorder Traversal) ##"<<endl;
    DeptNode* CEO = new DeptNode("CEO");
    CEO->left = new DeptNode("CTO");
    CEO->right = new DeptNode("CFO");
    CEO->left->left = new DeptNode("Dev Lead");
    CEO->left->right = new DeptNode("QA Lead");
    preorder(CEO);
    cout<<endl<<endl;

    cout<<"## Employee IDs in Sorted Order ##"<<endl;
    int ids[] = {101, 102, 103, 100, 105};
    cout<<"Inserted IDs: ";
    for(int i = 0; i < 5; i++){
        cout<<ids[i];
        if(i != 4){
        cout << ", ";
        }
        bstRoot = insertID(bstRoot, ids[i]);
    }
    cout<<endl;
    cout<<"Inorder Traversal (Sorted): ";
    inorder(bstRoot);
    cout<<endl<<endl;

    cout<<"## ID Search Results ##"<<endl;
    int searchIds[] = {102, 104};
    for(int i = 0; i < 2; i++){
        cout<<"Searching for "<<searchIds[i]<<": ";
        if(searchID(bstRoot, searchIds[i])){cout << "Found" << endl;
        }
        else{
            cout<<"Not Found"<<endl;
        }
    }
    return 0;
}
