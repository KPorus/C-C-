#include<iostream>

int main()
{
    int n;
    std::cout<<"Enter the size of array: ";
    std::cin>> n;

    int arr[n];
    int i = 0;
    while (i<n)
    {
        std::cin>>arr[i];
        i++;
    }

    int counter = 1;
    while (counter<n)
    {
        for(i = 0; i < n - counter; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        
        counter++;
    }
    

    for(int j = 0; j < n; j++)
    {
        std::cout<<arr[j]<<" ";
    }
    
    
    return 0;
}