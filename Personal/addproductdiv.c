#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter Number a ");
    scanf("%d",&a);
    printf("Enter Number b ");
    scanf("%d",&b);

    c=a+b;
    d=a*b;
    e=a/b;

    
    printf("The Sum is %d\n",c);
    printf("The Product is %d\n",d);
    printf("The Division is %d",e);

    return 0;
}