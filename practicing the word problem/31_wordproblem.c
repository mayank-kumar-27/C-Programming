// Write a program to merge two lists of numbers entered by the user.
#include <stdio.h>
int main()
{
    int m, n;
    printf("Enter the Number of Numbers in List 1 : ");
    scanf("%d", &m);
    printf("Enter the Number of Numbers in List 2 : ");
    scanf("%d", &n);
    int arr1[m], arr2[n];
    printf("Enter the Numbers of List 1\n");
    for (int i = 0; i < m; i++)
    {
        printf("Enter the %dth Number : ", i + 1);
        scanf("%d", &arr1[i]);
    }
    printf("Enter the Numbers of List 2\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %dth Number : ", i + 1);
        scanf("%d", &arr2[i]);
    }
    int arrmrg[m + n];
    for (int i = 0; i < m; i++)
    {
        arrmrg[i] = arr1[i];
    }
    for (int i = 0; i < n; i++)
    {
        arrmrg[m + i] = arr2[i];
    }
    printf("The Merged list is \n");
    for (int i = 0; i < m + n; i++)
    {
        printf("%d ", arrmrg[i]);
    }
    return 0;
}