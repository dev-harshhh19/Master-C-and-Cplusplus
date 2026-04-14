// Inline and Normal functions

// Inline: The inline keyword is a hint to the compiler that the function should be expanded in place where it is called, rather than being called through the usual function call mechanism. This can potentially improve performance by eliminating the overhead of a function call, but it is ultimately up to the compiler to decide whether to inline a function or not.

#include <stdio.h>

static inline int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int main () {
    printf("Sum: %d\n", add(5, 3));
    printf("Difference: %d\n", subtract(5, 3));
    return 0;
}