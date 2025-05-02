// Write a program that simulates a basic ATM where users can check their balance, deposit, and withdraw money.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    printf("\nWelcome To Mayank's ATM Simulation.\n");
    int card, start = 0, pin, choice, pass, Amount, withd, option, pass2;
    srand(time(0));
    int money = (rand() % 2000) + 1000;
    printf("\nPlease Insert Your Card and Press 1.\n");
    scanf("%d", &start);
    if (start != 1)
    {
        printf("\nPlease! Try Again and Press 1.\n");
        return 1;
    }
    else
    {
        printf("\nWe Have Successfully Scanned Your Card Please Enter your Pin to Confirm this Card Belongs To You.\n");
        scanf("%d", &pin);
        printf("\nThank You! For confirmation.\n");
        do
        {
            printf("\nPress 1 To Check Your Balance.\nPress 2 To Deposit.\nPress 3 To Withdraw Money.\nPress 4 For bankings!\nPress 5 To EXIT the Simulation.\n");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                printf("\nEnter Your Pin To Check.\n");
                scanf("%d", &pass);
                if (pin == pass)
                {
                    printf("You Have %d Rupees in Your Account.\n", money);
                }
                else
                {
                    printf("Wrong Pin Please Try Again.");
                    return 1;
                }
                break;
            case 2:
                printf("\nEnter Your Pin To Confirm.\n");
                scanf("%d", &pass);
                if (pin == pass)
                {
                    printf("Enter The Amount Of Money You want To Deposit.\n");
                    scanf("%d", &Amount);
                    money = money + Amount;
                    printf("\nThank you For Depositing Your Valuable Money, Now You have %d Rupees in Your Account.\n", money);
                }
                else
                {
                    printf("Wrong Pin Please Try Again.");
                    return 1;
                }
                break;
            case 3:
                printf("\nEnter Your Pin To Confirm.\n");
                scanf("%d", &pass);
                if (pin == pass)
                {
                    printf("Enter the Amount of Money You want to Withdraw.\n");
                    scanf("%d", &withd);
                    if (money >= withd)
                    {
                        printf("\nPlease Collect Your Money and Card\n");
                        money = money - withd;
                        printf("Now You have %d Rupees Remaining in your Bank.\n", money);
                    }
                    else
                    {
                        printf("\nInsufficient Balance, Please Try Again.\n");
                    }
                }
                else
                {
                    printf("Wrong Pin Please Try Again.");
                    return 1;
                }
                break;
            case 4:
                do
                {
                    printf("\nEnter 1 To Change Your Pin.\nEnter 2 To Know About This ATM.\nEnter 3 To Back to main Menu.\n");
                    scanf("%d", &option);
                    switch (option)
                    {
                    case 1:
                        printf("\nEnter Your Old Pin\n");
                        scanf("%d", &pass2);
                        if (pass2 == pin)
                        {
                            printf("\nEnter Your new Pin.\n");
                            scanf("%d", &pin);
                            printf("\nYou Have Successfully Changed You Pin.\n");
                        }
                        else
                        {
                            printf("Wrong Pin Please Try Again.");
                            return 1;
                        }
                        break;
                    case 2:
                        printf("\nThis ATM Simulation is Made By Mayank Kumar,\nA First Year Student in BTech Computer Science at UPES Dehradun,\nHe is From Purnia, Bihar (854301) and Has a Keen Interest in Coding,\nTHANK YOU!\n");
                        break;
                    case 3:
                        printf("\nYou Have Successfully Returned to Main Menu, Now\n");
                        break;
                    default:
                        printf("Please Enter a Valid Option.\n");
                    }
                } while (option != 3);
                break;
            case 5:
                printf("\nThank You For Using this Simulation and Don't Forget to Collect Your Card, Have a Good Day.\n");
                break;
            default:
                printf("Please Enter a Valid Option.\n");
            }
        } while (choice != 5);
    }
    return 0;
}