#include<iostream>
using namespace std;
int stringsearch(string name,string flower[8])
{
   for(int i=0;i<8;i++){
    if(flower[i]==name){
        cout<<"The flower name is present in the array\n";
        return 0 ;
    }
   }

   cout<<"not present\n";

}
int main()
{
   string flower[8]={"a","b","c","d","e","f","g","h"};
    cout<<"search?:";
    string name;
    getline(cin,name);
    stringsearch(name,flower);
    cin.ignore();
}

