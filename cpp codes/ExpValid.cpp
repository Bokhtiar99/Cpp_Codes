#include <iostream>
#include <cctype>
using namespace std;

bool isOperator(char ch)
{
    return ch=='+' || ch=='-' || ch=='*' || ch=='/';
}

int main()
{
    string exp;
    cout<<"Enter Expression: ";
    cin>>exp;

    bool valid = true;
    int balance = 0;

    for(int i=0;i<exp.length();i++)
    {
        if(exp[i]=='(')
        {
            balance++;

            if(i+1<exp.length() && isOperator(exp[i+1]))
                valid=false;
        }

        else if(exp[i]==')')
        {
            balance--;

            if(balance<0)
                valid=false;

            if(i>0 && isOperator(exp[i-1]))
                valid=false;
        }
    }

    if(balance!=0)
        valid=false;

    if(isOperator(exp[0]) || isOperator(exp.back()))
        valid=false;

    for(int i=0;i<exp.length()-1;i++)
    {
        char a=exp[i];
        char b=exp[i+1];

        if(isOperator(a) && isOperator(b))
            valid=false;

        if(isalpha(a) && isalpha(b))
            valid=false;

        if(a=='(' && b==')')
            valid=false;
    }

    if(valid){
        cout<<"Valid Expression";
    }
    else{
        cout<<"Invalid Expression";
    }
}
