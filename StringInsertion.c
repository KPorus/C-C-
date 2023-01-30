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
int main(int argc, char const *argv[])
{
    int len = 10;
    char str[len];
    gets(str);
    char str1[] = "is";
     len = length(str);
    printf("%d\n", len);
    int i = 0, j;
    int x = 0;
    printf("Enter a index number to enter a str1");
    scanf("%d", &j);
    for (i = len - 1; i >= j; i--)
    {
        str[i + 1] = str[i];
    }
    while (str1[x] !='\0')
    {
        str[j] = str1[x];
        j++;
        x++;
    }
    len++;
    printf("Array is - \n");
    i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }

    return 0;
}
