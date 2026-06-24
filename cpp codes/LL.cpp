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
void insert(Node*& head, int value) {
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
    insert(head, 10);
    insert(head, 20);
    insert(head, 30);
    insert(head, 40);
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
