#include <stdio.h>

int main() {
    int a, b, c, largest;

    // Assignment statement: storing input values
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Nested if-else structure
    if (a > b) {
        if (a > c) {
            largest = a; // assignment statement
        } else {
            largest = c; // assignment statement
        }
    } else {
        if (b > c) {
            largest = b; // assignment statement
        } else {
            largest = c; // assignment statement
        }
    }

    // Output
    printf("The largest number is: %d\n", largest);

    return 0;
}
