// Write a program that prints the multiplication table for a number entered by the user
#include <stdio.h>
int main()
{
    int n, N;
    printf("Enter the number whose table u want : ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        N = n * i;
        printf("%d X %d = %d\n", n, i, N);
    }
    return 0;
}