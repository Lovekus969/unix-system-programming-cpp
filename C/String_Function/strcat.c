#include <stdio.h>
#include <string.h>

int main() {

    char dest[30] = "Hello";
    char src[] = " World";

    printf("Before strcat:\n");
    printf("dest = '%s'\n", dest);
    printf("src  = '%s'\n\n", src);

    // Append src to dest
    strcat(dest, src);

    printf("After strcat:\n");
    printf("dest = '%s'\n", dest);

    // Show internal memory layout
    printf("\nCharacters inside dest:\n");
    for (int i = 0; i < 12; i++) {  // enough to show "Hello World\0"
        if (dest[i] == '\0')
            printf("Index %d = \\0\n", i);
        else
            printf("Index %d = %c\n", i, dest[i]);
    }

    return 0;
}
