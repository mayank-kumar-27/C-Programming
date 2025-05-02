// Write a program to calculate the average temperature over a week based on daily temperatures entered by the user.
#include <stdio.h>
int main()
{
    float temp[7], sum = 0;
    for (int i = 0; i < 7; i++)
    {
        printf("Enter the Temperature of %dth Day of Week : ", i + 1);
        scanf("%f", &temp[i]);
    }
    for (int i = 0; i < 7; i++)
    {
        sum += temp[i];
    }
    printf("\nThe Average Temperature All Over the Week is %.2f\n", (float)sum / 7);
    return 0;
}