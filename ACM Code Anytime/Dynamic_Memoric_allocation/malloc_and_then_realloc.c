#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int n, sum = 0;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &ptr[i]);
    }

    ptr = (int *)realloc(ptr, (n + 5) * sizeof(int));

    for (int i = n; i < n + 5; ++i)
    {
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n + 5; i++)
    {
        sum += ptr[i];
    }

    printf("%d", sum);

    return 0;
}