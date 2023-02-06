#include <stdio.h>
#include <stdlib.h>
int length(char arr[])
{
    int i = 0;
    int count = 0;
    while (arr[i] != '\0')
    {
        i++;
        count++;
    }
    return count;
}

int main(int argc, char const *argv[])
{
    char str[] = "fardin is back";
    char str1[] = "far";
    int i = 0, x = 0, j;
    int k = 0, temp;
    char str2[] = "anika";
    while (str[i] != '\0')
    {
        j = 0;
        if (str[i] == str1[j])
        {
            k = i;
            int h;
            temp = i + 1;
            while (str[i] == str1[j])
            {
                i++;
                j++;
            }
            if (str1[j] == '\0')
            {
                printf("The substring is present in given string at position \n %d to %d\n", k, i);

                for (j = 0; str2[j] != '\0'; j++)
                {
                    for (h = length(str); h >= i; h--)
                    {
                        str[h + 1] = str[h];
                    }
                    str[k] = str2[j];
                    k++;
                }
                    
                goto m;
            }
            else
            {
                i = temp;
                temp = 0;
            }
        }
        i++;
    }
    if (temp == 0)
    {
        printf("The substring is not present");
        return 0;
    }

m:
    printf("Array is--\n");
    i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    return 0;
}
