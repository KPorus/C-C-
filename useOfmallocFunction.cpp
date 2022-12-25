#include <iostream>
#include <cstdlib>

int main()
{
    int i, n;
    std::cout << "Enter the size ";
    std::cin >> n;
    int *ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL)
    {
        std::cout << "Memory not allocated\n";
    }

    int k;
    for (i = 0; i < n; i++)
    {
        std::cout << "Enter a integer:";
        std::cin >> *(ptr + i);
    }

    for (i = 0; i < n; i++)
    {
        std::cout << *(ptr + i) <<"\n" ;
    }

    return 0;
}