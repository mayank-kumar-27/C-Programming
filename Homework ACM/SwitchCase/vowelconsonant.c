//Write a C program to check whether a character is VOWEL or CONSONANT using switch case
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter an Alphabet :");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        printf("Vowel");
        break;
        default:
        printf("Consonant");
    }
    
    return 0;
}