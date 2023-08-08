#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left_child = 2 * i + 1;
    int right_child = 2 * i + 2;

    if (left_child < n && arr[i] > arr[left_child])
        largest = left_child;

    if (right_child < n && arr[largest] > arr[right_child])
        largest = right_child;

    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heap_sort(int arr[], int n)
{
    // Build min heap
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // Extract elements one by one
    for (int i = n - 1; i > 0; i--)
    {
        swap(arr[0], arr[i]); 
        heapify(arr, i, 0);  
    }
}

int main()
{
    int n;
    cout<<"Enter an array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array values: ";
    for(int i  =0; i<n;i++){
        cin>>arr[i];
    }
    heap_sort(arr, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
