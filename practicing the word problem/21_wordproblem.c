// Write a program to find the greatest common divisor (GCD) of two numbers using the Euclidean algorithm.
#include <stdio.h>
int main()
{
    int a, b, smaller, greater;
    printf("Enter the First Number :");
    scanf("%d", &a);
    printf("Enter the Second Number :");
    scanf("%d", &b);
    smaller = a < b ? a : b;
    greater = a > b ? a : b;
    while (smaller > 0)
    {
        if (greater % smaller == 0) break;
        smaller--;
    }
    printf("THE GCD is %d", smaller);
    return 0;
}