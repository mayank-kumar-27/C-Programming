// Write a program to calculate the area of a rectangle given its length and breadth.
#include <stdio.h>
int main()
{
    float l, b;
    printf("Enter the Length of Rectangle :");
    scanf("%f", &l);
    printf("Enter the Breadth of Rectangle :");
    scanf("%f", &b);

    printf("The area of Rectangle is %.2f", l * b);
    return 0;
}