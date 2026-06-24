#include <iostream>

#include <string>

using namespace std;

// Simple Book node

struct Book {

    int id;

    string name;

    int days;

    Book* next;

};

// Print list forward

void printList(Book* head) {

    while (head) {

        cout << head->id << ": " << head->name << " (" << head->days << " days)";

        if (head->next) cout << " -> ";

        head = head->next;

    }

    cout << "\n";

}

// Recursive reverse print

void printReverse(Book* head) {

    if (!head) return;

    printReverse(head->next);

    cout << head->id << ": " << head->name;

    if (head->next) cout << " -> ";

}

int main() {

    // 1) Create and link 4 books

    Book* b1 = new Book{1, "Math", 5, nullptr};

    Book* b2 = new Book{2, "Science", 3, nullptr};

    Book* b3 = new Book{3, "Math", 7, nullptr};

    Book* b4 = new Book{4, "History", 4, nullptr};

    b1->next = b2;

    b2->next = b3;

    b3->next = b4;

    Book* head = b1;

    // 2) Print forward

    cout << "Books forward:\n";

    printList(head);

    // 3) Search for "Math"

    cout << "\nSearching for \"Math\":\n";

    Book* cur = head;

    int pos = 1, found = 0;

    while (cur) {

        if (cur->name == "Math") {

            cout << "Found at position " << pos << "\n";

            found++;

        }

        cur = cur->next;

        pos++;

    }

    if (!found) cout << "No matches.\n";

    // 4) Delete all "Math"

    cout << "\nDeleting \"Math\"...\n";

    // remove from front

    while (head && head->name == "Math") {

        Book* tmp = head;

        head = head->next;

        delete tmp;

    }

    // remove later nodes

    cur = head;

    while (cur && cur->next) {

        if (cur->next->name == "Math") {

            Book* tmp = cur->next;

            cur->next = tmp->next;

            delete tmp;

        } else {

            cur = cur->next;

        }

    }

    // 5) Print reversed

    cout << "\nBooks reversed after deletion:\n";

    printReverse(head);

    cout << "\n";

    // Cleanup

    while (head) {

        Book* tmp = head;

        head = head->next;

        delete tmp;

    }

    return 0;

}

