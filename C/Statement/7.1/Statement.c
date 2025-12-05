#include <stdio.h>

int main() {

    // Expression Statement
    int age = 19;

    // Selection Statement
    if (age >= 18) {
        printf("You are eligible.\n");
    } else {
        printf("Not eligible.\n");
    }

    // Iteration Statement
    printf("Counting: ");
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // Jump Statement
    for (int j = 0; j < 5; j++) {
        if (j == 3) {
            break;  // jump out of loop
        }
        printf("j = %d\n", j);
    }

    // Compound Statement
    {
        int x = 100;
        printf("Inside block, x = %d\n", x);
    }

    return 0; // jump statement
}
