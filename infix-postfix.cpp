/* error occurred during testing */
#include<iostream>
#include<stack>
using namespace std;

int prec(char c)
{
    if(c == '^')
    {
        return 1;
    }
    else if(c == '*' || c == '/')
    {
        return 2;
    }
    else if(c == '+' || c == '-')
    {
        return 3;
    }
    else{
        return -1;
    }
}

string infixToPrefix(string s)
{
    stack<char>v;
    string prefix;

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] >= '0' && s[i] <= '9')
        {
            prefix += s[i];
        }
        else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            prefix += s[i];
        }
        else if (s[i] == '(')
        {
            v.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while(v.top() != '(' && !v.empty())
            {
                prefix += v.top();
                v.pop();
            }
            if(!v.empty())
            {
                v.pop();
            }
        }
        else
        {
            while (!v.empty() && prec(v.top()) > prec(s[i]))
            {
                prefix += v.top();
                v.pop();
            }
            v.push(s[i]);
            
        }
    }

    while(!v.empty())
    {
        prefix += v.top();
        v.pop();
    }

    return prefix;
}

int main(int argc, char const *argv[])
{
    cout << infixToPrefix("a+(b*c-(d/e^f)*g)*h") << endl;
    return 0;
}
