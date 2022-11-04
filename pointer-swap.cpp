#include<iostream>

class A 
{
    public:
    int a,b;
    void swap()
    {
        int *p = &a;
        int *q = &b;
        std::cout<<"value of a: "<<*p<<"\n";
        std::cout<<"value of b: "<<*q<<"\n";
        int sum = *p + *q;
        *q = *p;
        *p = sum - *q;
        std::cout<<"After swap value of a : "<<*q<<"\n";
        std::cout<<"After swap value of b : "<<*p<<"\n";
    }

    A (){
        std::cout<<"Enter the value of a & b: ";
        std::cin>>a>>b;
        swap();
    }
};

int main()
{
    A ob;
    return 0;
}