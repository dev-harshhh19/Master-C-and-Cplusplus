// scope, lifetime, and static keyword

// Scope: The region of the program where a variable is defined and can be accessed.
// Lifetime: The duration for which a variable exists in memory during program execution.
// Static keyword: It is used to declare variables that retain their value b/w function calls and have a lifetime that extends across the entire program execution.

#include <stdio.h>

void staticFunction() {
    static int count = 0; // Static variable retains its value b/w function calls
    count++;
    printf("Counter: %d\n", count);
}

int main () {
    staticFunction(); // Output: Counter: 1
    staticFunction(); // Output: Counter: 2
    staticFunction(); // Output: Counter: 3

    return 0;
}