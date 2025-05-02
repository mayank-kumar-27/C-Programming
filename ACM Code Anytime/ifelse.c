#include<stdio.h>
int main()
{
    int a;
    printf("Enter Number a ");
    scanf("%d",&a);

    if (a%15==0)
    {
        printf("fizzbuzz");
    }
    else if (a%5==0)
    {
        printf("buzz");
    }
    else if (a%3==0)
    {
        printf("fizz");
    }
    return 0;
}