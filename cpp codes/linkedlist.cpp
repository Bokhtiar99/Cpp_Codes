/*
write a c++ code to implement following linked List operations :
1. traversal
2. Insertion
3. Searching
4. Deletion
*/

#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
void traverse(Node* head){
    Node* temp = head;
    cout<<"Linked List: ";
    while(temp != nullptr){
        cout<<temp->data<<" , ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
bool search(Node* head, int key){
    Node* temp = head;
    while (temp != nullptr){
        if (temp->data == key){
            return true;
        }
        temp = temp->next;
    }
    return false;
}
 int main(){
    Node* head = nullptr;
    Node* temp = nullptr;
    Node* newNode = nullptr;
    for (int i = 1; i <= 4; i++){
        newNode = new Node();
        newNode->data =i*10;
        newNode->next =nullptr;
        if (head==nullptr){
            head=newNode;
            temp=head;
        }
        else{
            temp->next=newNode;
            temp=temp->next;
        }
    }
    traverse(head);
    int key=20;
    if (search(head, key)){
        cout<<"Value "<<key<<" found in the list."<<endl;
    } else {
        cout<<"Value "<<key<<" not found in the list."<< endl;
    }
    return 0;
 }
