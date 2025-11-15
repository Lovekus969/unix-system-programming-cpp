#include <stdio.h>
#include <math.h>   // for isnan(), isinf()

int main() {

    // Division by zero cases in floating point
    // According to IEEE-754:
    // 0.0 / 0.0  → NaN (Not a Number)
    // positive / 0.0 → +infinity
    // negative / 0.0 → -infinity

    double x = 0.0 / 0.0;   // Undefined → NaN
    double y = 5.0 / 0.0;   // Positive number / 0 → +infinity
    double z = -5.0 / 0.0;  // Negative number / 0 → -infinity

    // Printing special floating values
    // %f prints: nan, inf, -inf depending on value
    printf("x = %f\n", x);  // prints: nan
    printf("y = %f\n", y);  // prints: inf
    printf("z = %f\n", z);  // prints: -inf

    // Checking for NaN and Infinity using math.h functions
    if (isnan(x)) {
        printf("x is NaN\n");
    }

    if (isinf(y)) {
        printf("y is Infinity\n");
    }

    if (isinf(z)) {
        printf("z is Infinity (negative)\n");
    }

    return 0;
}
