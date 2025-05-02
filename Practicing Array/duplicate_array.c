#include <stdio.h>
void duplicate(int list[], int n)
{
    int foundDuplicate = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (list[i] == list[j])
            {
                foundDuplicate = 1;
                break;
            }
        }
        if (foundDuplicate)
        {
            printf("\nArray has duplicates\n");
            return;
        }
    }
    printf("\nArray has no duplicates\n");
}

int main()
{
    int n;
    printf("Enter the Number of Numbers you want to enter: ");
    scanf("%d", &n);

    int list[n];

    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the number %d: ", i + 1);
        scanf("%d", &list[i]);
    }

    duplicate(list, n);
    return 0;
}