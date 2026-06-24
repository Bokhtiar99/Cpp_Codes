#include<iostream>
#include<string>
#include<ctime>
using namespace std;

class medibox{
    public:
      string medicineNmae;
      string batchNumber;
      string ExpiryDate;
      void in(){
      cout<<"Enter medicine name :"<<endl;
      cin>>medicineNmae;
      cout<<"Enter Batch Number:"<<endl;
      cin>>batchNumber;
      cout<<"Enter Expiry date:"<<endl;
      cin>>ExpiryDate;
      };

      class medicineStorage{
  public:
    void addBox{
    medibox m;
    m.input();

    }
      };

      void display(){
      cout<<"Name :"<<medicineNmae;
      cout<<"Batch :"<<batchNumber;
      cout<<"Exp Date :"<<ExpiryDate;
      }
      int* arr;
      int n=8;
      int top;
      stack(){
      arr=new int[8];
      top=-1;
      }
      void push(int x){
      if(top==n-1){
        cout<<"Stack Full "<<endl;
      }
      top++;
      arr[top]=x;
      }
      void pop(){
      if(top==-1){
        cout<<"Stack is empty"<<endl;
        return;
      }
      top--;
      }


      };
string todaydate(){
time t =t(nullptr);

}

int main(){

}
