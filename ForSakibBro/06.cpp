#include <iostream>

using namespace std;

class Sum
{
public:
    void add(int a, long b)
    {
        cout << "Sum of " << a << " and " << b << " is: " << (a + b) << endl;
    }

    void add(int a, int b, int c)
    {
        cout << "Sum of " << a << ", " << b << " and " << c << " is: " << (a + b + c) << endl;
    }
};
int main()
{
    Sum s;

    s.add(2, 1000000000L); // prints "Sum of 2 and 1000000000 is: 1000000002"
    s.add(1, 2, 3);        // prints "Sum of 1, 2 and 3 is: 6"

    // Call add() with two integer parameters
    int a = 4;
    int b = 5;
    s.add(a, b); // prints "Sum of 4 and 5 is: 9"

    return 0;
}
