#include <iostream>

using namespace std;

class Sum
{
public:
    void add(int a, int b)
    {
        cout << "Sum of " << a << " and " << b << " is: " << (a + b) << endl;
    }

    void add(long a, long b)
    {
        cout << "Sum of " << a << " and " << b << " is: " << (a + b) << endl;
    }
};
int main()
{
    Sum s;

    s.add(2, 3);                     // prints "Sum of 2 and 3 is: 5"
    s.add(1000000000L, 2000000000L); // prints "Sum of 1000000000 and 2000000000 is: 3000000000"

    return 0;
}
