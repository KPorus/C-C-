#include<iostream>

class game
{
    public:

    // void variable()
    // {
    //     int b;
    //     std::cin>>b;
    //     a=b;
    //     std::cout<<"variable a value is "<<a;
    // }
    // std::string variable(bool c)
    // {
    //     if(c==true)
    //     {
    //         std::string function = "overload run";
    //         return function;
    //     }
    // }
    // game (int x)
    // {
    //     std::cout<<variable(x)<<"\n";
    //     variable();
    // }

    void calculator()
    {
        int n,num,sum=0;
        std::cin>>n;
        for(int i=1;i<=n;i++)
        {
            std::cin>>num;
            sum+=num;
        }
        std::cout<<"sum of given number is "<<sum<<"\n";
    }

    void calculator(std::string c)
    {
        if(c=="true")
        {
            std::cout<<"Enter how many number you want to sum: ";
        }
       
    }

    game(std::string s)
    {
        if(s=="true")
        {
            calculator(s);
            calculator();
        }
    }
};
int main()
{
    std::string question="Do you want to use mini calculator?(true/false)\n";
    std::cout<<question;
    std::string answer;
    getline(std::cin,answer);
    game ob(answer);
    return 0;
}