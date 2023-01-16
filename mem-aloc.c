#include <stdio.h>

int j, majority, base, k, M = 3, N = 3, W;

int Clm_loc(int LA[])
{
    base = base + W * (M * (k - 1) + (j - 1));
    return base;
}

int Row_loc(int LA[])
{
    base = base + W * (N * (j - 1) + (k - 1));
    return base;
}

int main()
{
    int LA[3][3] = {1, 2, 3, 4, 5, 6, 7, 6, 7};
    printf("Enter row then coloum: ");
    scanf("%d %d", &j, &k);
    printf("Enter base then weight: ");
    scanf("%d %d", &base, &W);
    printf("colomn major->1 \n Row maojr->2: ");
    scanf("%d", &majority);
    switch (majority)
    {
    case (1):
        printf("%d", Clm_loc(LA));
        break;
    case (2):
        printf("%d", Row_loc(LA));
        break;
    default:
        return 0;
        break;
    }
}
