#include<iostream>
// using namespace std;
// class op{
// public:
// int i,j,o,p;
//     int one;
//     int two;
//     op(){
//         one=1;
//         two=2;
//         }
//     op(int a, int b){
//         one= a;
//         two= b;
//         }
//         op operator +(op o){
//             op var;
//             var.one=one +o.one;
//             var.two=two +o.two;
//             return var;
//             }
//         void print(){ cout<<"one : "<<one<< " two : "<<two<<endl;}
//        void input();
//     };
//     void op::input(){  
//         cout<<"enter i:"<<endl;cin>>i;
//         cout<<"enter j:"<<endl;cin>>j;
//         cout<<"enter o:"<<endl;cin>>o;
//         cout<<"enter p:"<<endl;cin>>p; 
//         }
//     int main(){
//         op in;
//         in.input();
//         op p1(in.i,in.j);
//         op p2(in.o,in.p);
//         // p2.input();
//         op p3;
//         p3 = p2+p1;
//         p3.print();
//         }

class two
{
    int x, y;
    int total;
    public:
    two();
    two operator ++(int);
    // void display()
    // {
    //     std::cout<<"The total value of x and y is : "<<total<<"\n";
    // }
};

two :: two()
{
    std::cout<<"Enter the value of x and y: ";
    std::cin>>x>>y;
}
two two :: operator ++(int)
{
    total = x+y;
    std::cout<<"The total value of x and y is : "<<total<<"\n";
}

int main ()
{
    two o1;
    o1++;
    // o1.display();
    return 0;
}


// operator test 2 =============================
// class one
// {
//     int x,y,z;
//     public:
//     one();
//     void operator +();
   
// };

// one::one()
// {
//     std::cout<<"Enter the values of x, y, z:";
//     std::cin>>x>>y>>z;
// }

// void one::operator +()
// {
//     x = x+y+z;
//     std::cout<<"Value of x total is :"<<x<<"\n";
// }


// int main()
// {
//     one ob;
//     +ob;
//     return 0;
// }








// 1st operator code ========================
// class Sum
// {
//     int x,y;
//     public:
//     Sum() : x(5){}

//     void operator ++(int)
//     {
//         x = x + 10;
//         std::cout<<"Value of x is : "<<x<<"\n";
//     }
// };

// int main()
// {
//     Sum o1;
//     o1++;
//     return 0;
// }