#include<stdio.h>

int main() {
    int matrixA[5], matrixB[5];
    puts("Enter Matrix A: \n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &matrixA[i]);
    }

    puts("Enter Matrix B: \n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &matrixB[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("Addition of [%d] & [%d] is: [%d] \n", matrixA[i], matrixB[i], matrixA[i] + matrixB[i]);
    }
    return 0;
}