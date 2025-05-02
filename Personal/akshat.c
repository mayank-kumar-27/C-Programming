// Develop a recursive function gcd (num 1,num 2) that accepts two integer arguments.
// write a c programm that invokes this function to find gcd of two integers.
// #include <stdio.h>
// int gcd(int num1, int num2)
// {
//     int temp;
//     while (num2 != 0)
//     {
//         temp = num2;
//         num2 = num1 % num2;
//         num1 = temp;
//     }
//     return num1;
// }
// int main()
// {
//     int a,b;
//     scanf("%d %d",&a,&b);
//     printf("%d",gcd(a,b));
//     return 0;
// }

// Binary search
#include <stdio.h>
void Binary_Search(int list[], int k, int n)
{
    int yes = 0, t;
    for (int i = 0; i < n; i++)
    {
        if (list[i] == k)
        {
            yes = 1;
            t = i;
            break;
        }
    }
    if (yes)
    {
        printf("%d is found in the list at %d", k, t);
    }
    else
    {
        printf("Number not found in the list");
    }
}
int main()
{
    int n, k;
    printf("Enter Size of list: ");
    scanf("%d", &n);
    int list[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter Number %d: ", i + 1);
        scanf("%d", &list[i]);
    }

    printf("Enter the Number you re looking for in your list: ");
    scanf("%d", &k);

    Binary_Search(list, k, n);
    return 0;
}