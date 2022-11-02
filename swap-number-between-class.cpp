#include<iostream>
// here is some problem. need to solve ===========================
class two;
class one{
    int a=150;
    public:
    friend void x(one,two);
    one()
    {
        std::cout<<"Prev value of a in class one: "<<a<<"\n";
    }

    void display()
    {
        std::cout<<"New value of a is "<<a<<"\n";
    }
};

class two{
    int c = 200;
    public:

    two()
    {
        std::cout<<"Prev value of c in class two: "<<c<<"\n";
    }
    friend void x(one,two);
    void display()
    {
        std::cout<<"New value of c is "<<c<<"\n";
    }
};

void x(one o, two b)
{
    int temp;
    temp = o.a;
    o.a = b.c;
    b.c = temp;
}
int main()
{
    one ob1;
    two ob2;
    x(ob1,ob2);
    ob1.display();
    ob2.display();
    return 0;
}