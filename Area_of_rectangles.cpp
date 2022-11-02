#include<iostream>

class Area_of_rectangles
{
private:
    // int a,b;
    int sum = 0;
public:
    Area_of_rectangles(int a, int b);
    void area(int a,int b){
        sum = a*b;
    std::cout<<"Area of rectangles: "<<sum<<"\n";
    }
    ~Area_of_rectangles();
};

Area_of_rectangles::Area_of_rectangles(int a, int b)
{
    // std::cout<<"Enter two value for area of rectangles: ";
    // std::cin>>a>>b;
     area(a, b);
}

Area_of_rectangles::~Area_of_rectangles()
{
}


int main()
{
    Area_of_rectangles ob(2,4), ob2(5,8);
    return 0;
}