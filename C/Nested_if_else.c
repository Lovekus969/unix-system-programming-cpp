#include <stdio.h>

int main() {
    int a, b, c;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Nested if-else to find the largest number
    if (a > b) {
        if (a > c) {
            printf("a = %d is the largest\n", a);
        } else {
            printf("c = %d is the largest\n", c);
        }
    } else {
        if (b > c) {
            printf("b = %d is the largest\n", b);
        } else {
            printf("c = %d is the largest\n", c);
        }
    }

    return 0;
}
