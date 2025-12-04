#include <stdio.h>

int main() {

    int a = 5, b = 10, c = 5;

    printf("FAANG STYLE OPERATOR TEST\n\n");

    // 1. Equality operator ==
    printf("1. (a == c) → (5 == 5) = %d\n", (a == c));   // 1

    // 2. Equality operator ==
    printf("2. (a == b) → (5 == 10) = %d\n", (a == b));  // 0

    // 3. Not equal operator !=
    printf("3. (b != c) → (10 != 5) = %d\n", (b != c));  // 1

    // 4. Mixing relational + equality
    // precedence: < , > , <= , >=  COME BEFORE == , !=
    printf("4. (a < b == 1) → (5 < 10 == 1)\n");
    printf("   Step1: (5 < 10) → 1\n");
    printf("   Step2: 1 == 1 → %d\n\n", (a < b == 1));

    // 5. Another precedence example
    printf("5. (a + b == c + 10) → (5 + 10 == 5 + 10) = %d\n",
           (a + b == c + 10));  // 1

    // 6. More tricky: != with arithmetic
    printf("6. (a * 2 != b) → (5 * 2 != 10) = %d\n", (a * 2 != b)); // 0

    // 7. Combined chained check
    printf("7. (a == c && b != c) = %d\n", (a == c && b != c)); // 1

    // 8. Equality mixed with OR
    printf("8. (a == 10 || c == 5) = %d\n", (a == 10 || c == 5)); // 1

    return 0;
}
