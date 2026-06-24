#include<iostream>
using namespace std;
struct Node{
string data;
Node* next;
};
Node* head=NULL;

void AddRecord(string req){
Node* newNode=new Node();
newNode->data=req;
newNode->next=NULL;
if(head==NULL){
    head=newNode;
}
else{
    Node* temp=head;
    while(temp->next !=NULL)
        temp=temp->next;
        temp->newNode;
}
}

void DisplayRecord(){
Node* temp=head;
cout<<"Permanent Record :";
while(temp !=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
}
cout<<endl;
}

void searchReq(string req){
Node* temp=head;
while(temp !=NULL){
        if(temp->data==req){
            cout<<"Found: "<<req<<endl;
            return;
        }
        temp=temp->next;
}
cout<<"Not Found "<<endl;
}

int main(){

}
