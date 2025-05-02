// Write a program that merges two arrays of size 5 each into a single array of size 10. Print the merged array
#include <stdio.h>
int main()
{
    int n1, n2;
    printf("Enter the size of First array : ");
    scanf("%d", &n1);
    printf("Enter the size of Second array : ");
    scanf("%d", &n2);
    int arr[n1], arr2[n2], arr3[n1 + n2];
    printf("Enter the values of first array :\n");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the values of second array :\n");
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    // merging of array
    for (int i = 0; i < n1; i++)
    {
        arr3[i] = arr[i];
    }
    for (int i = 0; i < n2; i++)
    {
        arr3[n1 + i] = arr2[i];
    }
    // printing merged array
    printf("Merged Array : ");
    for (int i = 0; i < (n1 + n2); i++)
    {
        printf("%d ", arr3[i]);
    }
    return 0;
}