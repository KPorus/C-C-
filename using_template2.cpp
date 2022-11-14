# include<iostream>
using namespace std;
template<class type1, class type2>
class myclass
{
type1 i;
type2 j;
public :
myclass ( type1 a, type2 b)
{
    i = a;
    j = b;
}
void show () {
    cout<<i<<j<<endl;
     }
};

int main ()
{
myclass<int,string> ob1(10,"Omair");
ob1.show();
return 0;
}
