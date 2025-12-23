// Enum switch
#include <stdio.h>

enum Days {Mon, Tue, Wed, Thu, Fri, Sat, Sun};

int main() {
    enum Days day;
    printf("Enter day (0-6): ");
    scanf("%d", &day);
    switch (day) {
        case Mon: printf("Monday\n"); break;
        case Tue: printf("Tuesday\n"); break;
        case Wed: printf("Wednesday\n"); break;
        case Thu: printf("Thursday\n"); break;
        case Fri: printf("Friday\n"); break;
        case Sat: printf("Saturday\n"); break;
        case Sun: printf("Sunday\n"); break;
        default: printf("Invalid\n");
    }
    return 0;
}