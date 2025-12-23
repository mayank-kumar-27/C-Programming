// Compound interest
#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, compoundInterest;
    int n;
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter annual interest rate: ");
    scanf("%f", &rate);
    printf("Enter time in years: ");
    scanf("%f", &time);
    printf("Enter number of times interest is compounded per year: ");
    scanf("%d", &n);
    compoundInterest = principal * pow((1 + rate / (100 * n)), n * time) - principal;
    printf("Compound Interest: %.2f\n", compoundInterest);
    return 0;
}