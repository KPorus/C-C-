#include <iostream>
using namespace std;
class fifa
{
private:
    int Cups;

public:
    fifa() : Cups(0){};
    void setCups(int c)
    {
        Cups = c;
    }
    int getCups()
    {
        return Cups;
    }
};
class germany : public fifa
{
public:
    void display()
    {
        /*fifa *info[3];
        info[0] = new fifa;
        /*info[0]->*/setCups(2);
        cout << "Germany: " << endl;
        cout << "Cups: " << /*info[0]->*/getCups() << endl
             << endl;
    }
};
class argentina : public fifa
{
public:
    void display()
    {
        /*fifa *info[3];
        info[1] = new fifa;
        info[1]->*/setCups(10);
        cout << "Argentina: " << endl;
        cout << "Cups: " << /*info[1]->*/getCups() << endl
             << endl;
    }
};
class brazil : public fifa
{
public:
    void display()
    {
        /*fifa *info[3];
        info[2] = new fifa;
        info[2]->*/setCups(4);
        cout << "Brazil: " << endl;
        cout << "Cups: " << /*info[2]->*/getCups() << endl
             << endl;
    }
};
int main()
{
    germany ob1;
    argentina ob2;
    brazil ob3;
    ob1.display();
    ob2.display();
    ob3.display();
    return 0;
}

// #include <iostream>
// using namespace std;
// class ManchesterUnited
// {
// private:
//     int coach, player;

// public:
//     void getData(int x, int y)
//     {
//         coach = x;
//         player = y;
//     }
//     void display()
//     {
//         cout << "Coach: " << coach << endl;
//         cout << "Player: " << player << endl;
//     }
//     ManchesterUnited()
//     {
//         coach = 0;
//         player = 0;
//     }
//     ManchesterUnited operator++(int)
//     {
//         ManchesterUnited temp;
//         temp.coach = coach++;
//         temp.player = player++;
//         return temp;
//     }
//     bool operator==(const ManchesterUnited &ob)
//     {
//         if (coach == ob.coach && player == ob.player)
//         {
//             return true;
//         }
//         return false;
//     }

// {
//     int operator&&(const ManchesterUnited &ob)
//     {
//         return (coach == ob.coach) || (player == ob.player);
//     }
// }
// };
// int main()
// {
//     ManchesterUnited Ronaldo, fernandes;
//     Ronaldo.getData(4, 5), fernandes.getData(5, 6);
//     cout << "Before increment: " << endl;
//     Ronaldo.display();
//     if (Ronaldo == fernandes)
//     {
//         cout << "Ronaldo is equal to fernandes" << endl;
//     }
//     else
//     {
//         cout << "Ronaldo is not equal to fernandes." << endl;
//     }
//     Ronaldo++;
//     cout << "\nAfter increment: " << endl;
//     Ronaldo.display();
//     if (Ronaldo == fernandes)
//     {
//         cout << "Ronaldo is equal to fernandes" << endl;
//     }
//     else
//     {
//         cout << "Ronaldo is not equal to fernandes." << endl;
//     }
//     return 0;
// }

// #include <iostream>
// #include <string.h>
// using namespace std;
// class publication
// {
// public:
//     string title;
//     float price;
//      void getData()
//     {
//         cout << "Enter book title : ";
//         cin >> title;
//         cout << "Enter book price : ";
//         cin >> price;
//     }
//     void putData()
//     {
//         cout << "\nTitle : " << title << endl;
//         cout << "Price : " << price << " Tk" << endl;
//     }
// };
// class book : public publication
// {
// public:
//     int pageCount;
//     void getData()
//     {
//         cout << "For Book Information\n";
//         publication :: getData();
//         cout << "Enter page count : ";
//         cin >> pageCount;
//     }
//     void putData()
//     {
//         cout << "\nBook data :";
//         publication ::putData();
//         cout << "Page count : " << pageCount << endl;
//     }
// };
// class tape : public publication
// {
// public:
//     float playTime;
//     void getData()
//     {
//         cout << "\nFor Tape Information\n";
//         publication :: getData();
//         cout << "Enter playing time : ";
//         cin >> playTime;
//     }
//     void putData()
//     {
//         cout << "\nTape data :";
//         publication ::putData();
//         cout << "Playing time : " << playTime << " minutes" << endl;
//     }
// };
// int main()
// {
//     publication p;
//     p.getData();
//     p.putData();
//     book book1;
//     book1.getData();
//     book1.putData();
//     tape tape1;
//     tape1.getData();
//     tape1.putData();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class D
// {
//     public:
//     virtual void display()
//     {
//         cout<<"Constracting Class D\n";
//     }
// };

// class C : public D
// {
//     public:
//     void display()
//     {
//         cout<<"Constracting Class C";
//     }
// };

// class B : public D
// {
//     public:
//     void display()
//     {
//         cout<<"Constracting Class B\n";
//     }
// };

// class B : public C
// {
//     void display()
//     {
//         cout<<"Constracting Class B\n"
//     }
// }
// int main()
// {
//     return 0;
// }