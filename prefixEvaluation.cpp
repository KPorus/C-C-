#include <iostream>
#include <stack>
#include <math.h>
using namespace std;

int prefixEvaluation(string s)
{
    stack<int> value;

    for (int i = s.length()-1; i >= 0; i--)
    {
        if(s[i] >= '0' &&  s[i] <= '9')
        {
            value.push(s[i] - '0');
        }
        else
        {
            int x = value.top();
            value.pop();
            int y = value.top();
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

int main(int argc, char const *argv[])
{
    cout << prefixEvaluation("-+7*45+20")<<endl;
    return 0;
}
