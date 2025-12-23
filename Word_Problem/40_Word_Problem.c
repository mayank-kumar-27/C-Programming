// Program to simulate a simple banking system with deposit, withdraw, check balance.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf("Welcome to ATM Simulation.\n");

    int pin, choice, amount, balance;
    srand(time(0));
    balance = (rand() % 2000) + 1000; // Random initial balance

    // Insert card
    printf("Please insert your card and press 1: ");
    scanf("%d", &choice);
    if (choice != 1) {
        printf("Invalid input. Exiting.\n");
        return 1;
    }

    // Enter PIN
    printf("Enter your PIN: ");
    scanf("%d", &pin);
    printf("PIN accepted.\n");

    // Main menu
    do {
        printf("\nMenu:\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int enteredPin;
                printf("Enter PIN: ");
                scanf("%d", &enteredPin);
                if (enteredPin == pin) {
                    printf("Your balance: %d\n", balance);
                } else {
                    printf("Wrong PIN.\n");
                }
                break;
            }
            case 2: {
                int enteredPin;
                printf("Enter PIN: ");
                scanf("%d", &enteredPin);
                if (enteredPin == pin) {
                    printf("Enter amount to deposit: ");
                    scanf("%d", &amount);
                    if (amount > 0) {
                        balance += amount;
                        printf("Deposited %d. New balance: %d\n", amount, balance);
                    } else {
                        printf("Invalid amount.\n");
                    }
                } else {
                    printf("Wrong PIN.\n");
                }
                break;
            }
            case 3: {
                int enteredPin;
                printf("Enter PIN: ");
                scanf("%d", &enteredPin);
                if (enteredPin == pin) {
                    printf("Enter amount to withdraw: ");
                    scanf("%d", &amount);
                    if (amount > 0 && amount <= balance) {
                        balance -= amount;
                        printf("Withdrew %d. New balance: %d\n", amount, balance);
                    } else {
                        printf("Invalid amount or insufficient balance.\n");
                    }
                } else {
                    printf("Wrong PIN.\n");
                }
                break;
            }
            case 4:
                printf("Thank you for using the ATM. Goodbye!\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 4);

    return 0;
}