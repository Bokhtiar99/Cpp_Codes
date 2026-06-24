#include<iostream>
using namespace std;
class stack{
public:
    int* arr;
    int n=10;
    int top;
    stack (){
    arr =new int [10];
    top=-1;
    }
    void push(int x){
    if(top==n-1){
        cout<<"Stack Full"<<endl;
    }
    top++;
    arr[top]=x;
    }
    void pop(){
    if(top==-1){
        cout<<"Stack Empty"<<endl;
        return;
    }
    top--;
    }

     int showtop(){
        if(top == -1){
            cout << "Stack Empty" << endl;
            return -1;
        }
        return arr[top];
    }

    void display(){
     cout<<"Stack: ";
     for(int i=top; i>=0; i--){
        cout<<arr[i]<<" ";
     }
    }

};
int main(void){
stack s;
s.push(5);
s.push(8);
s.push(6);
s.push(10);
s.display();
cout<<endl;

s.pop();
s.pop();
s.display();
cout<<endl;

int t=s.showtop();
if(t==-1){
    cout<<"Stack Empty"<<endl;
}
else{
    cout<<"Top Element:"<<t<<endl;
}
return 0;
}

