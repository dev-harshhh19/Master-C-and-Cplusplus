#include <stdio.h>

// 1. Basic pointer usage
void pointerBasics() {
    int a = 10;
    int *p = &a;

    printf("---- Pointer Basics ----\n");
    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", (void*)&a);
    printf("Value of p (address stored): %p\n", (void*)p);
    printf("Value pointed by p (*p): %d\n\n", *p);
}

// 2. Proper use cases of '*'
void useCase() {
    printf("---- Use Cases of * ----\n");

    int a = 10;
    int *p = &a;   // Declaration + initialization

    // Dereferencing (read)
    printf("Before change: a = %d\n", a);

    // Dereferencing (write)
    *p = 20;

    printf("After change using pointer: a = %d\n\n", a);
}

// 3. Memory model demonstration
void memoryModel() {
    printf("---- Memory Model ----\n");

    int a = 10;
    int *p = &a;

    printf("a is stored at address: %p\n", (void*)&a);
    printf("p stores address: %p\n", (void*)p);
    printf("*p gives value at that address: %d\n\n", *p);
}

// 4. Pointer arithmetic
void pointerArithmetic() {
    printf("---- Pointer Arithmetic ----\n");

    int arr[] = {10, 20, 30, 40};
    int *p = arr;  // same as &arr[0]

    printf("Base address: %p\n", (void*)p);

    for (int i = 0; i < 4; i++) {
        printf("Address of arr[%d]: %p, Value: %d\n",
               i, (void*)(p + i), *(p + i));
    }

    printf("\nIncrement pointer:\n");
    p++; // moves by sizeof(int)
    printf("Now p points to: %p, Value: %d\n\n", (void*)p, *p);
}

int main() {
    pointerBasics();
    useCase();
    memoryModel();
    pointerArithmetic();
    return 0;
}