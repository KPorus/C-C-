// taking object as parameter ======================
#include<iostream>

class class_related_practice2
{
private:
    int a,b;
    int sum;
public:
   void setData()
    {
        std::cout<<"Enter two number: ";
        std::cin>>a>>b;
    }

    void result(class_related_practice2 o1);
    class_related_practice2(/* args */);
    ~class_related_practice2();
};

class_related_practice2::class_related_practice2(/* args */)
{
}

void class_related_practice2::result(class_related_practice2 o1)
{
    sum = o1.a+o1.b;
    std::cout<<"Sum of two number: "<<sum<<"\n";
}

class_related_practice2::~class_related_practice2()
{
    std::cout<<"distractor";
}


int main()
{
    class_related_practice2 ob,ob1;
    ob.setData();
    ob1.result(ob);
    return 0;
}