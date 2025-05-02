// Take two numbers as input and print all prime numbers between them
#include <stdio.h>
int main()
{
    int initial_range, last_range;

    printf("Enter the Initial Range: ");
    scanf("%d", &initial_range);
    printf("Enter the Last Range: ");
    scanf("%d", &last_range);

    if (initial_range <= 2)
    {
        initial_range = 2;
    }

    for (int i = initial_range; i <= last_range; i++)
    {
        int is_prime = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                is_prime = 0;
                break;
            }
        }
        if (is_prime)
        {
            printf("%d ", i);
        }
    }
    
    return 0;
}