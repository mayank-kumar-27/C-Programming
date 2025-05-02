#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}
int diff(int a, int b)
{
    return a - b;
}
int product(int a, int b)
{
    return a * b;
}
int div(int a, int b)
{
    return a / b;
}
int main()
{
    char ch;
    int m, n;
    printf("Enter 1 for Addition \nEnter 2 for Difference \nEnter 3 for product \nEnter 4 for division \nNow Enter PLEASE! :");
    scanf("%c", &ch);
    switch (ch)
    {
    case '1':
        printf("Enter the Number :");
        scanf("%d", &m);
        printf("Enter the number :");
        scanf("%d", &n);
        printf("%d", sum(m, n));
        break;

    case '2':
        printf("Enter the Number :");
        scanf("%d", &m);
        printf("Enter the number :");
        scanf("%d", &n);
        printf("%d", diff(m, n));
        break;

    case '3':
        printf("Enter the Number :");
        scanf("%d", &m);
        printf("Enter the number :");
        scanf("%d", &n);
        printf("%d", product(m, n));
        break;

    case '4':
        printf("Enter the Number :");
        scanf("%d", &m);
        printf("Enter the number :");
        scanf("%d", &n);
        printf("%d", div(m, n));
        break;

    default:
        printf("Ente a valid input");
        break;
    }
    return 0;
}