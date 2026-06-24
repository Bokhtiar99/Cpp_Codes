#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements of array: ";
    cin>>n;
    int arr[n];
    cout <<"Enter "<<n<<" elements: ";
    for(int i = 0; i<n; i++) {
        cin>>arr[i];
    }
    cout<< "Original Order: ";
    for(int i=0; i<n; i++) {
        cout<< " " <<arr[i];
    }
    cout<<endl;
    cout<<"Reverse Order: ";
    for(int i=n-1; i>=0; i--) {
        cout<<" "<<arr[i];
    }
    cout<<endl;
    return 0;
}


