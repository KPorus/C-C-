#include <stdio.h>
#include<stdlib.h>
#include <string.h>

    void
    replace(char *str, char *old, char *new)
{
    int i, j, k;
    int str_len = strlen(str);
    int old_len = strlen(old);
    int new_len = strlen(new);
    int count = 0;

    // Count the number of occurrences of the old pattern
    for (i = 0; i < str_len - old_len + 1; i++)
    {
        for (j = 0; j < old_len; j++)
        {
            if (str[i + j] != old[j])
            {
                break;
            }
        }
        if (j == old_len)
        {
            count++;
        }
    }

    if(count == 0)
    {
        printf("Pattern not found");
        exit(0);
    }
    // this part can run if count != 0
    // Calculate the new length of the string
    int new_str_len = str_len + count * (new_len - old_len);
    char new_str[new_str_len];

    // Replace the old pattern with the new pattern 
    for (i = 0, j = 0; i < str_len; i++)
    {
        // finding the pattern in main string
        for (k = 0; k < old_len; k++)
        {
            if (str[i + k] != old[k])
            {
                break;
            }
        }
        // If pattern found then new pattern replace old pattern
        if (k == old_len)
        {
            for (k = 0; k < new_len; k++)
            {
                new_str[j++] = new[k];
            }
            i += old_len - 1;
        }
        // if pattern not found in those index, main string will be copy to new string up until pattern found
        else
        {
            new_str[j++] = str[i];
        }
    }
    new_str[j] = '\0';

    // Copy the new string back to the original string
    for (i = 0; i < new_str_len; i++)
    {
        str[i] = new_str[i];
    }
    str[i] = '\0';
}

int main(void)
{
    char str[] = "Fardin kahn is back. Mr kahn is 22 year old. He is a MERN Stack developer.";
    char old[] = "front";
    char new[] = "khan";

    printf("Old Main String: ");
    printf("%s\n", str);
    replace(str, old, new);
    printf("After update: ");
    printf("%s\n", str);
    return 0;
}