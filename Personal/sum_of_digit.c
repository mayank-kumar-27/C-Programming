// Calculate the sum of digits of a number.
// Input: 1234
// Output: 10 (1+2+3+4)
// #include <stdio.h>
// int main()
// {
//     int num, n, sum = 0;

//     printf("Enter the Number: ");
//     scanf("%d", &num);

//     while (n != 0)
//     {
//         n = num % 10;
//         sum += n;
//         num /= 10;
//     }

//     printf("The sum of digits is %d", sum);
//     return 0;
// }

// // Done

// Convert a decimal number to its binary representation.

#include <stdio.h>
int main()
{
    int num, binary[32], i = 0;
    printf("Enter the Number: ");
    scanf("%d", &num);

    printf("The binary representation of this number is: ");
    while (num != 0)
    {
        binary[i] = num % 2;
        num /= 2;
        i++;
    }

    for (int k = 0; k < i; k++)
    {
        printf("%d", binary[i - 1 - k]);
    }

    return 0;
}