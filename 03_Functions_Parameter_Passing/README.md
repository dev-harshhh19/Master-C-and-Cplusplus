# 03. Functions & Parameters passing

## 1. Call by value & Call by reference [Code Snippets](./callByValueAndCallByReference.c)

### 1.1 Call by Value:
- Call by value: A copy of the variable is passed to the function. Changes made to the parameter inside the function do not affect the original variable outside the function.

### snippet
```c
void callByValue(int x, int y) {
    // function body
}

void callByReference(int *x, int *y) {
    // function body
}

```
---

### 1.2 Call by reference
- Call by reference: A reference to the variable is passed to the function. Changes made to the parameter inside the function affect the original variable outside the function.

### snippet
```c
void callByReference(int *x, int *y) {
    // function body
}

int main() {
    int a = 5, b = 10;
    callByReference(&a, &b);
    // a and b will be modified after the function call
    return 0;
}

```
---
---

## 2. Scope, lifetime, static keyword

### 2.1 Scope:
- Scope refers to the region of the program where a variable is defined and can be accessed.
    - Local Scope: Variables declared inside a function or block are local to that function or block and cannot be accessed outside of it.
    - Global Scope: Variables declared outside of all functions are global and can be accessed from anywhere in the program.

### snippet
```c
int globalVar = 20; // Global variable with global scope
void exampleFunction() {
    int localVar = 10; // Local variable with local scope
    // function body
}
```
---
### 2.2 Lifetime: 
- Lifetime refers to the duration for which a variable exists in memory during the execution of a program.
    - Local variables have a lifetime that lasts until the function or block in which they are declared finishes executing.
    - Global variables have a lifetime that lasts for the entire duration of the program.

---
### 2.3 Static keyword:
- The `static` keyword in C is used to declare variables that retain their value b/w function calls. A static variable is initialized only once and retains its value even after the function in which it is declared has finished executing.

### snippet
```c
void staticExample() {
    static int count = 0; // This variable retains its value between function calls
    count++;
    printf("Count: %d\n", count);
}
```
---
---

## 3. Inline vs normal functions (conceptual)

- **Inline functions** are a feature in C that allows the compiler to replace a function call with the actual code of the function. This can improve performance by eliminating the overhead of a function call, especially for small functions. However, it is important to note that the decision to inline a function is ultimately made by the compiler, and not all functions will be inlined even if they are declared as inline.

- **Normal functions** are the standard functions in C that are called in the usual way. They may involve some overhead due to the function call, especially if they are small and called frequently. Normal functions are not guaranteed to be inlined by the compiler, and their performance may vary based on the context in which they are used.

---

## 4. Recursion (conceptual)
- Recursion is a programming technique where a function calls itself in order to solve a problem. A recursive function typically has a base case that stops the recursion and a recursive case that breaks the problem into smaller subproblems. Recursion can simplify code and make it easier to read, but it can also lead to performance issues if not used carefully, such as stack overflow due to too many recursive calls. It is important to ensure that the base case is reached in a reasonable number of steps to avoid infinite recursion.

### snippet
```c
int factorial(int n) {
    if (n == 0) {
        return 1; // Base case
    } else {
        return n * factorial(n - 1); // Recursive case
    }
}
```

---
