#include <stdio.h>
#include <stdlib.h>

int main() {
    int *int_ptr = malloc(sizeof(int));
    char *char_ptr = malloc(sizeof(char));
    double *double_ptr = malloc(sizeof(double));
    
    printf("=== Demonstrating void* casting ===\n\n");
    
    // Without casting - might work but gives warnings
    printf("Without casting (might warn):\n");
    printf("int_ptr:    %p\n", int_ptr);     // Warning expected
    printf("char_ptr:   %p\n", char_ptr);    // Warning expected  
    printf("double_ptr: %p\n", double_ptr);  // Warning expected
    
    printf("\nWith proper (void*) casting:\n");
    printf("int_ptr:    %p\n", (void*)int_ptr);     // No warning
    printf("char_ptr:   %p\n", (void*)char_ptr);    // No warning
    printf("double_ptr: %p\n", (void*)double_ptr);  // No warning
    
    // Prove they're all the same addresses
    printf("\nSame addresses, different types:\n");
    printf("int_ptr as void*:    %p\n", (void*)int_ptr);
    printf("char_ptr as void*:   %p\n", (void*)char_ptr); 
    printf("double_ptr as void*: %p\n", (void*)double_ptr);
    
    free(int_ptr);
    free(char_ptr);
    free(double_ptr);
    
    return 0;
}
