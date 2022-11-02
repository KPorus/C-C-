#include<iostream>

int main()
{
    int n;
    std::cout<<"Enter how many number you want to calculate: ";
    std::cin>>n;
    int arr[n];
    int sum=0;
    int con;
    for(int i=0;i<n;i++)
    {
        std::cout<<"Enter your number: ";
        std::cin>>arr[i];
    }
    std::cout<<"What do want to with those number (if sum than press 1\n if add then 2\n if multipilication then 3\n)\n";
    std::cin>>con;

    if(con==1){
        for(int j=0;j<n;j++)
        {
            sum+=arr[j];
        }
        std::cout<<"Sum of numbers: "<<sum;
    }
    else if(con==2)
    {
        for(int j=0;j<n;j++)
        {
            sum=arr[j+1]*arr[j];
        }
        std::cout<<"add of numbers: "<<sum;
    }
    // else if(con==3)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         sum=1;
    //         sum*=arr[j];
    //     }
    //     std::cout<<"add of numbers: "<<sum;
    // }

    return 0;
}