#include <iostream>
#include <stack>
#include <math.h>
using namespace std;

int postfixEvaluation(string s)
{
    stack<int> value;

    for (int i = 0; i < s.length() ; i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            value.push(s[i] - '0');
        }
        else
        {
            int y = value.top();
            value.pop();
            int x = value.top();
            value.pop();

            switch (s[i])
            {
            case '+':
                value.push(x + y);
                break;
            case '-':
                value.push(x - y);
                break;
            case '*':
                value.push(x * y);
                break;
            case '/':
                value.push(x / y);
                break;
            case '^':
                value.push(pow(x, y));
                break;
            default:
                break;
            }
        }
    }
    return value.top();
}

int main()
{
    cout << postfixEvaluation("46+2/5*7+") << endl;
    return 0;
}
