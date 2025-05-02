//Write a C program to input week number and print week day.
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any Number between 1 to 7 :");
    scanf("%c",&ch);
    switch(ch)
    {
        case'1':
        printf("MONDAY");
        break;

        case'2':
        printf("TUESDAY");
        break;

        case'3':
        printf("WEDNESDAY");
        break;

        case'4':
        printf("THURSDAY");
        break;

        case'5':
        printf("FRIDAY");
        break;

        case'6':
        printf("SATURDAY");
        break;

        case'7':
        printf("SUNDAY");
        break;

        default:
        printf("Enter a Valid Number");

    } 
    return 0; 
}

//Done....