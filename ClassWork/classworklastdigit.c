// Write a programm to print last digit of a number.
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a Number :");
    scanf("%d",&x);

    y=x%10;
    printf("The last digit of the Number is %d",y);
    return 0;
}
// done...
