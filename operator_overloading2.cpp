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
//  below one is only to print one class ob value
// void operator <<(ostream& COUT, test& ob)
// {
//     COUT << "NAME:" << ob.Name << "\n";
//     COUT << "Count:" << ob.Count << "\n";
// }

// print two or many object value or one object value  of class
ostream& operator <<(ostream& COUT, test& ob)
{
    COUT << "NAME:" << ob.Name << "\n";
    COUT << "Count:" << ob.Count << "\n";
    return COUT;
}

int main()
{
    test ob = test("fardin",10);
    test ob2 = test("anika",10);
    test ob3 = test("Nargis",10);
    cout<< ob << ob2 << ob3;
    return 0;
}