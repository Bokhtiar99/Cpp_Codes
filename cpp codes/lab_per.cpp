#include <iostream>
#include <string>
using namespace std;

struct book {
    int id;
    string name;
    int days;
    book* next;
};
void insertbook(book*& head, int id, string name, int days) {
    book* newbook=new book{id, name, days, nullptr};
    if (!head){
        head = newbook;
        return;}
        book* temp=head;
        while (temp->next) temp=temp->next;
        temp->next=newbook;
}
void display(book* head){
    book* temp = head;
    while (temp) {
        cout << "(" << temp->id << ", " << temp->name << ", " << temp->days << ") -> ";
        temp = temp->next;
    }
    cout << "Null"<<endl;
}
void searchbook(book* head, string target){
    int pos = 1, count = 0;
    book* temp = head;
    cout << "Search Book Name: " << target <<endl;
    while (temp) {
        if (temp->name == target) {
            count++;
            cout << "Found the Book \"" << target << "\" at position " << pos <<endl;
        }
        temp = temp->next;
        pos++;
    }
    if (count == 0)
        cout << "Book not found"<<endl;
    else
        cout << "Book "<<endl;
        cout << target << "\" appears " << count << " times"<<endl;
}
void deleteByName(book*& head, string target) {
    while (head && head->name == target) {
        book* toDelete = head;
        head = head->next;
        delete toDelete;
    }
    book* temp = head;
    while (temp && temp->next) {
        if (temp->next->name == target) {
            book* toDelete = temp->next;
            temp->next = temp->next->next;
            delete toDelete;
        } else {
            temp = temp->next;
        }
    }
}
