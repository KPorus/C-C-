// this program is a demo and practice for pure virtual function
#include <iostream>

class Shape
{
public:
    int x, y, z;
    virtual void show() = 0;
    virtual void setdata() = 0 ;
};

class Tritangler : virtual public Shape
{
public:
    virtual void setdata()
    {
        std::cout << "Enter the value you want : \n";
        std::cin >> x >> y >> z;
    }

    void show()
    {
        std::cout << "Area of triangle is: " << x * y * z << "\n";
    }

    Tritangler()
    {
        
        setdata();
        show();
    }
};

class IsTrangle :  public Shape
{
public:
    void show()
    {
        int value = x + y;
        if (value > z)
        {
            std::cout << "It is trangle\n";
        }
    }

    void setdata()
    {
        std::cout<<"Enter the value of x,y and z for see it can build triangle: \n";
        std::cin>>x>>y>>z;
    }
    IsTrangle()
    {
         setdata();
         show();
    }
};

int main()
{
    Tritangler ob;
    IsTrangle ob1;
    return 0;
}