#include<iostream>

int main()
{
    int n;
    std::cout<<"Enter the size of array: ";
    std::cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        std::cin>>arr[i];
    }

    for (int i = 0; i< n-1; i++)
    {
        for(int j = i+1; j< n; j++)
        {
            if(arr[j]<arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    for(int i = 0; i < n; i++)
    {
        std::cout<<arr[i]<<" " ;
    }
    return 0;
}