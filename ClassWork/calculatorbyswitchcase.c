#include <stdio.h>
int main()
{
    char ch;
    int a, b;
    do
    {
        printf("Press 1 for Addition\nPress 2 for Substraction\nPress 3 for Multiplication\nPress 4 for Division\nPress | to Exit\nNow Enter Please :");
        scanf(" %c", &ch);
        switch (ch)
        {
        case '1':
            printf("Enter Number A :");
            scanf("%d", &a);
            printf("Enter Number B :");
            scanf("%d", &b);
            printf("Addition is %d\n", a + b);
            break;
        case '2':
            printf("Enter Number A :");
            scanf("%d", &a);
            printf("Enter Number B :");
            scanf("%d", &b);
            printf("Substraction is %d\n", a - b);
            break;
        case '3':
            printf("Enter Number A :");
            scanf("%d", &a);
            printf("Enter Number B :");
            scanf("%d", &b);
            printf("Multiplication is %d\n", a * b);
            break;
        case '4':
            printf("Enter Number A :");
            scanf("%d", &a);
            printf("Enter Number B :");
            scanf("%d", &b);
            printf("Division is %d\n", a / b);
            break;
        case '|':
            printf("You have Successfully exited the Programm Thankyou!");
            break;
        default:
            printf("Enter A Valid Input\n");
            break;
        }
    } while (ch != '|');

    return 0;
}