// Condition Statement in C

// 1. for loop
// for(initialization; condition; increment/decrement) {
//     // code to be executed
// }

// 2. while loop
// while(condition) {
//     // code to be executed
// }

// 3. do-while loop
// do {
//     // code to be executed
// } while(condition);

// 4. if statement
// if(condition) {
//     // code to be executed if condition is true
// }

// 5. if-else statement
// if(condition) {
//     // code to be executed if condition is true
// } else {
//     // code to be executed if condition is false
// }

// 6. switch statement
// switch(expression) {
//     case constant1:
//         // code to be executed if expression equals constant1
//         break;
//     case constant2:
//         // code to be executed if expression equals constant2
//         break;
//     ...
//     default:
//         // code to be executed if expression doesn't match any constant
// }

#include <stdio.h>
#include <stdlib.h>

void forLoop() {
    int value = 5;
    for(int i = 1; i <= value; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

void whileLoop() {
    int value = 5;
    int i = 1;
    while(i <= value) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
}

void doWhileLoop() {
    int value = 5;
    int i = 1;
    do {
        printf("%d ", i);
        i++;
    } while(i <= value);
    printf("\n");
}

void ifStatement() {
    int value = 6;
    if(value <= 10) {
        printf("Value is less than or equal to 10\n");
    }
}

void ifElseStatement() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if(number % 2 == 0) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }
}

void elseIfStatement() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if(number > 0) {
        printf("The number is positive.\n");
    } else if(number < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }
}

void switchStatement() {
    int days;
    printf("Enter a number between 1 and 3: ");
    scanf("%d", &days);

    switch(days) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        default:
            printf("Invalid input\n");
    }
}

int main() {
    forLoop();
    whileLoop();
    doWhileLoop();
    ifStatement();
    ifElseStatement();
    elseIfStatement();
    switchStatement();

    return 0;
}