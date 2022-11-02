// code using object array
#include<iostream>

class average_of_three_number_of_student
{
public:
int id,sum =0;
    average_of_three_number_of_student();
    void average_of_three_number(int math,int phy,int chem);
    ~average_of_three_number_of_student();
};

average_of_three_number_of_student::average_of_three_number_of_student()
{
    int math,phy,chem;
    std::cout<<"Enter student id: ";
    std::cin>>id;
    std::cout<<"Enter each student Math, Phy, Chem number: ";
    std::cin>>math>>phy>>chem;
    average_of_three_number( math,phy,chem);
}
void average_of_three_number_of_student::average_of_three_number(int math,int phy,int chem)
{
    sum = (math+phy+chem)/3;
    std::cout<<"Average number of three subject of each student: "<<sum<<"\n";
}

average_of_three_number_of_student::~average_of_three_number_of_student()
{
}

int main()
{
    average_of_three_number_of_student ob[5]={};
    return 0;
}