// uncomplete ===================
#include<iostream>

int main()
{
    int TotalChoco;
    int money;
    std::cout<<"Enter the number of money you have: ";
    std::cin>> money;

    int choco1 = money * 1;
    int warrper = choco1;
    int warpperChoco = choco1/3;

    int remaningWarpper = 0;

    if(warrper< choco1)
    {
        remaningWarpper = choco1 - warrper;
    }

    return 0;
}