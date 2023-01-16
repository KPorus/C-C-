#include<stdio.h>

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

int main(int argc, char const *argv[])
{
    char arr[100];
    gets(arr);
    char arr1[]="pqr";
    int len = length(arr1);
    int i = 0;
    while (arr[i] != '\0')
    {
        arr1[len] = arr[i];
        len++;
        i++;
    }
    
    printf("%s",arr1);
    return 0;
}
