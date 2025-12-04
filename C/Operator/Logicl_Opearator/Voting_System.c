#include <stdio.h>

int main() {
    int age;
    int hasDrivingLicense;
    int hasPAN;

    // Input from user
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Do you have a Driving License? (1 = Yes, 0 = No): ");
    scanf("%d", &hasDrivingLicense);

    printf("Do you have a PAN card? (1 = Yes, 0 = No): ");
    scanf("%d", &hasPAN);

    // Voting eligibility check
    if (age >= 18 && (hasDrivingLicense || hasPAN)) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are NOT eligible to vote.\n");
    }

    return 0;
}
