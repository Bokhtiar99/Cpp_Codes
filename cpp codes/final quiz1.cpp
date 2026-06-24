#include<iostream>
using namespace std;
void Student(float CGPA)
{
    cout<<"Enter CGPA:";
    cin>>CGPA;
    if(CGPA<2.50){
        cout<<"Probation Student"<<endl;
    }
    else if(CGPA>=3.75 && CGPA<=3.85){
        cout<<"Scholarship Student"<<endl;
    }
    else{
        cout<<"Regular Student"<<endl;
    }
}
int main()
{
    float CGPA;
    Student(CGPA);
    return 0;
}


