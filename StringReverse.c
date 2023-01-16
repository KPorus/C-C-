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
    char rev[100];
    gets(arr);
    int len = length(arr);
    printf("%d\n", len);
    int j,i = 0;
    for(i = len-1; i >= 0; i--)
    {
        rev[j] = arr[i];
        j++;
    }

        printf("%s\n",rev);
    
    return 0;
}
