#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    if(n<2){
        cout<<"You need minimum two elements to find second largest and second smallest"<<endl;
    }
    int arr[n];
    cout<<"Enter "<<n<<" elements: ";
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int firstMin =arr[0], secondMin =arr[0];
    int firstMax =arr[0], secondMax =arr[0];
    for (int i=1; i<n; i++) {
        if (arr[i]<firstMin) {
            secondMin = firstMin;
            firstMin = arr[i];
        } else if(arr[i] < secondMin || secondMin == firstMin) {
            secondMin = arr[i];
        }
        if (arr[i]>firstMax) {
            secondMax=firstMax;
            firstMax=arr[i];
        } else if (arr[i]>secondMax || secondMax == firstMax) {
            secondMax = arr[i];
        }
    }
    if (firstMin==secondMin){
        cout << "There is no distinct second smallest element."<<endl;
    }
    else{
        cout << "The second smallest element is: " <<secondMin<<endl;
    }
    if(firstMax == secondMax){
        cout << "There is no distinct second largest element."<<endl;
    }
    else{
        cout << "The second largest element is: " <<secondMax<<endl;
    }

    return 0;
}
