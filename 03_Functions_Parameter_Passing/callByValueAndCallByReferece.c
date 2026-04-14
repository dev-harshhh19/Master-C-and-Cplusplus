/* // Call by Value
// In call by value, a copy of the actual parameter is passed to the function.
// Changes made to the parameter inside the function do not affect the original variable.

#include <stdio.h>

void callByValue(int x, int y) {
    x += 10; // modifying the copy does not affect the original / actual parameter
    y += 20; 
    printf("Inside callByValue: x = %d, y = %d\n", x, y);
}

int main() {
    int a = 5, b = 10;
    printf("Before callByValue: a = %d, b = %d\n", a, b);
    callByValue(a, b);
    printf("After callByValue: a = %d, b = %d\n", a, b); // a and b remain unchanged
    return 0;
}

 */


// Call by Reference
// In call by reference, the address of the actual parameter is passed to the function.
// Changes made to the parameter inside the function affect the original variable.

#include <stdio.h>

void callByReference ( int *x, int *y) {
    *x += 10; // modifying the value at the address affects the original / actual parameter
    *y += 20; 
    printf("Inside callByReference: x = %d, y = %d\n", *x, *y);
}

int main () {
    int a = 5, b = 10;
    printf("Before callByReference: a: %d, b: %d\n", a, b);
    callByReference(&a, &b); // passing the address of a and b
    printf("After callByReference: a: %d, b: %d\n", a, b); // a and b are modified
    return 0;
}