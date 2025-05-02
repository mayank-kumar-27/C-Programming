//Write a program in C to swap two numbers using a function.
#include<stdio.h>
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int n1,n2;
    printf("Enter number a :");
    scanf("%d",&n1);
    printf("Enter number b :");
    scanf("%d",&n2);
    swap(&n1,&n2);
    printf("%d %d", n1,n2);
    return 0;
}


// This code uses the concept of pointer which is a little bit out of your domain coplete it to understand it properly.