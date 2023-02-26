#include <iostream>
using namespace std;
class Area
{
public:
    int length;
    int height;
    int width;

    Area(int length, int height, int width);
    Area();
};

Area::Area(int length, int height, int width)
{
    int l = length;
    int h = height;
    int w = width;
    void getArea(int l, int h, int w);
    {
        int result = 2 * (l * w + l * h + w * h);
        cout << result << "\n";
    }
}

Area::Area()
{
}

int main()
{
    Area obj(10, 10, 10);
    return 0;
}
