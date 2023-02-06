#include <stdio.h>
int i = 0, j = 0, k = 0;
void sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main()
{
    int arr1[] = {10, 1, 0, 70, 80};
    int arr2[] = {12, 20, 15, 14, 20, 40, 80, 60, 85, 100};
    int size = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int arr3[size + size2];
    sort(arr1, size);
    sort(arr2, size2);
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr1[j] < arr1[i])
            {
                int temp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = temp;
            }
        }
    }

    while (k < 15)
    {

        if (i >= 5)
        {
            arr3[k] = arr2[j];
            j++;
            k++;
            continue;
        }
        if (j >= 10)
        {
            arr3[k] = arr1[i];
            i++;
            k++;
            continue;
        }

        if (arr1[i] <= arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
        }
        else
        {
            arr3[k] = arr2[j];
            j++;
        }
        k++;
    }

    for (i = 0; i < 15; i++)
    {
        printf("%d, ", arr3[i]);
    }

    return 0;
}