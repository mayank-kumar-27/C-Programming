#include <stdio.h>
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
int main()
{
    int num;
    printf("Enter the Number Whose Factorial You Want : ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Enter A Valid Input, Because Factorial of Negative Number is Not DEfined");
    }
    else if (num == 0)
    {
        printf("The Factorial Of Given Number is %d", 1);
    }
    else
    {
        printf("The Factorial Of Given Number is %d", factorial(num));
    }
    return 0;
}