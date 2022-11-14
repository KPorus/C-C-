#include<iostream>

template<class T>

class Vector
{
public:
    T * arr;
    int s;
    T result;
    Vector(int m)
    {
        s = m;
        arr = new T[s];
    }

     T multiplication(Vector &ob)
        {
            for(int i = 0; i<s ; i++)
            {
                result += this->arr[i] * ob.arr[i];
            }
            return result;
        }
};



int main()
{
    double a,b,c,d,e,f;
    int x;
    std::cout<<"Enter the size of array.\n";
    std::cin>>x;
    std::cout<<"Enter the value of two objects value: \n";
    std::cin>>a>>b>>c>>d>>e>>f;
    Vector<double> v1(x);
    v1.arr[0] = a;
    v1.arr[1] = b;
    v1.arr[2] = c;
    Vector<double> v2(x);
    v2.arr[0] = d;
    v2.arr[1] = e;
    v2.arr[2] = f;
    double y = v1.multiplication(v2);
    std::cout<<"Result: "<<y;
    return 0;
}
