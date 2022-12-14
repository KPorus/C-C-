#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    double a, c;
    double sum = 0;
    for (int i = 1; i <= t; i++)
    {
        cin >> a >> c;
        sum = (a + c) / 2;
        int B = sum;
        double temp2 = sum - B;
        if (temp2 > 0)
        {
            cout << -1 << "\n";
        }
        else
        {
            cout << B << "\n";
        }
    }

    return 0;
}