// Swap two numbers using pointers.
#include <stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void main()
{
    int x, y;
    printf("Enter 1st Number\n");
    scanf("%d", &x);
    printf("Enter 2nd Number\n");
    scanf("%d", &y);
    printf("The Number Before swapping %d %d\n",x,y);
    swap(&x,&y);
    printf("The number after swapping is %d %d", x,y);
}