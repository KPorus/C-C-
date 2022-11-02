#include<iostream>
#include<string.h>
int main()
{
    char first_name[] = "Fardin";
    char last_name[] = " khan";
    strncat(first_name, last_name,10);
    // std::cout<< first_name;
    
    std::string greating1("Hi");
    std::string greating2(" how are you");
    greating1.append(greating2);
    std::cout<<greating2.length()<<"\n";
    std::cout<<greating1;
    std::string news = greating2.substr(1,3);
    std::cout<<"\n"<<news<<"\n";
    int l = greating1.compare(greating2);
    std::cout<<l;
    //predefind function 
    return 0;
}