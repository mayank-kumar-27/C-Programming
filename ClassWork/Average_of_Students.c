#include <stdio.h>
int main()
{
    int arr[5];
    printf("Enter the NUmber of Students\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    printf("The sum of Numbers in All 5 Subjectss is %d\n", sum);
    printf("The Average of Numbers in All 5 Subjects is %f", (float)sum / 5);
    return 0;
}