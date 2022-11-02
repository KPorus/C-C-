#include<iostream>
// #include<bits/stdc++.h>
#include<iomanip>
class volume_of_circle
{
private:
    double pi = 3.14159;
    int r;
    double result=0;
public:
    volume_of_circle();
    ~volume_of_circle();
};

volume_of_circle::volume_of_circle()
{
    std::cout<<"Enter the radious: ";
    std::cin>>r;
    result = ((4/3)*pi*r*r*r);
    std::cout<<"Your volume of circle: "<<std::fixed<<std::showpoint<<std::setprecision(4)<<result<<"\n";
}

volume_of_circle::~volume_of_circle()
{
}


int main()
{
    volume_of_circle ob;
    return 0;
}