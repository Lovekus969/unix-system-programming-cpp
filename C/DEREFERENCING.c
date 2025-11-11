#include <stdio.h>

int main() {
    int number = 42;
    int* ptr = &number;  // ptr stores the address of number
    
    printf("=== BASIC DEREFERENCING ===\n");
    printf("number = %d (direct access)\n", number);
    printf("*ptr = %d (indirect access - DEREFERENCING)\n", *ptr);
    
    return 0;
}
