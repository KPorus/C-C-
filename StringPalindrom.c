#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    char arr[n+1];
    int i = 0;
    scanf("%s",arr);
    int check  = 1;
    while (arr[i] != '\0')
    {
        if(arr[i] != arr[n-1-i])
        {
            check = 0;
            break;
        }
        i++;
    }
    
    if(check)
    {
        printf("%s Word is pailndrome.", arr);
    }
    else
    {
        printf("%s Word isn't pailndrome.", arr);
    }

    return 0;
}
