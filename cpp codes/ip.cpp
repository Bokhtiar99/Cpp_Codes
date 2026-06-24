/*#include<iostream>
using namespace std;
int main ()
{
    int sale[6],i;
    float total,avg;
    cout<<"input 6 month selling price :";
    for(i=1;i<=sale[6];i++){
        cin>>sale[6];
       total+=total
    }
    avg=total/6
    if(avg>5000){
        cout<<"sale increasing";
    }
    else{
        cout<<"decreasing";
    }
}
*/

#include<iostream>
using namespace std;

int main ()
{
    int sale[6], i;
    float total = 0, avg;

    cout << "Input 6 month selling prices:";
    for(i = 0; i < 6; i++){
        cin >> sale[i];
        total += sale[i];
    }

    avg = total / 6;

    if(avg > 5000){
        cout << "Sale increasing";
    }
    else{
        cout << "Sale decreasing";
    }

    return 0;
}
