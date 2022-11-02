#include<iostream>
#include<math.h>

class Triangle
{
private:
    double perimeter = 0.0;
    double area = 0.0;
public:
    Triangle(int a,int b,int c);
    ~Triangle();
};

Triangle::Triangle(int a,int b,int c)
{
    perimeter = (a+b+c);
    std::cout<<"perimeter: "<<perimeter<<"\n";
    double s = (perimeter/2.0);
    area = sqrt((s-a)*(s-b)*(s-c)*s);
    std::cout<<"Area: "<<area;
}

Triangle::~Triangle()
{
}


int main()
{
    Triangle ob(3,4,5);
    return 0;
}