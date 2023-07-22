#include<iostream>

int binarySearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n;

    while (s<=e)
    {
        int mid = (s+e)/2;

        if(arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            e = mid-1;
        }
        else{
            s = mid + 1;
        }
    }
    return -1;
    
}

int main()
{
    int n;
    std::cout<<"Enter the size of array:";
    std::cin>> n;
    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        std::cin>>arr[i];
    }

    int key = 0 ;
    std::cout<<"Enter the searching value : ";
    std::cin>>key;

    int result = binarySearch(arr,n,key);
    std::cout<< "Given value index in a array :"<< result;
    
    return 0;
}

/*
Time complexity of the binary search is big O of log n base 2
*/