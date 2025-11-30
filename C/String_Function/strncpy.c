#include <stdio.h>
#include <string.h>

int main() {

    char dest1[10];
    char dest2[10];

    // CASE 1: src shorter than n  --> padding with \0
    strncpy(dest1, "Hi", 5);
    printf("CASE 1 (src < n): '%s'\n", dest1);

    printf("dest1 bytes: ");
    for (int i = 0; i < 5; i++) {
        if (dest1[i] == '\0')
            printf("\\0 ");
        else
            printf("%c ", dest1[i]);
    }
    printf("\n\n");

    // CASE 2: src longer than n  --> no null terminator added
    strncpy(dest2, "Kush", 3);
    dest2[3] = '\0';  // we manually add null terminator for safety

    printf("CASE 2 (src >= n): '%s'\n", dest2);

    printf("dest2 bytes: ");
    for (int i = 0; i < 4; i++) {
        if (dest2[i] == '\0')
            printf("\\0 ");
        else
            printf("%c ", dest2[i]);
    }
    printf("\n");

    return 0;
}
