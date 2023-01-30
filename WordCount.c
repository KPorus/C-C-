#include <stdio.h>
#include <string.h>

int length(char arr[])
{
    int i = 0;
    int count = 0;
    while (arr[i] != '\0')
    {
        if (arr[i] == ' ' & arr[i+1] != ' ')
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
    int len = length(arr);
    printf("%d", len+1);
    return 0;
}
