#include<iostream>
#include<stack>
using namespace std;
bool isvalid(string ex)
{
    stack<char> st;
    for(char ch:ex)
    {
        if(ch=='(' || ch=='{' || ch=='[')
            {
                st.push(ch);
            }
            else if(ch==')' || ch=='}' ||ch==']'){
                if(st.empty())
                    return false;
                if((ch==')' && st.top()!='(') || (ch=='}' && st.top()!='{') || (ch==']' && st.top()!='['))
                   return false;
                   st.pop();
            }
    }
return st.empty();
}

int main()
{
    string ex;
    cout<<"Enter a expression :"<<endl;
    getline(cin,ex);
    if(isvalid(ex)){
        cout<<"It is a valid mathematical expression";
    }
    else{
        cout<<"It is invalid mathematical expression";
    }
    return 0;
}
