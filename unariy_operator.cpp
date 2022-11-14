#include <iostream>
using namespace std;
class space
{
    int x, y, z;

public:
    void getdata(int i, int j, int k)
    {
        x = i;
        y = j;
        z = k;
    }
    void display()
    {
        cout << "X:" << x << ", Y: " << y << ", Z: " << z << endl;
    }
    void operator-()
    {
        x = -x;
        y = -y;
        z = -z;
    }
};
int main()
{
    space o1;
    o1.getdata(10, -10, 20);
    o1.display();
    -o1;
    o1.display();
    return 0;
}