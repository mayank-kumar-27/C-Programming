//Write a C program to input any character and check whether it is alphabet, digit or special character.
#include<stdio.h>
int main()
{
    char x;
    printf("Enter X :");
    scanf("%c",&x);

    if(x>='A' && x<='Z')
    {
        printf("ALPHABET");
    }
    else if(x>='0' && x<='9')
    {
        printf("DIGIT");
    }
    else
    {
        printf("SPECIAL CHARACTER");
    }
    return 0;

}