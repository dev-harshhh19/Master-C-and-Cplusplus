// Recursion 

// calculate the factorial of a number using recursion

#include <stdio.h>

int factorial ( int n ) {
    if ( n == 0 ) {
        return 1;
    } else {
        return n * factorial ( n - 1 );
    }
}

int main () {
    int number;
    puts("Enter a number to calculate its factorial: ");
    scanf("%d", &number);
    printf("Factorial of %d is %d\n", number, factorial(number));
    return 0;
}