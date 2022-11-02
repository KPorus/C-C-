#include<iostream>

int main()
{
    int t;
    int w,h,n;
    std::cin>>t;
    int res =1;
    for(int i=1;i<=t;i++)
    {
        std::cin>>w>>h>>n;
        while(w%2==0)
        {
            w= w/2;
            res *=2;
        }
        while (h%2==0)
        {
            h = h/2;
            res *=2;
        }
        std::cout<<(res>=n ? "yes\n" : "No\n");
        res=1;
    }
    return 0;
}