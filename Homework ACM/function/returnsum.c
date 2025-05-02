// 1. Write a program that defines a function add(int a, int b) that takes two integers as arguments and returns their sum. Call the function in main() and print the result
#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    printf("%d", sum(2, 3));
    return 0;
}