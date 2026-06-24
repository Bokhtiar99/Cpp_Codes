#include<iostream>
using namespace std;
void Merge (int L[],int R[], int A[]){
    int nL = sizeof(L)/4;
    int nR =sizeof (R)/4;
    int i,j,k;
    i = j = k = 0;
    while ( i < nL && j< nR){
     if (L[i] <= R [j]){
         A[k] = L[i];
         i = j+1;
     }
     else {
         A[k] = R[j];
         j= j+1;
     }
     k=k+1;
    }
    while (i<nL){
     A[k] = L[i]; i=i+1; k=k+1;}
     while (j<nR){
         A[k] = R[j]; j=j+1; k=k+1;
     }

 }
 void Mergesort(int A[]){
   int n=sizeof (A)/4;
    if(n<2)
    return;
   int mid = n/2;
   int L[mid];
   int R[n-mid];
    for(int i=0; i<mid; i++){
        L[i] = A[i];
    }
    for(int i=mid; i<n; i++ ){
        R[i-mid]= A[i];
    }
    Mergesort(L);
    Mergesort(R);
    Merge(L,R,A);
}

int main () {
    int n;
    cout<<"Enter the number of element :";
    cin>>n;
    int A[n];
    int R[n];
    int L[n];
    cout<<"Enter data for the array :"<<endl;
     
}
