#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the Alphabet :");
    scanf("%c", &ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("Alphabet is VOWEL");
    }
    else if (!(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z'))
    {
        printf("Enter a valid character");
    }
    else
    {
        printf("Alphabet is Consonant");
    }
}