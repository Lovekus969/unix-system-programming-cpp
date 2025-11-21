#include <stdio.h>

struct Card {
    const char *face;
    const char *suit;
};

int main() {

    // 1. Zero initialize
    struct Card c1 = {};  

    // 2. Assign members
    c1.face = "Queen";
    c1.suit = "Diamonds";

    // 3. Take address of struct
    struct Card *ptr = &c1;

    // 4. Use arrow operator
    printf("Using pointer: %s of %s\n", ptr->face, ptr->suit);

    // 5. Copy struct (shallow copy)
    struct Card c2;
    c2 = c1;  // Copies pointers

    // 6. Size of structure
    printf("Size of struct: %zu bytes\n", sizeof(struct Card));

    return 0;
}
