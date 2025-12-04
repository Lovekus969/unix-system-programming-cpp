#include <stdio.h>

int main() {
    float x = 10.5;

    printf("Initial float value = %.2f\n", x);

    x += 2.5;
    printf("After x += 2.5, x = %.2f\n", x);

    x *= 1.5;
    printf("After x *= 1.5, x = %.2f\n", x);

    x /= 2.0;
    printf("After x /= 2.0, x = %.2f\n", x);

    return 0;
}
