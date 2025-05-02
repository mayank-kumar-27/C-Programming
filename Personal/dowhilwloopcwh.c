#include <stdio.h>
int main()
{
    int index = 0, num;
    printf("Enter n :");
    scanf("%d", &num);
    do
    {
        printf("%d\n", index + 1);
        index = index + 1;
    } 
    while (index < num);
    return 0;
}