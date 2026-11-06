/*
name : Christine Moraa Orina 
Reg no: CT100/G/30634/26
date : 30/9/2026
Description: calculating volume&surface area of a cylinder
*/

#include <stdio.h>

int main() {
    int age;
    double income;

    // Get customer's age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Get customer's annual income
    printf("Enter your annual income (KES): ");
    scanf("%lf", &income);

    // Check loan eligibility
    if (age >= 21 && income >= 21000) {
        printf("\nCongratulations, you qualify for a loan.\n");
    } else {
        printf("\nUnfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}
