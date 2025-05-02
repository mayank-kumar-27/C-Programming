// Write a program to swap two numbers using pointers.
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter A : ");
    scanf("%d", &a);
    printf("Enter B : ");
    scanf("%d", &b);
    int *ptrA = &a, *ptrB = &b;
    int temp;
    temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
    printf("Number after swapping is %d and %d", a, b);
    return 0;
}