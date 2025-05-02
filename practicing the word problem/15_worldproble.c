//. Write a program that checks if a character entered by the user is a vowel or a consonant.
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter an Alphabet :");
    scanf("%c", &ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("Entered Alphabet is Vowel");
    }
    else
    {
        printf("Entered Alphabet is Consonant");
    }
    return 0;
}