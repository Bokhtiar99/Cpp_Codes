#include<iostream>
using namespace std;
int main()
{
    int item, quantity;
    float price, total;
    cout<<"Enter total numbers of item:";
    cin>>item;
    for(int i=0;i<item;i++){
    cout<<"Enter the quantity:";
    cin>>quantity;
    cout<<"Enter the price:";
    cin >>price;
    total+=price*quantity;
    }
    cout<<"Total price:"<<total;
    return 0;
}
