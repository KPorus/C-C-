#include<stdio.h>

int main()
{
    int n,i,m,k;
    printf("Enter 1st array size: ");
    scanf("%d",&n);
    int arr1[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr1[i]);
    }

    printf("Enter 2nd array size: ");
    scanf("%d",&m);

    int arr2[m];

    for (i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }

    k = n+m;
    int arr3[k];
    printf("1st array value: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr1[i]);
        arr3[i] = arr1[i];
    }

    int s = n;
    printf("\n2nd array value: ");
    for(i = 0; i < m; i++ )
    {
        printf("%d ",arr2[i]);
        arr3[s] = arr2[i];
        s++;
    }

    printf("\n3rd array value: ");
    for(i = 0; i < k; i++)
    {
        printf("%d ", arr3[i]);
    }
    return 0;
}