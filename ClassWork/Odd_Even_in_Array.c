#include <stdio.h>
int main()
{
    int arr[10];
    printf("Enter the Elements Of Array.\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    int even = 0, odd = 0;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("The Numbers of Even Numbers in Array are %d\n", even);
    printf("The Numbers of Odd Numbers in Array are %d\n", odd);

    return 0;
}