// Develop a program that calculates the sum of all even numbers between 1 and 100.
#include <stdio.h>
int main()
{
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
    }
    printf("Sum of Even number between 1 and 100 is %d", sum);
    return 0;
}