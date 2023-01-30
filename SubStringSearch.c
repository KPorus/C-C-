#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    char str[]="fardin is back";
    char str1[]="is";
    int i = 0,j;
    int k,temp;
    while(str[i] != '\0')
    {
        j=0;
        if(str[i] == str1[j])
        {
            k=i;
            temp = i+1;
            while(str[i]==str1[j])
            {
                i++;
                j++;
            }
            if(str1[j] == '\0')
            {
                printf("The substring is present in given string at position \n %d to %d",k,i);
                exit(0);
            }
            else{
                i = temp;
                temp =0;
            }
        }
        i++;
    }
    if(temp == 0)
    {
        printf("The substring is not present");
    }
    return 0;
}
