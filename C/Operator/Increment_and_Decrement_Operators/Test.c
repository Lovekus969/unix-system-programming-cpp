#include <stdio.h>

int main() {
    int a = 5, b = 5;

    printf("Pre-increment ++a: %d\n", ++a);  // 6
    printf("Post-increment b++: %d\n", b++); // 5
    printf("Value of b after post-increment: %d\n", b); // 6

    int x = 10, y = 10;

    printf("Pre-decrement --x: %d\n", --x);  // 9
    printf("Post-decrement y--: %d\n", y--); // 10
    printf("Value of y after post-decrement: %d\n", y); // 9

    return 0;
}
