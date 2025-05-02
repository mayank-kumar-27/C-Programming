#include<stdio.h>
int sum(int a, int b)
{
    return a+b;
}
int main()
{
    int a,b,c;
    a=9;
    b=87;
    c=sum(a,b);
    printf("%d",c);
    return 0;
}