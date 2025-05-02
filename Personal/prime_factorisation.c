#include <stdio.h>
int main()
{
    int n, i = 2;
    scanf("%d", &n);
    while (i<= n)
    {
        if (n % i == 0)
        {
            printf("%d", i);
            n /= i;
            if (n > 1)
            {
                printf(" x ");
            }
            else
            {
                printf(" x 1");
            }
        }
        else
        {
            i++;
        }
    }
    return 0;
}