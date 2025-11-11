#include <stdio.h>

int main() {
    int score = 905;
    char initial = 'J';
    
    printf("Variable    Value    Memory Address\n");
    printf("score       %d       %p\n", score, (void*)&score);
  /* What is void*?
void* is a generic pointer type that can point to ANY data type without knowing what it points to.
    */
    printf("initial     %c       %p\n", initial, (void*)&initial);
    
    return 0;
}
