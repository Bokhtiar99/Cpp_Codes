#include<iostream>
using namespace std;
int main(){
    int arr[10] ={8, 4, 4, 1, 6, 9, 6, 1, 8, 8};
    cout<<"Element occurrence count:"<<endl;
    for (int i=0; i<10; i++){
        int occurrence=0;
        for(int j=0; j<i; j++){
            if(arr[i]==arr[j]){
                occurrence=1;
            }
        }
        if(occurrence==0){
            for (int k=0; k<10; k++) {
                if (arr[i]==arr[k]) {
                    occurrence++;
                }
            }
            cout<<arr[i]<<" occurs = "<<occurrence;
            if(occurrence==1) {
                cout<<endl;
            } else{
                cout<<endl;
            }
        }
    }
    return 0;
}

