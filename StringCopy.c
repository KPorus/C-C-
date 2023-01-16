#include <stdio.h>

int main(int argc, char const *argv[])
{
    char arr[100];
    gets(arr);
    char arr1[] = "pqr";
    int i = 0;
    while (arr[i] != '\0')
    {
        arr1[i] = arr[i];
        i++;
    }
    arr1[i] = '\0';
    printf("%s", arr1);
    return 0;
}
