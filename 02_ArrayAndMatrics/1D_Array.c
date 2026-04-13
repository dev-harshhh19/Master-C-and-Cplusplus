// 1D Array in C 

/*
What is array?
Array is a collection of similar data types that are stored in contiguous memory locations. It alloes us to store multiple values of the same type in a single variable, instead of declaring separate variables for each value.
*/

// Syntax of array declaration
/*
data_type array_name[array_size];
*/

#include <stdio.h>
int main() {
    // declaring an array of integers with size of 5
    int arr[5];     // array declaration
    // initializing the array with values
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    // accessing the elements of the array
    printf("Printing the elements of the array:\n");
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {   // sizeof(arr) gives the total size of the array in bytes, and sizeof(arr[0]) gives the size of a single element in bytes. Dividing these two gives the number of elements in the array.
        printf("%d ", arr[i]);
    }

    int userInput[10];
    puts("\nEnter 10 integers:");    // puts() is the print function in C & C++ that is used to print a string followed by a newline character. It is similar to printf() but is more efficient for printing simple strings without formatting.


    for (int i = 0; i < 10; i++) {
        scanf("%d", &userInput[i]);
    }

    puts("You entered:");
    for (int i = 0; i < 10; i++) {
        printf("index %d: %d\n", i, userInput[i]);
    }

    return 0;
}

/* 

Notes:
1. Array index starts from 0 and goes up to array_size - 1.
2. The size of the array must be a positive integer and should be known at compile time.
3. Arrays can be initialized at the time of declaration as well, like this: 
int arr[5] = {10, 20, 30, 40, 50};

*/ 


// memory layout of array
/*

int arr[5] = {10, 20, 30, 40, 50};

let's assumes `int` take 4 bits & base address of the array is 1000. 

index   value   address
0       10      1000
1       20      1004
2       30      1008
3       40      1012
4       50      1016


key formula to calculate the address of any element in the array is: 

`address of arr[i] = base address + ( i * sizeof(int)) ` 

lets chhose: `arr[3] = *(arr + 3) = 40`



## what `arr` actucally is?

arr => pointer of first element of the array => &arr[0] => 1000

example:

printf("%p", arr);    // &arr[0] => 1000"
printf("%p", &arr[0]); // 1000

printf("%d", *arr);    // 10 => value at address 1000
printf("%d", *(arr + 1)); // 20 => value at address 1004
...

!!! IMPORTANT NOTE:

sizeof(arr)    // total size of the array in bytes => 5 * 4 = 20 bytes
sizeof(&arr)    // size of the pointer (typically 8 bytes on a 64-bit system)


*/



