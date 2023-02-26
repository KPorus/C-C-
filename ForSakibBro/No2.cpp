#include<iostream>
using namespace std;
class BAT
{
private:
    float height;

public:
    BAT()
    {
        height = 0.0;
    }

    void setHeight(float new_height)
    {
        height = new_height;
    }

    float getHeight()
    {
        return height;
    }
};
float width(BAT bat)
{
    return bat.getHeight() * bat.getHeight();
}

int main()
{
    BAT my_bat;
    my_bat.setHeight(2.5);
    cout << width(my_bat) << endl; // Output: 6.25
    return 0;
}
