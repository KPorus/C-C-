#include <iostream>

class myClass{
    public:
    void total();
    myClass()
    {         
        total(); 
    }

};

void myClass::total()
    {
        int math[5],phy[5],chem[5];
        int sum[5];
        for(int i =1;i<=5;i++)
       {
         std::cout<<"enter student id: "<<i<<"\n";
         std::cout<<"Enter student math, phy and chem number: ";
         std::cin>>math[i]>>phy[i]>>chem[i];
          sum[i] = (math[i]+phy[i]+chem[i])/3;
       }
        for(int j =1;j<=5;j++)
        {
            std::cout<<"Average number in three subject of the student "<<j<<": "<<sum[j]<<"\n";
        }
    }

int main()
{
    myClass ob;
    return 0;
}