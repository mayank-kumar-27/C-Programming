// Write a program that asks for a year and determines if it is a leap year or not.
#include<stdio.h>
int main()
{
    int Year;
    printf("Enter the YEAR : ");
    scanf("%d",&Year);
    if(Year%4==0)
    {
        printf("Entered Year is A LEAP YEAR having 366 Days.");
    }
    else
    {
        printf("Entered Year is 'NOT' a LEAP YEAR");
    }
    return 0;
}