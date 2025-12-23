// Program to simulate a voting system.
#include <stdio.h>

int main() {
    printf("Welcome to Voting Simulation.\n");

    int votes[6] = {0}; // For 6 options
    int choice;

    // Voting loop
    do {
        printf("\nCandidates:\n");
        printf("1. Candidate A\n");
        printf("2. Candidate B\n");
        printf("3. Candidate C\n");
        printf("4. Candidate D\n");
        printf("5. Candidate E\n");
        printf("6. NOTA\n");
        printf("Enter vote (1-6) or 0 to end: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 6) {
            votes[choice - 1]++;
            printf("Thank you for voting!\n");
        } else if (choice != 0) {
            printf("Invalid choice.\n");
        }
    } while (choice != 0);

    // Display results
    printf("\nVoting Results:\n");
    printf("Candidate A: %d\n", votes[0]);
    printf("Candidate B: %d\n", votes[1]);
    printf("Candidate C: %d\n", votes[2]);
    printf("Candidate D: %d\n", votes[3]);
    printf("Candidate E: %d\n", votes[4]);
    printf("NOTA: %d\n", votes[5]);

    return 0;
}