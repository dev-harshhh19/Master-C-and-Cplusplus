/* 

// Pasing 1D array to function
# include <stdio.h>

void print1DArray(int arr[], int size) {    // compiler will treat arr[] as pointer to int: int *arr
    for (int i = 0; i < size; i++) {
        printf("index[%d]: %d\n", i, arr[i]);
    }
}

void modifyArray(int arr[], int size) {
    puts("\n\nModified array in function: ");
    for (int i = 0; i < size; i++) {
        arr[i] = arr[i] * 2;
        printf("index[%d]: %d\n", i, arr[i]);
    }
    puts("================================");
}

int main() {
    int arr[5] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    print1DArray(arr, size);
    return 0;
}
    
*/

// =================================================================


// Passing 2D array to function
#include <stdio.h>

void print2DArray(int arr[3][3], int size){
    puts("\n\nPrint 2D array in function: ");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("index[%d][%d]: %d\n", i, j, arr[i][j]);
        }
    }
}

void modify2DArray(int arr[3][3], int size) {
    puts("\n\nModifies 2D array in function: ");
    for(int i = 0; i < size; i++) {
        for( int j = 0; j < size; j++) {
            arr[i][j] = arr[i][j] * 2;
            printf("index[%d][%d]: %d \n", i, j, arr[i][j]);
        }
    }
}

int main() {
    int arr[3][3];
    int size = sizeof(arr) / sizeof(arr[0]);

    // initialize 2D array
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            arr[i][j] = i + j;
        }
    }
    print2DArray(arr, size);
    modify2DArray(arr, size);
    return 0;
}



// Column size must be specified when passing 2D array to function

//address = base + (i * number_of_columns + j) * sizeof (int)
// without cols, it cannot calculate memory offset

/* 
Explicite pointer form:
void print2DArray( int (*arr)[3], int rows) {
// function body
}




*/