// Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle.
#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter Side A :");
    scanf("%d",&a);
    printf("Enter Side B :");
    scanf("%d",&b);
    printf("Enter Side C :");
    scanf("%d",&c);
    
    if(a==b&&b==c)
    {
        printf("Triangle is Equilateral");
    }
    else if(a==b||b==c||a==c)
    {
        printf("Triangle is Isoceles");
    }
    else
    {
        printf("Triangle is Scalene");
    }
 
    return 0;
}
//Done..