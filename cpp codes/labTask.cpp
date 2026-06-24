#include<iostream>
using namespace std;
void selectionSort(int arr[], int size ){
   int min;
   for(int i=size-1; i>0; i++){
        min=i;
        for(int j=i-1; j<size; j++){
            if(arr[j]<arr[min]){
               min=j;
            }
        }
        if(i != min){
            int temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
   }
}
int main (){
     int arr[5][5];
     int row=5;
     int col=5;

     cout<<"Enter the elements of the 5*5 array : "<<endl;

     for(int i=0; i<row; i++){
       for(int j=0; j<col; j++){
        cin>>arr[i][j];
       }
     }

     cout<<"The Desire array is :"<<endl;
     for(int i=0; i<row; i++){
       for(int j=0; j<col; j++){
        cout<<arr[i][j]<<"   ";
       }
       cout<<endl;
     }

     int count=0;
     int boundary[50];

     for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            if (i == 0 || i == row-1 || j == 0 || j == col-1){
                boundary[count++]=arr[i][j];
            }
        }
     }

     selectionSort(boundary, count);

     count=0;
     for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            if (i == 0 || i == row-1 || j == 0 || j == col-1){
                arr[i][j]=boundary[count++];
            }
        }
     }

     cout<<"The Sorted array is :"<<endl;
     for(int i=0; i<row; i++){
       for(int j=0; j<col; j++){
        cout<<arr[i][j]<<"   ";
       }
       cout<<endl;
     }

     return 0;
}
