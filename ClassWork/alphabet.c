// Write a Programm to check wether a given char is alphabet lowecase uppercase a digit or a special character.
#include<stdio.h>
void main()

{
    char ch;
    printf("Enter a Character :");
    scanf("%c",&ch);

    if(ch>='A'&& ch<='Z')
    {
        printf("UPPER CASE");
    }
    else if(ch>='a'&& ch<='z')
    {
        printf("LOWER CASE");
    }
    else if(ch>='0' && ch<='9')
    {
        printf("DIGIT");
    }
    else
    {
        printf("SPECIAL CHARACTER");
    }

}