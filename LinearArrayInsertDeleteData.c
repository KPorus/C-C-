#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 50, 60, 100};
    int i, j;
    for (i = 0; i < 10 - 1; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Array is : ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    int key;
    printf("\nEnter a value to delete a element in array: ");
    scanf("%d", &key);
    for (i = key; i < 10; i++)
    {
        arr[i] = arr[i + 1];
    }

    printf("\nAfter deleting a array: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
