// Develop a program that calculates the total price of items bought in a store based on their quantities and prices entered by the user.
#include <stdio.h>
int main()
{
    int n;
    float sum = 0;
    printf("Enter the Number of distinct Items You Have in Your Bucket : ");
    scanf("%d", &n);
    if (n < 1)
    {
        printf("Purchase at Least one item from the Store for Billing.");
        return 1;
    }
    float price[n];
    int quantity[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the Price of %dth Item : ", i + 1);
        scanf("%f", &price[i]);
        printf("Enter the Quantity of respective Item : ");
        scanf("%d", &quantity[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum += (price[i] * quantity[i]);
    }
    printf("\nThe Total Amount You have to Pay is %.2f\n", sum);
    return 0;
}