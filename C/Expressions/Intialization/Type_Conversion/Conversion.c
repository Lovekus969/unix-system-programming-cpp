#include <stdio.h>

int main() {

    int a = 5, b = 2;

    // 1. Implicit Type Conversion (Automatic)
    float implicit1 = a + b;       // int + int -> int -> float assigned
    float implicit2 = a / b;       // int / int -> int division

    // 2. Explicit Type Conversion (Casting)
    float explicit1 = (float)a / b;     // cast before division
    float explicit2 = (float)(a + b);   // cast whole expression

    // 3. Mixed type expression promotes automatically
    float mix = a + 2.5;         // int becomes float

    printf("=== TYPE CONVERSION EXAMPLES ===\n\n");

    printf("1. Implicit Conversion (a + b)        = %.2f\n", implicit1);
    printf("2. Implicit Conversion (a / b)        = %.2f\n", implicit2);

    printf("\n3. Explicit Casting (float)a / b      = %.2f\n", explicit1);
    printf("4. Explicit Casting (float)(a + b)    = %.2f\n", explicit2);

    printf("\n5. Mixed Expression (a + 2.5)         = %.2f\n", mix);

    return 0;
}
