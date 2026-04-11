// DataTypes in C

#include "stdio.h"
#include "stdbool.h"

int main()
{

    // int
    int value1 = 1, value2 = 5;
    int valueAnswer = value1 + value2;
    printf("The sum of %d and %d is %d\n", value1, value2, valueAnswer);
    printf("\n==============================================\n");

    // double
    double doubleValue1 = 1.5, doubleValue2 = 6.9;
    double doubleValueAddition = doubleValue1 + doubleValue2;
    printf("The sum of %lf and %lf is %lf\n", doubleValue1, doubleValue2, doubleValueAddition);
    printf("\n==============================================\n");
    
    // float
    float floatValue1 = 1.5, floatValue2 = 6.9;
    float floatValueaddition = floatValue1 + floatValue2;
    printf("The sum of %f and %f is %f\n", floatValue1, floatValue2, floatValueaddition);
    printf("\n==============================================\n");
    
    // string
    char string1[] = "Hello, World!";
    printf("%s\n", string1);
    printf("\n==============================================\n");
    
    // bool
    bool isValueTrue = true;
    printf("The value of isValueTrue is %d\n", isValueTrue);
    printf("\n==============================================\n");
    
    // char
    char character = 'A';
    printf("The character is %c\n", character);
    printf("\n==============================================\n");
    
    // void
    void *ptr = NULL;
    printf("The value of ptr is %p\n", ptr);
    printf("\n==============================================\n");

    return 0;
}