// Write a program to declare a pointer, assign it an address of an integer variable, and print the variable's value using the pointer.
#include <stdio.h>
int main()
{
    int a = 10;
    int *ptr = &a;
    printf("%d", *ptr);
    return 0;
}