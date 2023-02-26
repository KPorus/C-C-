#include <iostream>
#include <cmath>

using namespace std;

class Right_Triangle
{
private:
    int perpendicular, base;

public:
    Right_Triangle(int p, int b)
    {
        perpendicular = p;
        base = b;
    }

    float area()
    {
        return (perpendicular * base) / 2.0;
    }

    float diagonal()
    {
        return sqrt(perpendicular * perpendicular + base * base);
    }
};
int main()
{
    Right_Triangle rt(3, 4);
    cout << "Area: " << rt.area() << endl;
    cout << "Diagonal: " << rt.diagonal() << endl;
    return 0;
}
