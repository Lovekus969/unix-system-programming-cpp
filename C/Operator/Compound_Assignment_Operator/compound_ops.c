#include <stdio.h>

int main() {
    int x = 10;

    printf("Initial value of x = %d\n", x);

    x += 5;   // x = x + 5
    printf("After x += 5, x = %d\n", x);

    x -= 3;   // x = x - 3
    printf("After x -= 3, x = %d\n", x);

    x *= 2;   // x = x * 2
    printf("After x *= 2, x = %d\n", x);

    x /= 4;   // x = x / 4
    printf("After x /= 4, x = %d\n", x);

    x %= 4;   // x = x % 4
    printf("After x %%= 4, x = %d\n", x);

    return 0;
}
