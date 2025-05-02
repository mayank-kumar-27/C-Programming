//Write a C program to check even or odd number using switch case
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a Number N :");
    scanf("%d",&num);
    switch(num % 2)
    {
        case 0:
        printf("N is Even");
        break;
        case 1:
        printf("N is Odd");
        break;
    }
    return 0;
}