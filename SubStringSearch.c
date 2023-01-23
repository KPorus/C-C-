#include<stdio.h>
int i , j;
void pattern (char arr[], char arr2[], int n)
{
    int max = n - 5 + 1;
    for(i = 1;i<=max;i++)
    {
        int flag = 1;
        for(j = 1; j<=5 && flag == 1; j++)
        {
            if(arr[i + j -1] != arr2[j])
            {
                flag = 0;
            }
        }
        if(flag==1)
        {
            printf("Success");
        }
    }
    printf("Fail");

}
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a size string ");
    scanf("%d",&n);
    char arr[n];
    printf("Enter a string ");
    scanf("%s",arr);
    char arr2[5];
    printf("Enter a sub string ");
    scanf("%s",arr2);
    pattern(arr, arr2 ,n);
    return 0;
}
