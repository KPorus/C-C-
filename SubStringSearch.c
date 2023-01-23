#include<stdio.h>
int i , j;
void pattern (char arr[], char arr2[], int n)
{
    int max = n - 5 + 1;
    for(i = 1;i<=max;i++)
    {
        int flag = 1;
        for(j = 1; j<=5 && flag == 1; j++)
        {
            if(arr[i + j -1] != arr2[j])
            {
                flag = 0;
            }
        }
        if(flag==1)
        {
            printf("Success");
        }
    }
    printf("Fail");

}
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a size string ");
    scanf("%d",&n);
    char arr[n];
    printf("Enter a string ");
    scanf("%s",arr);
    char arr2[5];
    printf("Enter a sub string ");
    scanf("%s",arr2);
    pattern(arr, arr2 ,n);
    return 0;
}

// #include <stdio.h>
// int i, j;
// void pattern(char arr[], char arr2[])
// {
//     int max = 10 - 5 + 1;
//     for (i = 0; i < max; i++)
//     {
//         int flag = 1;
//         for (j = 0; j < 5; j++)
//         {
//             if (arr[i + j] != arr2[j])
//             {
//                 break;
//             }
//         }
//         if (flag == 1)
//         {
//             printf("Success ");
//         }
//     }
// }
// int main(int argc, char const *argv[])
// {

//     char arr[10] = "fardinkhan";

//     char arr2[5] = "fahdi";
//     pattern(arr, arr2);
//     return 0;
// }
