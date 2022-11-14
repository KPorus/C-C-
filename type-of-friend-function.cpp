#include<iostream>

class one; // forward decleration

class two{
int a;
public:

void setData()
{
    std::cin>>a;
}

void display()
{
std::cout<<"Value of a in class one is: "<<a<<"\n";
}

two()
{
    setData();
    display();
}

friend void x(one&,two&);

};

class one{
int b;
public:
friend void x(one&, two&); //friend function decleration

// friend class two; // all the member function of class two are friend in class one 
void display()
{
std::cout<<"Value of b in class hWwvwy is: "<<b<<"\n";
}

};

void x(one& ob, two& ob1)
{
    ob.b=ob1.a;
}

int main()
{
    two ob1;
    one ob2;
    x(ob2,ob1);
    ob2.display();
    return 0;
}