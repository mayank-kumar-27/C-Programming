// Create an array and use pointers to access each element and print the array in reverse order.
#include <stdio.h>
int main()
{
    int arr[5];
    printf("Enter your Elements.\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    int *ptr = &arr[4];
    printf("Elements in Reverse Order.\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *(ptr - i));
    }
    return 0;
}