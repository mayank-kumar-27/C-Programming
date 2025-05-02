// Write a C program to check whether a character is uppercase or lowercase alphabet
#include<stdio.h>
int main()
{
    char x;
    printf("Enter X :");
    scanf("%c",&x);

    if (x>='a'&& x<='z' )
    {
        printf("LOWERCASE");
    }
    else if (x>='A'&& x<='Z')
    {
        printf("UPPERCASE");
    }
    else
    {
        printf("Enter a Valid CASE");
    }
    return 0;
    
}