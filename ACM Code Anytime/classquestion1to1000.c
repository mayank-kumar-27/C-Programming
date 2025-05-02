#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Value upto which u want Results : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        if (i%15==0)
        {
            printf("\n%d FizzBuzz",i);
        }
        else if (i%3==0)
        {
            printf("\n%d Fizz",i);
        }
        else if (i%5==0)
        {
            printf("\n%d Buzz",i );
        }
        else {
            printf("\n%d",i );
        }
    }
    return 0;
}