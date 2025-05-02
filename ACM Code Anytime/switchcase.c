// write a code to print 7 days of a week by entering 1 to 7. 
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter 1 to 7 :");
    scanf("%c",&ch);
    switch(ch)
    {
        case'1':
        printf("Monday");
        break;

        case'2':
        printf("Tuesday");
        break;

        case'3':
        printf("Wednesday");
        break;

        case'4':
        printf("Thursday");
        break;

        case '5':
        printf("Friday");
        break;

        case '6':
        printf("Saturday");
        break;

        case '7':
        printf("Sunday");
        break;

        default:
        printf("Enter a Valid Input");

    }
    return 0;


}
