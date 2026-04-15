#include <stdio.h>

/*
TOPIC: Pointers & Arrays Relationship
Covers:
- arr == &arr[0]
- arr[i] == *(arr + i)
- Pointer traversal
- Array decay into pointer
- Difference between array and pointer (sizeof)
*/

void printArray(int *p, int size) {
    printf("\nInside function (array decayed to pointer):\n");
    printf("sizeof(p) inside function = %lu (pointer size)\n", sizeof(p));

    for (int i = 0; i < size; i++) {
        printf("p[%d] = %d | *(p+%d) = %d\n",
               i, p[i], i, *(p + i));
    }
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    printf("=== ARRAY vs POINTER ===\n");
    printf("arr == &arr[0]\n");

    int *p = arr;

    printf("\n=== POINTER TRAVERSAL ===\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d | *(arr+%d) = %d\n",
               i, arr[i], i, *(arr + i));
    }

    printf("\n=== POINTER INCREMENT ===\n");
    for (int i = 0; i < 5; i++) {
        printf("*(p + %d) = %d\n", i, *(p + i));
    }

    printf("\n=== SIZE DIFFERENCE ===\n");
    printf("sizeof(arr) = %lu (actual array size)\n", sizeof(arr));
    printf("sizeof(p)   = %lu (pointer size)\n", sizeof(p));

    printArray(arr, 5);

    return 0;
}