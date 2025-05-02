// Write a C program to find the sum and average of elements in an array.
#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter the Numbers you want to Add:");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Please Enter a positive Number.\n");
        return 1;
    }
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d Index Number: ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("The sum of the Numbers in array is %d\n", sum);
    // printf("The average is %f", (float)sum / n);
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int n, even = 0, odd = 0;
//     printf("Enter the Number of Numbers:");
//     scanf("%d", &n);
//     if (n <= 0)
//     {
//         printf("Please Enter a positive Number.\n");
//         return 1;
//     }
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter %d Index Number: ", i);
//         scanf("%d", &arr[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] % 2 == 0)
//         {
//             even++;
//         }
//         else
//         {
//             odd++;
//         }
//     }
//     printf("%d are Even %d are odd", even, odd);
//     return 0;
// }