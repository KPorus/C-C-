#include<iostream>

class constractor
{    
public:
int a;

void getData()
{
    std::cout<<"Enter two value of first object: ";
    std::cin>>a;    
}
// call object and return another object 
    constractor setData(constractor ob)
    {
        constractor f;
        f.a = ob.a + a;
        return f; 
    }
    constractor();
    ~constractor();
};

constractor::constractor()
{
}

constractor::~constractor()
{
}

int main ()
{
    constractor ob1;
    
    ob1.getData();
    constractor ob2;
    ob2.a = 0;
    ob2=ob2.setData(ob1);
    std::cout<<"second object: "<<ob2.a<<"\n";

    return 0;
}

