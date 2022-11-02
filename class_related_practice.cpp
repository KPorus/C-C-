#include<iostream>
#include<string>
class class_related_practice
{
private:
    std::string name[5];
public:
    void getRegister()
    {
        for(int i =1;i<=5;i++)
        {
            std::cout<<"Student is "<<i<<". Their name is "<<name[i]<<"\n";
        }
    }
    class_related_practice();
    ~class_related_practice();
};

class_related_practice::class_related_practice()
{
    for(int i = 1; i<=5;i++)
    {
        std::cout<<"Student id - "<<i<<"\n";
        std::cout<<"register their name: ";
        getline(std::cin,name[i]);
    }
    getRegister();
}

class_related_practice::~class_related_practice()
{
    std::cout<<"distractor called";
}


int main()
{
    class_related_practice ob1;
    return 0;
}