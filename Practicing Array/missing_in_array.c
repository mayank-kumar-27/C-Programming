#include <stdio.h>
void sort(int list[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (list[j] > list[j + 1])
            {
                temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (list[i] != i + 1)
        {
            printf("\nThe missing element is %d", i + 1);
            break;
        }
    }
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

    sort(list, n);
    return 0;
}