#include<stdio.h>
int binary(int a)
{
    int p;
    while(a%2!=0)
    {
        p=a%2;
    }
    return p;
}
int main()
{
    int n;
    printf("Enter The Decimal Number ");
    scanf("%d",&n);
    printf("The Binary value is %d",binary(n));
    return 0;
}