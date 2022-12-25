#include<iostream>
#include<iomanip>
class math
{
private:
    int a,b;
    int sum = 0;
public:

int sum2 = 0;
// use constractor overloading here
    math(); 
    math(math ob,int c); // here as parameter i pass class object
    ~math();
};

math::math()
{
    // for first constractor i take value of private atribute and sum them
    std::cout<<"Enter two number: ";
    std::cin>>a>>b;
    sum = a+b;
    std::cout<<"Result of sum: "<<sum<<"\n";
}
math::math(math ob,int c)
{
    // as for second constractor i took first object sum atribute value and multiply them with parameter c 
    sum = ob.sum *c;
    std::cout<<"Add: "<<sum<<"\n";
}

math::~math()
{
}


int main()
{
    math ob,ob2(ob, 2);
    return 0;
}