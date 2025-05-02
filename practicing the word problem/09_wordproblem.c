//A bakery sells loaves of bread for $3 each. 
//Write a program to calculate the total cost of purchasing a given number of loaves.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Number of Loaves : ");
    scanf("%d",&n);
    printf("The total price of %d loaves is $ %d",n,n*3);
    return 0;
}