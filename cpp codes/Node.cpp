#include <iostream>
using namespace std;
struct Node {

    int data;

    Node* next;

};
int main() {

    Node* head = nullptr;

    Node* temp = nullptr;

    Node* newNode = nullptr;


    for (int i = 1; i <= 5; i++) {

        newNode = new Node();

        newNode->data = i * 10;

        newNode->next = nullptr;


        if (head == nullptr) {

            head = newNode;

            temp = head;

            cout<<"if running"<<endl;

        } else {

            temp->next = newNode;

            cout<<"From else newnode: "<<temp->next<<endl;

            temp = temp->next;

            cout<<"From else temp: "<<temp<<endl;

            cout<<"else running"<<endl;

        }

    }


    temp = head;

    while (temp != nullptr) {

        cout << temp->data << " ";

        cout<<"temp next: "<<temp->next<<" ";

        temp = temp->next;

    }

    return 0;

}
