#include<iostream>
#include <iomanip>
// price after calculation with friend function
class two;
class one{
    int value;
    public:
    void setValue()
    {
        std::cout<<"Please set you total buying item: "<<"\n";
        std::cin>>value;
    }

    one()
    {
        setValue();
    }

    friend void x(one, two);
};

class two
{
    float discount = (0.15);
    public:
     friend void x(one, two);
};

void x(one ob1,two ob2)
{
    float total;
    total = float(ob1.value) * ob2.discount;
    std::cout<<"You got discount of "<<(ob2.discount)<<"\n";
    std::cout<<"Now you have to pay : "<<total<<"\n";
}
int main()
{
    one ob1;
    two ob2;
    x(ob1,ob2);

    return 0;
}