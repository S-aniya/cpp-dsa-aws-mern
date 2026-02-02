#include<iostream>
#include<stack>
#include<string>
using namespace std;

int prec(char c)
{
    if(c=='*'|| c=='/') return 2;
    if(c=='+'|| c=='-') return 1;
    return 0;
}

int main()
{
    string infix;
    cout<<"Enter the infix notation: ";
    cin>>infix;
    stack<char> st;
    for(char c:infix)
    {
        if(isalnum(c))
        {
            cout<<c;
        }

        else if(c=='(')
        {
            st.push(c);
        }

        else if(c==')')
        {
            while(!st.empty()&&st.top()!='(')
            {
                cout<<st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while(!st.empty()&&prec(st.top()>prec(c)))
            {
                cout<<st.top();
                st.pop();
            }
            st.push(c);
        }

        while(!st.empty())
        {
            cout<<st.top();
            st.pop();
        }
    }
    
    return 0;
}