#include <stdio.h>

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
int main()
{
    char str1[20] = "fardin is back";
    char str2[20] = "is";
    int index = 12;
    int i, j;

    int k, temp;
    char str3[20] = "anika";
    while (str1[i] != '\0')
    {
        j = 0;
        if (str1[i] == str2[j])
        {
            k = i;
            int h;
            temp = i + 1;
            while (str1[i] == str2[j])
            {
                i++;
                j++;
            }
            if (str2[j] == '\0')
            {
                printf("The substring is present in given string at position \n %d to %d\n", k, i);
                index = k;

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
    for (j = 0; str3[j] != '\0'; j++)
    {
        for (i = length(str1); i >= index; i--)
        {
            str1[i + 1] = str1[i];
        }
        str1[index] = str3[j];
        index++;
    }

    printf("Result: %s\n", str1);

    return 0;
}
