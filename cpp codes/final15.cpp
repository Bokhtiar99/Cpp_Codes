#include<iostream>
using namespace std;
int maximum(int n1,int n2, int n3, int n4)
{
    int max=n1;
    if(n2>max){
        max=n2;
    }
    else if(n3>max){
        max=n3;
    }
    else{max=n4;}
    return max;
}
int minimum(int n1, int n2, int n3, int n4)
{
    int min =n1;
    if(n2<min){
        min=n2;
    }
    else if(n3<min){
        min = n3;
    }
    else {min=n4;}
    return min;
}
void evenodd(int num)
{
    if (num%2==0){
        cout<<"even"<<endl;
    }
    else{cout<<"odd\n";}
}
void posneg(int nu)
{
    if(nu<0){
        cout<<"negative\n";
    }
    else{cout<<"positive\n";}
}
int main()
{
    cout<<"enter numbers:";
    int n1,n2,n3,n4;
    cin>>n1>>n2>>n3>>n4;
    int max=maximum(n1,n2,n3,n4);
    int min=minimum(n1,n2,n3,n4);
    cout<<"maximum:"<<max<<endl;
    cout<<"minimum:"<<min<<endl;
    evenodd(max);
    posneg(max);
    evenodd(min);
    posneg(min);

}


