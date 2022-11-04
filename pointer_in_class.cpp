#include<iostream>

class A 
{
    public:

    void display1 (){
        std::cout<<"called from A\n";
    }
    void print ()
    {
        std::cout<<"From A\n";
    }
};

class B : public A
{
    public:
    void display()
    {
        std::cout<<"called from B \n";
    }
    void print ()
    {
        std::cout<<"from B\n";
    }
};

int main()
{
    A ob;
    B o;
    B *p;
    p = &o;
    p->print();//called from b;
    p->display(); // printing Class b function
    p->display1();// printing class a function
    return 0;
}