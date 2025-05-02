// Write a program that calculates the total cost of items in a shopping cart.
// If the total cost exceeds $100, the user gets a 10% discount.
// Write the logic in C to calculate the final amount to be paid.
#include <stdio.h>
int main()
{
    float price, Total_Price = 0;
    int n;
    printf("Enter the NUMBER of Items :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("Enter The price of item %d : $ ", i);
        scanf("%f", &price);
        Total_Price = Total_Price + price;
    }
    if (Total_Price <= 100)
    {
        printf("The total Amount to be Paid is $ %.2f", Total_Price);
    }
    else
    {
        printf(" The total Amount to be Paid is $ %.2f", (Total_Price - (Total_Price / 10)));
    }
    return 0;
}