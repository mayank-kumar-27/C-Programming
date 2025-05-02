// Write a program to demonstrate pointer arithmetic by incrementing and decrementing a pointer to an array of integers.
#include <stdio.h>
int main()
{
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the %dth Number : ", i + 1);
        scanf("%d", &arr[i]);
    }
    int *ptr = &arr[1];
    printf("%d\n", *(ptr + 1));
    printf("%d\n", *(ptr - 1));
    return 0;
}