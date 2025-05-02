// Check wether the number is divisible by 5 or not?
#include<stdio.h>
int main()
{
    int A;
    printf("Enter Number A ");
    scanf("%d",&A);

    if(A%5==0)
    {
        printf("Yes,It is divisible by 5");
    }
    else
    {
        printf("No,It is not divisible by 5");
    
    }
    return 0;

}