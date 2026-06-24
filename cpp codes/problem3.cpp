#include <iostream>
using namespace std;
int main() {
    int A[10]={8, 4, 6, 1, 6, 9, 6, 1, 9, 8};
    int num;
    int aa=0;
    cout<<"Input a number to search:";
    cin>>num;
    for (int i=0; i<10; i++) {
        if (A[i]==num) {
            aa++;
        }
    }
    cout<<"The number occurs "<<aa<<" times in the array"<<endl;
    return 0;
}
