#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i = 0;
    int top = i - 1;
    char str[20] = "(2+(3*2)+8)";
    char str2[20];
    while (str[i] != '\0')
    {
        if (str[i] == '(')
        {
            top = top + 1;
            str2[top] = '(';
        }
        if(str[i] == ')')
        {
            if (top >= -1 && str2[top] != '(')
            {
                top++;
                str2[top] = ')';
            }
            if (top >= 0 && str2[top] == '(')
            {
                top = top - 1;
            }
        }
        i++;
    }

    if (top == -1)
    {
        printf("succes\n");
    }
    else
    {
        printf("fail\n");
    }

    return 0;
}
