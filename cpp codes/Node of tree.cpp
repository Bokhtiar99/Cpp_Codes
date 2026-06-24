#include<iostream>
using namespace std;
struct Node{
 int data;
 Node* left;
 Node* right;
 Node(int value){
  data=value;
  left=nullptr;
  right=nullptr;
  }
};

void inorder(Node* root){
  if(root){
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

  }
}


void preorder(Node* root){
  if(root){
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
  }
}

int main(){
  Node* root=new Node(100);
  root->left=new Node(50);
  root->right=new Node(150);

  cout<<"Root :"<<root->data<<endl;
  cout<<"Left Node :"<<root->left->data<<endl;
  cout<<"Right Node :"<<root->right->data<<endl;

  cout<<"Inorder: ";
  inorder(root);
  cout<<endl;
  cout<<"Preorder: ";
  preorder(root);

 return 0;
}
