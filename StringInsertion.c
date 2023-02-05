#include <stdio.h>

int length(char arr[])
{
    int i = 0;
    int count = 0;
    while (arr[i] != '\0')
    {
        if (arr[i] == ' ')
        {
        }
        else
        {
            count++;
        }
        i++;
    }
    return count;
}
int main()
{
    char str1[20] = "fardin is back";
    char str2[20] = "anika";
    int index = 11;
    int i, j;

    for (j = 0; str2[j] != '\0'; j++)
    {
        for (i = length(str1); i >= index; i--)
            str1[i + 1] = str1[i];
        str1[index] = str2[j];
        index++;
    }

    printf("Result: %s\n", str1);

    return 0;
}
