#include <stdio.h>

// Structure definition
struct Card {
    const char *face;
    const char *suit;
};

int main() {

    // Declare structure variables (objects)
    struct Card card1;
    struct Card card2;

    // Assign values to members using dot operator
    card1.face = "Ace";
    card1.suit = "Spades";

    card2.face = "King";
    card2.suit = "Hearts";

    // Print structure data
    printf("Card 1: %s of %s\n", card1.face, card1.suit);
    printf("Card 2: %s of %s\n", card2.face, card2.suit);

    return 0;
}
