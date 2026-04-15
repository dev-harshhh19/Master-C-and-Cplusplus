#include <stdio.h>

/*
TOPIC: Passing Pointers to Functions
Covers:
- Modify variable via pointer
- Swap using pointers
- Return multiple values using pointer parameters
- Pass-by-value vs pass-by-address
*/

void modify(int *p) {
    printf("\n[modify] Before: %d\n", *p);
    *p = 100;
    printf("[modify] After: %d\n", *p);
}

void swap(int *a, int *b) {
    printf("\n[swap] Before: a=%d b=%d\n", *a, *b);

    int temp = *a;
    *a = *b;
    *b = temp;

    printf("[swap] After: a=%d b=%d\n", *a, *b);
}

void compute(int a, int b, int *sum, int *product) {
    *sum = a + b;
    *product = a * b;
}

int main() {
    int x = 10;

    printf("=== MODIFY USING POINTER ===\n");
    printf("Before: x = %d\n", x);
    modify(&x);
    printf("After: x = %d\n", x);

    printf("\n=== SWAP USING POINTERS ===\n");
    int a = 10, b = 20;
    printf("Before swap: a=%d b=%d\n", a, b);
    swap(&a, &b);
    printf("After swap: a=%d b=%d\n", a, b);

    printf("\n=== MULTIPLE RETURN VALUES ===\n");
    int s, p;
    compute(5, 10, &s, &p);
    printf("Sum = %d\n", s);
    printf("Product = %d\n", p);

    return 0;
}