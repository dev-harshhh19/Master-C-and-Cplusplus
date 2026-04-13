// 2D Array in C

// a 2D array is an array of arrays. It can be visualized as a table with rows and columns. Each element in a 2D array is accessed using two indices: one for the row and one for the column.


// !!! important NOTE: Arrays should be always initialized before use, and use square brackets [] to declare and access elements of an array. Curly braces {} are used for initializing arrays, not for accessing them. 


#include <stdio.h>
int main() {

    int rows = 3, cols = 4;
    
    // maunally initializing a 2D array
    int arr[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    // printing the 2D array
    printf("2D Array: \n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    puts("\n================================\n");


    // taking input for a 2D array from the user
    int arr2[3][4];
    printf("Enter elements for the second 2D array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }

    // printing the second 2D array
    printf("Second 2D Array: \n");
    for ( int i = 0; i < rows; i++ ) {
         for (int j = 0; j < cols; j++) {
            printf("index [%d][%d]: %d\n", i , j , arr2[i][j]);
         }
    }


    return 0;
}


/* 

## Address table for 2D Array (assume 1000)

| Index | Address |
|-------|---------|
| [0][0] | 1000    |
| [0][1] | 1004    |
| [0][2] | 1008    |
| ...... | .....   |
| [2][3] | 1044    |
|--------|---------|

----------------------------------------------------------

## Formula for 2D Array address

address of add[i][j] = base + ((i * number_of_colums) + j) * sizeof(int)

---
Example:
cols = 4
base + ((2 * 4) + 3) * sizeof(int)
base + (11 * 4)
base + 44 bytes


a[i][j] => *(*(a + i) + j)

- `arr`                 => pointer to first row
- `arr + i`             => pointer to the i-th row
- `*(arr + i)`          => the i-th row (which is an array)
- `*(*(arr + i) + j)`   => the j-th element in the i-th row

*/

