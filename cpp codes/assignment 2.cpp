#include<iostream>
using namespace std;
int main (){
double buy,sell,profit,loss;
cout<<"Enter the buying price:";
cin>>buy;
cout<<"Enter the selling price:";
cin>>sell;
profit=sell-buy;
loss=buy-sell;
if(sell>buy){
    cout<<"Profit is:"<<profit<<endl;
}
else if(sell<buy){
    cout<<"loss is:"<<loss<<endl;
}
else{
    cout<<"No profit,NO loss"<<profit or loss;
}
return 0;
}

