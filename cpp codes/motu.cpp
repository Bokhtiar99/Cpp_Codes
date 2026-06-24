   #include <iostream>
using namespace std;


struct Node {
    int data;
    Node* prev;
    Node* next;
};

Node* head = NULL;


void append(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;
    newNode->prev = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newNode;
        newNode->prev = temp;
    }
}


void insertBeforePosition(int pos, int value) {
    Node* newNode = new Node();
    newNode->data = value;

    if (pos == 1) {
        newNode->next = head;
        newNode->prev = NULL;
        if (head != NULL) head->prev = newNode;
        head = newNode;
        return;
    }

    Node* temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL || temp->next == NULL) return;

    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next->prev = newNode;
    temp->next = newNode;
}


void deleteAtPosition(int pos) {
    if (head == NULL) return;

    Node* temp = head;
    if (pos == 1) {
        head = head->next;
        if (head != NULL) head->prev = NULL;
        delete temp;
        return;
    }

    for (int i = 1; i < pos && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL) return;

    if (temp->prev != NULL) temp->prev->next = temp->next;
    if (temp->next != NULL) temp->next->prev = temp->prev;

    delete temp;
}


int countLessThan20() {
    Node* temp = head;
    int count = 0;
    while (temp != NULL) {
        if (temp->data < 20) count++;
        temp = temp->next;
    }
    return count;
}


int findSmallestPosition() {
    Node* temp = head;
    int minVal = temp->data;
    int pos = 1;
    int minPos = 1;
    while (temp != NULL) {
        if (temp->data < minVal) {
            minVal = temp->data;
            minPos = pos;
        }
        temp = temp->next;
        pos++;
    }
    return minPos;
}


void printList() {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void doStackOperations() {
    int stack[100];
    int top = -1;


    Node* temp = head;
    while (temp != NULL) {
        if (temp->data % 2 != 0) {
            stack[++top] = temp->data;
        }
        temp = temp->next;
    }

    cout << "Stack after pushing odd elements: ";
    for (int i = 0; i <= top; i++) cout << stack[i] << " ";
    cout << endl;


    if (top >= 0) top--;

    cout << "Stack after pop: ";
    for (int i = 0; i <= top; i++) cout << stack[i] << " ";
    cout << endl;


    if (top >= 0) {
        int product = stack[top] * stack[0];
        stack[++top] = product;
    }

    cout << "Stack after pushing product of top and bottom: ";
    for (int i = 0; i <= top; i++) cout << stack[i] << " ";
    cout << endl;
}

int main() {
    append(23);
    append(18);
    append(9);
    append(34);
    append(12);


    insertBeforePosition(3, 15);


    Node* temp = head;
    int pos = 1;
    while (temp != NULL && temp->data != 18) {
        temp = temp->next;
        pos++;
    }
    if (temp != NULL && temp->next != NULL) {
        deleteAtPosition(pos + 1);
    }


    int count = countLessThan20();
    insertBeforePosition(count, 6);


    int smallestPos = findSmallestPosition();
    deleteAtPosition(smallestPos);

    cout << "Final List: ";
    printList();


    doStackOperations();

    return 0;
}


