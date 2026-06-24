#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isOperator(char ch)
{
    return ch=='+' || ch=='-' || ch=='*' || ch=='/';
}

bool isValid(string exp)
{
    int balance = 0;

    if(exp.empty())
        return false;

    if(isOperator(exp[0]) || isOperator(exp[exp.length()-1]))
        return false;

    for(int i=0; i<exp.length(); i++)
    {
        if(exp[i]=='(')
        {
            balance++;

            if(i+1<exp.length() && isOperator(exp[i+1]))
                return false;
        }

        else if(exp[i]==')')
        {
            balance--;

            if(balance<0)
                return false;

            if(i>0 && isOperator(exp[i-1]))
                return false;
        }

        if(i<exp.length()-1)
        {
            char a = exp[i];
            char b = exp[i+1];

            if(isOperator(a) && isOperator(b))
                return false;

            if(isalpha(a) && isalpha(b))
                return false;

            if(a=='(' && b==')')
                return false;
        }
    }

    return balance==0;
}

void generateTAC(string exp)
{
    string arr[100];
    int n = 0;

    for(char ch : exp)
    {
        if(ch!='(' && ch!=')')
            arr[n++] = string(1,ch);
    }

    int tempCount = 1;

    for(int i=0; i<n; i++)
    {
        if(arr[i]=="*" || arr[i]=="/")
        {
            string temp = "t" + to_string(tempCount++);

            cout << temp << " = "
                 << arr[i-1] << " "
                 << arr[i] << " "
                 << arr[i+1] << endl;

            arr[i-1] = temp;

            for(int j=i; j<n-2; j++)
            {
                arr[j] = arr[j+2];
            }

            n -= 2;
            i--;
        }
    }

    for(int i=0; i<n; i++)
    {
        if(arr[i]=="+" || arr[i]=="-")
        {
            string temp = "t" + to_string(tempCount++);

            cout << temp << " = "
                 << arr[i-1] << " "
                 << arr[i] << " "
                 << arr[i+1] << endl;

            arr[i-1] = temp;

            for(int j=i; j<n-2; j++)
            {
                arr[j] = arr[j+2];
            }

            n -= 2;
            i--;
        }
    }

    cout << "\nFinal Result = " << arr[0] << endl;
}

int main()
{
    string exp;

    cout << "Enter Expression: ";
    cin >> exp;

    if(isValid(exp))
    {
        cout << "\nValid Expression\n\n";

        cout << "Three Address Code:\n";
        generateTAC(exp);
    }
    else
    {
        cout << "\nInvalid Expression\n";
    }

    return 0;
}
