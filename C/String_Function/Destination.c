#include <stdio.h>
#include <string.h>

int main() {
    // Step 1: Make a destination array with enough space
    char dest[20];

    // Step 2: Copy the string literal "Kush" into dest
    strcpy(dest, "Kush");

    // Step 3: Print to confirm the copy worked
    printf("Destination string after strcpy: %s\n", dest);

    // Step 4: Show each character including the null terminator
    printf("Characters in dest:\n");
    for (int i = 0; i < 5; i++) {   // only 5 characters including '\0'
        if (dest[i] == '\0') {
            printf("Index %d = Null Terminator (\\\\0)\n", i);
        } else {
            printf("Index %d = %c\n", i, dest[i]);
        }
    }

    return 0;
}
