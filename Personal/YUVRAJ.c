// // Write a C program to find the sum and average of elements in an array.
// #include <stdio.h>
// int main()
// {
//     int arr[3], sum;
//     float avg;
//     for (int i = 0; i < 3; i++)
//     {
//         printf("enter the elements: ");
//         scanf("%d", &arr[i]);
//     }
//     sum = arr[0] + arr[1] + arr[2];
//     avg = sum / 3;
//     printf("sum = ""%d\n", sum);
//     printf("avg = ""%f", avg);
//     return 0;
// }

// // #include<stdio.h>
// // int main()
// // {
// //     int arr[10];

// //     for(int i=0;i<10;i++)
// //     {
// //         scanf("%d",&arr[i]);
// //     }

// //     for(int i=0;i<10;i++)
// //     {
// //         printf("%d",arr[i]);
// //     }

// //     return 0;
// // }

// #include <stdio.h>
// int main()
// {
//     int n, i = 0, arr[100];
//     scanf("%d", &n);
//     while (n != 0)
//     {
//         arr[i] = n % 2;
//         n = n / 2;
//         i++;
//     }
//     for (int j = 0; j < i; j++)
//     {
//         printf("%d", arr[i - 1 - j]);
//     }
//     return 0;
// }
#include<stdio.h>
int Multiplying(int a, int arr[]);
int Multiplying(int a, int arr[])
{
    for (int i = 0; i <= 9; i++)
    {
        printf("%d", a * arr[i]);
    }
    return 0;
}
int main()
{
    int a;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    scanf("%d", &a);
    Multiplying(a, arr);
    return 0;
}