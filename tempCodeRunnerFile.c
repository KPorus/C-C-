#include <stdio.h>
int i, j;
void pattern(char arr[], char arr2[])
{
    int max = 10 - 5 + 1;
    for (i = 0; i < max; i++)
    {
        int flag = 1;
        for (j = 0; j < 5; j++)
        {
            if (arr[i + j] != arr2[j])
            {
                break;
            }
        }
        if (flag == 1)
        {
            printf("Success ");
        }
    }
}
int main(int argc, char const *argv[])
{

    char arr[10] = "fardinkhan";

    char arr2[5] = "fahdi";
    pattern(arr, arr2);
    return 0;
}
