// create complex number using object as a function parameter
#include<iostream>

class create_complex_number
{
private:
    int a;
    int b;
public:
    void setdata(int v1, int v2)
    {
        a=v1;
        b=v2;
    }

    void getData(create_complex_number o1, create_complex_number o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void print()
    {
        std::cout<<a<<" + "<<b<<"i"<<"\n";
    }
    ~create_complex_number();
};

create_complex_number::~create_complex_number()
{
}


int main()
{
    create_complex_number ob1,ob2,ob3;
    ob1.setdata(5,2);
    ob1.print();

    ob2.setdata(3,2);
    ob2.print();

    ob3.getData(ob1,ob2);
    ob3.print();
    return 0;
}