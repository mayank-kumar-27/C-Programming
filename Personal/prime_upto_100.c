#include <stdio.h>
int main()
{
    for (int i = 2; i < 100; i++)
    {
        int yes = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                yes = 0;
                break;
            }
        }
        if (yes)
        {
            printf("%d ", i);
        }
    }
    return 0;
}