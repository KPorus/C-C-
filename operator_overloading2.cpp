#include<iostream>
#include<string>
using namespace std;
class test
{

public:

    string Name;
    int Count;
    test(string name, int count);
    ~test();
};

test::test(string name, int count)
{
    Name = name;
    Count = count;
}

test::~test()
{
}


// this is called operator overloading 
void operator <<(ostream& COUT, test& ob)
{
    COUT << "NAME:" << ob.Name << "\n";
    COUT << "Count:" << ob.Count << "\n";
}

int main()
{
    test ob = test("fardin",10);
    std::cout<<ob;
    return 0;
}