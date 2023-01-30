#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    char str[] = "fardin is back";
    char str1[] = "is";
    int i = 0, x = 0, j;
    int k, temp;
    char str2[] = "ki";
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
                while (str2[x] != '\0')
                {
                    str[k] = str2[x];
                    k++;
                    x++;
                }
                // for(h=k;h<i;h++)
                // {
                //     str[k]=str2[h];
                //     k++;
                // }
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
