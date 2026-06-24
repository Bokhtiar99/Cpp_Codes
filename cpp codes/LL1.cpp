#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
void traverse(Node* head) {
    Node* temp = head;
    cout << "Linked List: ";
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
void insertAtEnd(Node*& head, int value) {
    Node* newNode = new Node{value, nullptr};
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}
void insertAtBeginning(Node*& head, int value) {
    Node* newNode = new Node{value, head};
    head = newNode;
}
void insertAtPosition(Node*& head, int value, int position) {
    if (position == 1) {
        insertAtBeginning(head, value);
        return;
    }

    Node* newNode = new Node{value, nullptr};
    Node* temp = head;
    int count = 1;

    while (temp != nullptr && count < position - 1) {
        temp = temp->next;
        count++;
    }

    if (temp == nullptr) {
        cout << "Position out of bounds!" << endl;
        delete newNode;
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

bool search(Node* head, int key) {
    Node* temp = head;
    while (temp != nullptr) {
        if (temp->data == key)
            return true;
        temp = temp->next;
    }
    return false;
}
void deleteNode(Node*& head, int key) {
    if (head == nullptr) return;
    if (head->data == key) {
        Node* toDelete = head;
        head = head->next;
        delete toDelete;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr && temp->next->data != key) {
        temp = temp->next;
    }

    if (temp->next == nullptr) {
        cout << "Value " << key << " not found!" << endl;
        return;
    }
    Node* toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}
int main() {
    Node* head = nullptr;
    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    insertAtEnd(head, 40);
    traverse(head);
    insertAtBeginning(head, 5);
    cout << "After insertion at beginning (5):" << endl;
    traverse(head);
    insertAtPosition(head, 15, 3);
    cout << "After insertion at position 3 (15):" << endl;
    traverse(head);
    int key = 20;
    if (search(head, key)) {
        cout << "Value " << key << " found in the list." << endl;
    } else {
        cout << "Value " << key << " not found in the list." << endl;
    }
    deleteNode(head, 20);
    cout << "After deletion of 20:" << endl;
    traverse(head);
    return 0;
}

