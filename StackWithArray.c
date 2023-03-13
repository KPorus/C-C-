#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i = 0;
    int top = i - 1;
    char str[20] = "))((";
    int count = 0;
    int count1 = 0;
    char str2[20];
    while (str[i] != '\0')
    {
        if (str[i] == '(')
        {
            top = top + 1;
            str2[top] = '(';
            count++;
        }

        if (str[i] == ')' && str2[top] == '(')
        {
            top = top - 1;
            count1++;
        }
        i++;
    }

    if (count1 + count < i)
    {
        printf("fail\n");
    }
    else if (top == -1)
    {
        printf("succes\n");
    }

    return 0;
}
