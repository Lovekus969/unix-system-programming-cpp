#include <stdio.h>
#include <float.h>  // for FLT_MAX, DBL_MAX, FLT_MIN, DBL_MIN

int main() {
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n\n", sizeof(double));

    printf("Float range:\n");
    printf("  Minimum value: %e\n", FLT_MIN);
    printf("  Maximum value: %e\n\n", FLT_MAX);

    printf("Double range:\n");
    printf("  Minimum value: %e\n", DBL_MIN);
    printf("  Maximum value: %e\n", DBL_MAX);

    return 0;
}
