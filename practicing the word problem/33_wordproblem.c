//  Develop a program that removes duplicate numbers from a list entered by the user.
#include <stdio.h>
int main()
{
    int n, temp, temp1, count = 0;
    printf("Enter the Number of Numbers you want : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %dth Number of your List : ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("The Numbers You Entered Are :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Only unique Numbers in List Are :\n");
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || arr[i] != arr[i - 1])
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}

// This is for counting the Duplicate Numbers.

// printf("Enter the Number whose Duplicate you want to count : ");
// scanf("%d", &s);
// for (int i = 0; i < n; i++)
// {
//     if (arr[i] == s)
//     {
//         count++;
//     }
// }
// if (count > 1)
// {
//     printf("The Number of same Numbers in your list is %d", count);
// }
// else
// {
//     printf("There is NO same Number in Your list");
// }