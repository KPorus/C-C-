#include<iostream>

class A 
{
    public:

    void display (){
        std::cout<<"called from A\n";
    }
};

class B : public A
{
    public:
    void display()
    {
        std::cout<<"called from B \n";
    }
};

int main()
{
    A ob;
    B o;
    B *p;
    p->display(); // printing Class b function
    return 0;
}