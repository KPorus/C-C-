#include<stdio.h>
#include<string.h>

int length(char arr[])
{
    int i = 0;
    int count = 0;
    while (arr[i] != '\0')
    {
        if(arr[i]==' ')
        {

        }
        else{
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
    int len  = length(arr);
    printf("%d",len);
    return 0;
}
