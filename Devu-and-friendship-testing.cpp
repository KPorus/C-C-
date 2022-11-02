#include<iostream>
#include<vector>
#include<cstdlib>

int main ()
{
    int n;
    int t;
    int num;
    int count = 0, count2 = 0;
    std::cin>>t;
    for(int i = 0; i<t;i++)
    {
        std::cin>>n;
        std::vector<int>date(n);
        std::set<int>date1(n);
        for(int i = 0;i<n;i++)
        {
            std::cin>>date[i];
            date1.insert(date[i]);
            
        }std::cout <<date1.size()<<"\n";
        count=0;
    }
    return 0;
}