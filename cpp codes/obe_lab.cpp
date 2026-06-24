#include<iostream>
using namespace std;
void generatePascalTRiangle(int numrows)
{
  int triangle[numrows][numrows];
  for(int i=0; i<numrows; i++){
    for(int j=0; j<=i; j++){
        if(j==0 || j==i){
            triangle[i][j]=1;
        }
        else{
            triangle[i][j]=triangle[i-1][j-1]+triangle [i-1][j];
        }
    }
  }
  for(int i=0; i<numrows; i++){
    for(int k=0; k<numrows-i-1; k++){
     cout<<" ";
     for(int j=0; j<=i; j++){
        cout<<triangle[i][j]<<" ";
     }
     cout<<endl;
    }
  }
}
int main()
{
    int numrows;
    cout<<"Enter the number of rows of the pascal's triangle:";
    cin>>numrows;
    generatePascalTRiangle(numrows);
    return 0;
}
