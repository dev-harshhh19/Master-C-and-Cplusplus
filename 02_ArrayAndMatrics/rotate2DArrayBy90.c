#include <stdio.h>
int main()
{
    int matrixA[3][3];
    puts("Enter values for matrix: ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matrixA[i][j]);
        }
    }

    puts("Original Matrix: ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %d ", matrixA[i][j]);
        }
        puts("");
    }

    puts("Rotated Matrix (90° clockwise):");
    for (int j = 0; j < 3; j++){
        for (int i = 2; i >= 0; i--){
            printf(" %d ", matrixA[i][j]);
        }puts("");
    }
    return 0;
}