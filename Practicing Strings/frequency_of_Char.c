// Write a program to count the frequency of each character in a string.
#include <stdio.h>
int main()
{
    char str[100];
    printf("Enter the Sentence : ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '\n')
        {
            str[i] = '\0';
            break;
        }
    }
    int freq[256] = {0};  //We have taken 256 so that it can cover all ASCII value of each char. 
    for (int i = 0; str[i] != '\0'; i++)
    {
        freq[(int)str[i]]++;
    }
    printf("Character Frequencies are : \n");
    for (int i = 0; i < 256; i++)
    {
        if (freq[i] > 0)
        {
            printf("'%c' = %d\n", i, freq[i]);
        }
    }
    return 0;
}