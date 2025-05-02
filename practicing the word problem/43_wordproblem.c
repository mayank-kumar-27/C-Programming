// Develop a program that simulates a voting system where users can vote for a candidate and the program counts the votes.
#include <stdio.h>
int main()
{
    printf("\nWelcome To Mayank's Voting Simulation.\n");
    int vote, count_1 = 0, count_2 = 0, count_3 = 0, count_4 = 0, count_5 = 0, count_6 = 0, pin, retry;
    do
    {
        printf("\nPress 1 To vote For BJP.\nPress 2 To vote For NCP.\nPress 3 To vote For RJD.\nPress 4 To vote For BSP.\nPress 5 To vote For AAM.\nPress 6 for NOTA.\n");
        scanf("%d", &vote);
        switch (vote)
        {
        case 1:
            count_1++;
            printf("Thank You! For your Valuable Vote.\n");
            break;
        case 2:
            count_2++;
            printf("Thank You! For your Valuable Vote.\n");
            break;
        case 3:
            count_3++;
            printf("Thank You! For your Valuable Vote.\n");
            break;
        case 4:
            count_4++;
            printf("Thank You! For your Valuable Vote.\n");
            break;
        case 5:
            count_5++;
            printf("Thank You! For your Valuable Vote.\n");
            break;
        case 6:
            count_6++;
            printf("Thank You! For your Valuable Vote.\n");
            break;
        case 1234:
            printf("\nVoting Session Ended.\n");
            break;
        default:
            printf("Choose a Valid Option Upto 6.\n");
        }
    } while (vote != 1234);
    printf("\nThis Key is Only for Vote Control.\n");
    printf("Enter The Pin First to See The Results of Voting.\n");
    scanf("%d", &pin);
    if (pin == 5678)
    {
        printf("\nVoting Results :\n");
        printf("\nThe Number Of Votes BJP gets is %d\nThe Number Of Votes NCP gets is %d\nThe Number Of Votes RJD gets is %d\nThe Number Of Votes BSP gets is %d\nThe Number Of Votes AAM gets is %d\nThe Number Of NOTA Pressed is %d\n", count_1, count_2, count_3, count_4, count_5, count_6);
    }
    else
    {
        printf("\nThe Pin is Not Correct A Notification is sent To Vote Control Team Head.\n");
        printf("Enter Retry Code First to See the Results.\n");
        scanf("%d", &retry);
        if (retry == 2007)
        {
            printf("\nVoting Results :\n");
            printf("\nThe Number Of Votes BJP gets is %d\nThe Number Of Votes NCP gets is %d\nThe Number Of Votes RJD gets is %d\nThe Number Of Votes BSP gets is %d\nThe Number Of Votes AAM gets is %d\nThe Number Of NOTA Pressed is %d\n", count_1, count_2, count_3, count_4, count_5, count_6);
        }
        else
        {
            printf("Unauthorized access attempt. All voting data is now erased");
            count_1 = count_2 = count_3 = count_4 = count_5 = count_6 = 0;
        }
    }
    return 0;
}