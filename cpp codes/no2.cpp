#include<iostream>
using namespace std;
struct Customer{
    int id;
    char name[50];
    int age;
    char address[50];
    char country[20];
};
int main(){
    int SIZE=4;
    Customer customers[SIZE]={
        {89, "Ayaan Rahman", 23, "Road 5, Dhanmondi, Dhaka", "Bangladesh"},
        {90, "Nayra Karim", 21, "Bashundhara R/A, Dhaka", "Bangladesh"},
        {91, "Zayan Ahmed", 30, "Kolkata, West Bengal", "India"},
        {92, "Meher Fatima", 56, "Johar Town, Lahore", "Pakistan"}
    };
    cout<<"Prize Winner Customers age less than 30:"<<endl;
    for(int i=0; i<SIZE; i++){
        if(customers[i].age<30){
            cout<<"ID: "<<customers[i].id<<endl;
            cout<<"Name: "<<customers[i].name<<endl;
            cout<<"Age: "<<customers[i].age<<endl;
            cout<<"Address: "<<customers[i].address<<endl;
            cout<<"Country: "<<customers[i].country << endl;
        }
    }
    return 0;
}
