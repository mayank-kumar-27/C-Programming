#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter the Number of Items you have :");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the price of %dth Item :", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("The Final Price of %dth Element after adding 18 Percent gst is %.2f\n", i + 1, arr[i] + (float)arr[i] * 9 / 50);
    }
    printf("\nThe Total Amount you have to pay After GST for all of your items is %.2f\n", sum + (float)sum * 9 / 50);
    return 0;
}