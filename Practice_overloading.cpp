#include <iostream>
using namespace std;


class Demo
{
    int x,y;
    public:
    Demo()
    {
        cout<<"Enter the two value: \n";
        cin>>x>>y;
    }

    Demo(int i, int j)
    {
        x = i;
        y = j;
    }

    int  operator <(Demo ob)
    {
        return (x < ob.x)||(y < ob.y);
    }
};

int main()
{
    Demo ob,ob1(10,20);
    if(ob < ob1)
    {
        cout<<"Ob1 is greater than ob\n";
    }else{
        cout<<"ob is greater than ob1\n";
    }
    return 0;
}
// class coord
// {
//     int x, y;

// public:
//     coord()
//     {
//         x = 0;
//         y = 0;
//     };
//     coord(int i, int j)
//     {
//         x = i;
//         y = j;
//     }
//     int operator==(coord ob2)
//     {
//         return (x == ob2.x) && (y == ob2.y);
//     }
//     int operator&&(coord ob2)
//     {
//         return (x && ob2.x) && (y && ob2.y);
//     }
// };
// int main()
// {
//     coord o1(10, 10), o2(0, 0);
//     coord o3(10, 10), o4(1, 1);
//     if (o1 == o2)
//         cout << "o1 as same as o2" << endl;
//     else
//         cout << "o1 and o2 differ" << endl;
//     if (o1 == o3)
//         cout << "o1 as same as o3" << endl;
//     else
//         cout << "o1 and o3 differ" << endl;
//     if (o1 && o2)
//         cout << "o1 && o2 is true" << endl;
//     else
//         cout << "o1 && o2 is false" << endl;
//     if (o1 && o4)
//         cout << "o1 && o4 is true" << endl;
//     else
//         cout << "o1 && o4 is false" << endl;
//     return 0;
// }

// class Demo
// {
//     int x;
//     public:
//     void getData()
//     {
//         cout<<"Enter the number: \n";
//         cin>> x;
//     }
//     void putData()
//     {
//         cout<<"Value of x: "<<x<<"\n";
//     }

//     Demo operator ++(int)
//     {
//         x = x*x;
//     }
// };
// int main()
// {
//     Demo a;
//     a.getData();
//     cout<<"Original value: ";
//     a.putData();
//     a++;
//     cout<<"Update value: ";
//     a.putData();
//     return 0;
// }
// class Demo
// {
//     int x;
//     public:
//     void getData()
//     {
//         cout<<"Enter a number :\n";
//         cin>>x;
//     }

//     void putData()
//     {
//         cout<<"Value : "<<x<<"\n";
//     }

//     Demo operator +(Demo bb)
//     {
//         Demo zz;
//         zz.x = x / bb.x;
//         return zz;
//     }
// };

// int main()
// {
//     Demo xx,bb,zz;

//     xx.getData();
//     bb.getData();
//     zz = xx + bb;
//     xx.putData();
//     bb.putData();
//     zz.putData();
//     return 0;
// }