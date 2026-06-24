
#include <iostream>
#include <stack>
using namespace std;

bool isValid(string expr)
{
    stack<char> st;

    for(char ch : expr)
    {
        if(ch == '(' || ch == '{' || ch == '[')
        {
            st.push(ch);
        }
        else if(ch == ')' || ch == '}' || ch == ']')
        {
            if(st.empty())
                return false;

            if((ch == ')' && st.top() != '(') ||
               (ch == '}' && st.top() != '{') ||
               (ch == ']' && st.top() != '['))
                return false;

            st.pop();
        }
    }

    return st.empty();
}

int main()
{
    string expr;

    cout << "Enter expression: ";
    getline(cin, expr);

    if(isValid(expr))
        cout << "Valid Mathematical Expression";
    else
        cout << "Invalid Mathematical Expression";

    return 0;
}
