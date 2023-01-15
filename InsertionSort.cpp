#include<iostream>

int main(int argc, char const *argv[])
{
    int n;
    std::cout<<"Enter a size of array: ";
    std::cin>>n;
    int arr[n];

    for(int i = 0; i<n; i++)
    {
        std::cin>>arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (arr[j]<current)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }

    std::cout<<"Array :";
    for(int i = 0; i < n; i++)
    {
        std::cout<<arr[i]<<" ";
    }
    
    return 0;
}
