#include<stdio.h>

int main()
{
    int  i,j, space, n;
    printf("Enter a value of rows: ");
    scanf("%d", &n);

    for(i = 0; i<n; i++)
    {
        for(space = 1; space <= n-1-i; space++)
        {
            printf(" ");
        }

        for(j = 0; j < 2*i -1 ; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}