#include <stdio.h>
int fact(int a)
{
    if (a == 0)
    {
        return 1;
    }
    return a * fact(a - 1);
}
int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d", &n);
    printf("The factorial is %d", fact(n));
    return 0;
}