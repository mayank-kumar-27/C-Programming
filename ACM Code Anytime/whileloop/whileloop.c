#include<stdio.h>
void main()
{
    int rev=0;
    int n=123;
    while(n>0)
    {
        rev=rev*10+(n%10);
        n=n/10;
    }
    printf("%d",rev);
}