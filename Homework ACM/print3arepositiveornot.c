//Write a program that takes three integers as input and uses logical operators (&&, ||, !) to check if all three numbers are positive. Print "All positive" if they are, otherwise print "Not all positive."
#include<stdio.h>
void main()
{
    float a,b,c;
    printf("Enter A :");
    scanf("%f",&a);
    printf("Enter B :");
    scanf("%f",&b);
    printf("Enter C :");
    scanf("%f",&c);

    if(a>0 && b>0 && c>0)
    {
        printf("All Three Numbers are Positive");
    }
    else
    {
        printf("All Three Numbers are NOT Positive");
    }
}