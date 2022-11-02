#include<iostream>
#include<string>


int main()
{
    std::string first_name;
    std::string last_name;
    getline(std::cin,first_name);
    getline(std::cin, last_name);
    int len = first_name.length();
    std::string name;
    name.assign(first_name +" "+ last_name);
    std::cout<<name;
    std::cout<<first_name.find("am");
    // for(int i =0;i<len;i++)
    // {
    //     std::cout<<first_name.find("am");
        
    // }
    // strncat or strcpy only use for char
    // strncat(first_name, last_name,10);
    
    return 0;
}