/*#include<iostream>
using namespace std;
void addition(float num1, float num2)
{
    float sum=num1+num2;
    cout<<"Summation:"<<sum<<endl;
}
int main()
{
    addition(10.3,11.7);
    addition(11.1,77.5);
    addition(22.3,55.6);
    return 0;
}*/

/*#include<iostream>
using namespace std;
void addition(float num1,float num2)
{
    float sum=num1+num2;
    cout<<"Summation:"<<sum<<endl;
}
int main()
{
    float x,y,a,b;
    cout<<"Enter number 1:"<<endl;
    cin>>x>>a;
    cout<<"Enter number 2:"<<endl;
    cin>>y>>b;
    addition(x,y);
    addition(a,b);
    return 0;
}*/

/*#include<iostream>
using namespace std;
void subtraction()//parameterless function
{
  float num1,num2;
  cout<<"Enter number 1:"<<endl;
  cin>>num1;
  cout<<"Enter number 2:"<<endl;
  cin>>num2;
  float result=num1-num2;
  cout<<"Subtraction:"<<result<<endl;
}
int main()
{
    subtraction();
    return 0;
}*/

/*#include<iostream>
using namespace std;
void addition(int num)
{
    float num2;
    cout<<"Enter number 2:"<<endl;
    cin>>num2;
    int sum=num+num2;
    cout<<"Summation:"<<sum<<endl;
}
int main()
{
    int x=15;
    addition(x);
    return 0;
}*/

/*#include<iostream>
using namespace std;
float multiplication(float num1,float num2)
{
    float mult=num1*num2;
    return mult;
}
int main()
{
    cout<<"Multiplication:"<<multiplication(11.3,13.4)<<endl;
    cout<<"Multiplication:"<<multiplication(22.4,4.6)<<endl;
    return 0;
}*/

/*#include<iostream>
using namespace std;
int division(int num1,int num2)
{
    int div=num1/num2;
    cout<<"Division:"<<div<<endl;
    return div;
}
int main()
{
    division(50,5);
    return 0;
}*/

/*#include<iostream>
using namespace std;
float multiplication(float num1,float num2)
{
    float mult=num1*num2;
    cout<<"Multiplication:"<<mult<<endl;
    return mult;
}
int main()
{
    multiplication(11.2,44.6);
    multiplication(6.9,3.4);
    return 0;
}*/

/*#include<iostream>
using namespace std;
void evenodd(int arr[2][3])
{
    for(int row=0; row<2; row++){
    for(int col=0; col<3; col++){
    if(arr[row][col]%2==0){
        cout<<"is an even number"<<endl;
    }
    else{
        cout<<"is odd number"<<endl;
    }
    }
    }
}
 int main()
 {
     int arl[2][3]={2,1,4,5,7,4};
     evenodd(arl);
     return 0;
 }*/

/* #include<iostream>
 using namespace std;
 void even_odd(int arr[2][3])
 {
     cout<<"Enter the elements of the matrix"<<endl;
     for(int row=0; row<2; row++){
     for(int col=0; col<3; col++){
        cin>>arr[row][col];
        if(arr[row][col]%2==0){
            cout<<"number is an even"<<endl;
        }
        else{
            cout<<"number is a odd"<<endl;
        }
     }
     }
 }
 int main()
 {
     int arl[2][3];
     even_odd(arl);
     return 0;
 }*/
