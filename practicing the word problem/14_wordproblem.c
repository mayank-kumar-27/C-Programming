//Write a program that converts a given distance in kilometers to miles.
#include<stdio.h>
int main()
{
    float KM;
    printf("Enter the Distance in KM :");
    scanf("%f",&KM);
    printf("The Distance in miles are %f",KM*0.621371);
    return 0;
}