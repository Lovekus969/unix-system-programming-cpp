#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("=== INTEGER VIEW (10 blocks of 4 bytes each) ===\n\n");
    
    // Allocate space for 10 integers = 40 bytes
    int *ptr = (int*)malloc(10 * sizeof(int));
    
    if(ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    printf("Base address: %p\n\n", (void*)ptr);
    
    // Initialize each integer with unique values
    for(int i = 0; i < 10; i++) {
        ptr[i] = (i + 1) * 100;  // 100, 200, 300, ... 1000
    }
    
    // Display each integer block with address
    printf("Block#  Address          Name      Value\n");
    printf("------  ---------------  --------  -----\n");
    
    for(int i = 0; i < 10; i++) {
        printf("%6d  %p  ptr[%d]    %d\n", 
               i, (void*)(ptr + i), i, ptr[i]);
    }
    
    // Show the size difference between blocks
    printf("\nAddress progression (each +4 bytes):\n");
    for(int i = 0; i < 3; i++) {  // Show first 3 to see pattern
        printf("ptr + %d = %p\n", i, (void*)(ptr + i));
    }
    printf("...\n");
    printf("ptr + 9 = %p\n", (void*)(ptr + 9));
    
    free(ptr);
    return 0;
}
