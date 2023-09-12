#include <iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r)
{
    int b[r - l + 1];
    int l1 = l, l2 = mid + 1, i = 0;
    while (l1 <= mid && l2 <= r)
    {
        if (arr[l1] <= arr[l2])
            b[i++] = arr[l1++];
        else
            b[i++] = arr[l2++];
    } 
    while (l1 <= mid)
    {
        b[i++] = arr[l1++];
    }

    while (l2 <= r)
    {
        b[i++] = arr[l2++];
    }

    int j = 0;
    for (i = l; i <= r; i++)
        arr[i] = b[j++];
}

void mergeSort(int arr[], int l, int r)
{
    int mid;
    if (l < r)
    {
        mid = (l + r) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}

int main()
{
    int i = 0;
    int n;
    cout << "Enter a size for the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements in the array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int l = 0, r = n - 1;
    mergeSort(arr, l, r);
    for (i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}