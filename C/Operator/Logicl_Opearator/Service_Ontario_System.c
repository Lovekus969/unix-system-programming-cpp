#include <stdio.h>

int main() {
    int age;
    int hasDrivingLicense, hasPAN, hasPassport;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Do you have a Driving License? (1=Yes, 0=No): ");
    scanf("%d", &hasDrivingLicense);

    printf("Do you have a PAN card? (1=Yes, 0=No): ");
    scanf("%d", &hasPAN);

    printf("Do you have a Passport? (1=Yes, 0=No): ");
    scanf("%d", &hasPassport);

    // Voting eligibility check
    if (age >= 18 && (hasDrivingLicense || hasPAN || hasPassport)) {
        printf("You are eligible to vote according to ServiceOntario rules.\n");
    } else {
        printf("You are NOT eligible to vote.\n");
    }

    return 0;
}
