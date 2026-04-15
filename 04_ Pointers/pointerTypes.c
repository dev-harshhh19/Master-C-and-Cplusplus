#include <stdio.h>

/*
TOPIC: Pointer Types
Covers:
- int* (typed access, multi-byte interpretation)
- char* (byte-level access)
- void* (generic pointer, no dereference without casting)
- Pointer arithmetic difference across types
*/

int main() {
    int x = 65;   // ASCII 'A' in lowest byte

    printf("=== int* POINTER ===\n");
    int *ip = &x;
    printf("Value using int*: %d\n", *ip);

    printf("\n=== char* POINTER ===\n");
    char *cp = (char*)&x;

    printf("First byte using char*: %d (ASCII)\n", *cp);

    printf("\nByte-wise view of int using char*:\n");
    for (int i = 0; i < (int)sizeof(int); i++) {
        printf("Byte %d: %d\n", i, *(cp + i));
    }

    printf("\n=== void* POINTER ===\n");
    void *vp = &x;

    // printf("%d", *vp); // ERROR: void* cannot be dereferenced without casting

    printf("Using void* requires casting:\n");
    printf("Value: %d\n", *(int*)vp);

    printf("\n=== POINTER ARITHMETIC DIFFERENCE ===\n");
    printf("ip + 1 moves by sizeof(int)\n");
    printf("cp + 1 moves by 1 byte\n");

    return 0;
}