//Write a C program to check positive negative or zero using switch case
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter an Integer :");
    scanf("%c",&ch);
    switch(ch)
    {
        case '0' :
        printf("ZERO");
        break;
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        printf("Positive");
        break;
        default:
        printf("Negative");
    }
    return 0;
}