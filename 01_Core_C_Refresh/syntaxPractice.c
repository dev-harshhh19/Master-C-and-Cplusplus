#include"stdio.h"

int main(){
    int a, b, c;
    char d[50];

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("You entered %d, %d and %d\n", a,b,c);
    
    // wait(5000);

    printf("Enter a 50 character string: ");
    scanf("%s", d);
    printf("You entered: %s\n", d);

    return 0;
}