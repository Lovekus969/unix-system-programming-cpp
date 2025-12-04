#include <stdio.h>

int main() {
    int age = 20;
    int hasPermission = 1;

    if (age >= 18 && hasPermission) {
        printf("Access granted\n");
    } else {
        printf("Access denied\n");
    }

    return 0;
}
