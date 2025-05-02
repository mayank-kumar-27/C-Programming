// Create a program to copy one string into another without using strcpy.
#include <stdio.h>
int main()
{
    char source[100], copied[100];
    printf("Enter the Word You want to copy in Copied String : ");
    fgets(source, sizeof(source), stdin);
    int i;
    for (i = 0; source[i] != 0; i++)
    {
        if (source[i] == '\n')
        {
            source[i] = '\0';
            break;
        }
        copied[i] = source[i];
    }
    copied[i] = '\0';
    printf("The Words after copy is %s", copied);
    return 0;
}