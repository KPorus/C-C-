#include<iostream>

class A 
{
    public:

    virtual void display (){
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
    // here base called derived class B function display
    A *p;
    p = &o;
    p->print();//called from a because print is not virtual function 
    p->display(); // printing Class b function case display is virtual function
    return 0;
}