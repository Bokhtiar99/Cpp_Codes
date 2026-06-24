#include <iostream>
using namespace std;
int main(){
    int arr[10] = {8, 4, 6, 1, 6, 9, 6, 1, 9, 8};
    int searchNum;
    int aa=0;
    cout<<"Enter number to search: ";
    cin>>searchNum;

    for (int i=0; i<10; i++){
        if (arr[i] == searchNum){
            aa++;
        }
    }
    if (aa > 0){
        cout<<searchNum<<" appears "<<aa<<" times."<<endl;
    } else {
        cout<<"Number not found."<<endl;
    }
    return 0;
}

