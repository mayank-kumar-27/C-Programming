#include <stdio.h>
int main()
{
    int n, count = 0;
    printf("Enter the Number u want to check Prime or Not :");
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 0)
    {
        printf("Number is Prime");
    }
    else
    {
        printf("Number is not Prime");
    }
    return 0;
}