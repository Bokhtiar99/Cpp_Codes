#include<iostream>
using namespace std;

void swap(int *a,int *b){
int temp= *a;
*a=*b;
*b=temp;
}

void printArray(int array[],int size){
  for(int i=0; i<size; i++){
    cout<<array[i]<<" ";
  }
  cout<<endl;
}
void selectionSort(int arr[],int size){
for(int step=0;step<size-1;step++){
int min_idx=step;
for(int i=step+1;i<size;i++){
    if(arr[i]<arr[min_idx])
        min_idx=i;
}
swap(&arr[min_idx],&arr[step]);
}
}
int main(){
int n=4;
int a[4][4];
cout<<"Enter 4*4 Matrix :"<<endl;
for(int i=0; i<n; i++){
    for (int j=0; j<n; j++) {
      cin>>a[i][j];
    }
  }
int boundary[20];
int k=0;
 for(int j=0; j<n; j++)
    boundary[k++]=a[0][j];

  for(int i=1; i<n; i++)
    boundary[k++] = a[i][n - 1];

  for(int j=n - 2; j>=0; j--)
    boundary[k++]=a[n - 1][j];

  for(int i= n - 2; i > 0; i--)
    boundary[k++] = a[i][0];

  selectionSort(boundary, k);
  int x = 0;

  for(int j = 0; j < n; j++)
    a[0][j] = boundary[x++];

  for(int i = 1; i < n; i++)
    a[i][n - 1] = boundary[x++];

  for(int j = n - 2; j >= 0; j--)
    a[n - 1][j] = boundary[x++];

  for(int i = n - 2; i > 0; i--)
    a[i][0] = boundary[x++];

  cout <<"Matrix after sorting boundary:"<<endl;
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      cout << a[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
  }
