#include<stdio.h>
int sum(int a, int b)
{
    return a+b;
}
int main()
{
    int x,y;
    printf("Enter A : ");
    scanf("%d",&x);
    printf("Enter B : ");
    scanf("%d",&y);
    printf("The Sum of Entered Number is %d",sum (x,y));
    return 0;
}