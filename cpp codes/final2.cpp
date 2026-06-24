/*#include<iostream>
using namespace std;
void subtraction(float num1, float num2)//with parameter
{
    float result;
    result=num1-num2;
    cout<<"Subtraction:"<<result<<endl;
}
int main()
{
    float a,b;
    cout<<"Number1:";
    cin>>a;
    cout<<"Number2:";
    cin>>b;
    subtraction(a,b);
    return 0;
}*/

#include<iostream>
using namespace std;
void multiplicaton()//parameterless function
{
    float num1,num2,mult;
    cout<<"Num1:";
    cin>>num1;
    cout<<"Num2:";
    cin>>num2;
    mult=num1*num2;
    cout<<mult<<endl;
}
int main()
{
  multiplicaton();
  multiplicaton();
}
//

#include <iostream>
#include <queue>
using namespace std;

// Node for linked list (Permanent Record)
struct Node {
    string data;
    Node* next;
};

Node* head = NULL;

// Function to insert into permanent record (linked list)
void addToRecord(string req) {
    Node* newNode = new Node();
    newNode->data = req;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }
}

// Function to display permanent record
void displayRecord() {
    Node* temp = head;
    cout << "Permanent Record: ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Function to search for "Req2"
bool searchRequest(string req) {
    Node* temp = head;
    while (temp != NULL) {
        if (temp->data == req)
            return true;
        temp = temp->next;
    }
    return false;
}




int main() {
    queue<string> requestQueue;

    // Step 1: Add requests
    requestQueue.push("Req1");
    requestQueue.push("Req2");
    requestQueue.push("Req3");

    // Step 1.1: Delete one item (simulate serving Req1)
    if (!requestQueue.empty()) {
        string served = requestQueue.front();
        requestQueue.pop();
        addToRecord(served); // Add to permanent record
    }

    // Step 2: Serve remaining requests and add to permanent record
    while (!requestQueue.empty()) {
        string served = requestQueue.front();
        requestQueue.pop();
        addToRecord(served);
    }

    // Step 2.1: Display permanent record
    displayRecord();

    // Step 3: Search for Req2
    string searchFor = "Req2";
    if (searchRequest(searchFor)) {
        cout << searchFor << " was served." << endl;
    } else {
        cout << searchFor << " was NOT served." << endl;
    }

    return 0;
}
